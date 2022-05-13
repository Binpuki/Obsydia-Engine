package;

import flixel.animation.FlxAnimation;
import flixel.util.FlxSort;
import flixel.FlxBasic;
import sprites.StageSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;

class Stage extends FlxTypedGroup<FlxBasic>
{
    public var sprites(default, null):Map<String, StageSprite> = [];

    public var layers(default, null):Array<FlxTypedGroup<StageSprite>> = []; //WHAT THE FUCK IS THIS

    public var boppers(default, null):FlxTypedGroup<StageSprite>;
    
    override function new(?shit:StageJSON = null)
    {
        super();

        boppers = new FlxTypedGroup<StageSprite>();

        layers = shit != null ? JSONToStage(shit) : [];

        loadStage();
    }

    public function createLayer()
    {
        var newLayer = new FlxTypedGroup<StageSprite>();

        layers.push(newLayer);
    }

    public function createNewSprite()
    {
        
    }

    override public function destroy()
    {
        for (layer in layers)
        {
            remove(layer);
            layer.destroy();
        }

        layers = null;

        super.destroy();
    }

    public function loadStage()
    {
        for (layer in layers)
        {
            add(layer);

            layer.forEach(function(obj:StageSprite){
                if (obj.boppin) boppers.add(obj);

                if (obj.name != "") sprites.set(obj.name, obj);
            });
        }
    }

    public static function StageToJSON(stage:Stage) //ThIS IS SO CHAOTIC I AM SO SORRY
    {
        var daLayers = stage.layers;

        var data:StageJSON;
        var dataLayers:Array<Array<StageObject>> = [];

        for (layer in daLayers)
        {
            var dataLayer:Array<StageObject> = [];

            layer.forEach(function(obj:StageSprite)
            {
                var spriteData:StageObject;

                //ANIM SHIT
                var ifAnimsExist:Bool = (obj.animation.exists('idle')) || (obj.animation.exists('danceLeft') && obj.animation.exists('danceRight'));
                var doubleDance:Bool = true;
                var firstAnim:FlxAnimation = obj.animation.getByName('danceLeft');
                var firstAnimName:String = 'danceLeft';
                var firstAnimData:StageAnimData;
                var secondAnim:FlxAnimation;
                var secondAnimData:StageAnimData;

                if (ifAnimsExist)
                {
                    if (firstAnim == null)
                    {
                        firstAnim = obj.animation.getByName('idle');
                        doubleDance = false;
                        firstAnimName = 'idle';
                    }

                    firstAnimData =
                    {
                        animPrefix: obj.animPrefixes[firstAnimName],
                        indices: obj.animIndices[firstAnimName],
                        frameRate: firstAnim.frameRate,
                        boppinBeat: obj.boppin,
                        looped: firstAnim.looped,
                        offset: [obj.animOffsets[firstAnimName].x, obj.animOffsets[firstAnimName].y]
                    }

                    if (doubleDance)
                    {
                        secondAnim = obj.animation.getByName('danceRight');
                        
                        secondAnimData =
                        {
                            animPrefix: obj.animPrefixes['danceRight'],
                            indices: obj.animIndices['danceRight'],
                            frameRate: secondAnim.frameRate,
                            boppinBeat: obj.boppin,
                            looped: secondAnim.looped,
                            offset: [obj.animOffsets['danceRight'].x, obj.animOffsets['danceRight'].y]
                        }
                    }
                }

                //REST OF THE SHIT
                spriteData = 
                {
                    name: obj.name,
                    texturePath: obj.graphicPath,
                    position: [obj.x, obj.y],
                    ID: obj.ID,
                    scale: [obj.scale.x, obj.scale.y],
                    antialiasing: obj.antialiasing,
                    scrollFactor: [obj.scrollFactor.x, obj.scrollFactor.y],
                    alpha: obj.alpha,
                    visible: obj.visible,
                    flipX: obj.flipX,
                    flipY: obj.flipY,
                    animated: ifAnimsExist,
                    firstAnim: ifAnimsExist ? firstAnimData : null,
                    secondAnim: ifAnimsExist ? secondAnimData : null,
                }

                dataLayer.push(spriteData);
            });

            dataLayer.sort(sortByIDJSON);

            dataLayers.push(dataLayer);
        }

        data = 
        {
            layers: dataLayers
        }

        return data;
    }

    public static function JSONToStage(shit:StageJSON)
    {
        var stuffzies:Array<FlxTypedGroup<StageSprite>> = [];

        for (i in 0...shit.layers.length)
        {
            //MAKE SHIT AHHHH
            var group = stuffzies[i] = new FlxTypedGroup<StageSprite>();

            var dataLayer = shit.layers[i];

            for (sprite in dataLayer)
            {
                var poop = new StageSprite(sprite.position[0], sprite.position[1]);

                var xmlShitExists:Bool = AssetHandler.loadedAssets.exists('${Paths.file(sprite.texturePath[0] + '.xml', sprite.texturePath[1])}');

                if (sprite.animated && xmlShitExists)
                {
                    poop.frames = FlxAtlasFrames.fromSparrow(
                        AssetHandler.loadedAssets[Paths.image(sprite.texturePath[0], sprite.texturePath[1])],
                        AssetHandler.loadedAssets[Paths.file(sprite.texturePath[0] + '.xml', sprite.texturePath[1])]
                    );

                    var anim = sprite.firstAnim;
                    var anim2 = sprite.secondAnim;

                    if (anim.indices != null && anim2 != null && anim.boppinBeat)
                    {
                        poop.addByIndices('danceLeft', anim.animPrefix, anim.indices, "", Std.int(anim.frameRate), anim.looped);
                        poop.addOffset('danceLeft', anim.offset[0], anim.offset[1]);
                    }
                    else if (anim2 != null)
                    {
                        poop.addByPrefix('danceLeft', anim.animPrefix, Std.int(anim.frameRate), anim.looped);
                        poop.addOffset('idle', anim.offset[0], anim.offset[1]);
                    }
                    else
                    {
                        poop.addByPrefix('idle', anim.animPrefix, Std.int(anim.frameRate), anim.looped);
                        poop.addOffset('idle', anim.offset[0], anim.offset[1]);
                        poop.dance();
                    }

                    if (anim2 != null && anim2.indices != null && anim2.boppinBeat)
                    {
                        poop.addByIndices('danceRight', anim2.animPrefix, anim2.indices, "", Std.int(anim2.frameRate), anim2.looped);
                        poop.addOffset('danceRight', anim2.offset[0], anim2.offset[1]);
                        poop.dance();
                    }
                    else if (anim2 != null && anim2.boppinBeat)
                    {
                        poop.addByPrefix('danceRight', anim2.animPrefix, Std.int(anim2.frameRate), anim2.looped);
                        poop.addOffset('idle', anim2.offset[0], anim2.offset[1]);
                        poop.dance();
                    }

                    if (anim.boppinBeat)
                    {
                        //boppers.add(poop);
                        poop.boppin = true;
                    }
                }
                else
                {
                    poop.loadGraphic(AssetHandler.loadedAssets[Paths.image(sprite.texturePath[0], sprite.texturePath[1])]);
                }

                poop.graphicPath = sprite.texturePath;

                //For every lol
                poop.name = sprite.name;
                poop.alpha = sprite.alpha != null ? CoolUtil.nullFloatToFloat(sprite.alpha) : 1;
                poop.visible = sprite.visible != null ? sprite.visible : true;

                var scrollX:Float = sprite.scrollFactor[0] != null ? CoolUtil.nullFloatToFloat(sprite.scrollFactor[0]) : 1;
                var scrollY:Float = sprite.scrollFactor[1] != null ? CoolUtil.nullFloatToFloat(sprite.scrollFactor[1]) : 1;

                poop.scrollFactor.set(scrollX, scrollY);

                var scaleX:Float = sprite.scale[0] != null ? CoolUtil.nullFloatToFloat(sprite.scale[0]) : 1;
                var scaleY:Float = sprite.scale[1] != null ? CoolUtil.nullFloatToFloat(sprite.scale[1]) : 1;

                poop.scale.set(scaleX, scaleY);

                poop.antialiasing = sprite.antialiasing;

                poop.ID = sprite.ID;

                group.add(poop);
            }

            group.members.sort(sortByID);
        }

        return stuffzies;
    }

    static function sortByID(Obj1:StageSprite, Obj2:StageSprite)
    {
        return FlxSort.byValues(FlxSort.ASCENDING, Obj1.ID, Obj2.ID);
    }

    static function sortByIDJSON(Obj1:StageObject, Obj2:StageObject)
    {
        return FlxSort.byValues(FlxSort.ASCENDING, Obj1.ID, Obj2.ID);
    }
}

typedef StageJSON =
{
    var layers:Array<Array<StageObject>>;
}

typedef StageObject =
{
    var name:String;
    var texturePath:Array<String>;
    var position:Array<Float>;

    var ID:Int;

    var scale:Array<Float>;
    var antialiasing:Bool;
    @:optional var scrollFactor:Array<Float>;
    @:optional var alpha:Float;
    @:optional var visible:Bool;

    @:optional var flipX:Bool;
    @:optional var flipY:Bool;

    var animated:Bool;
    
    @:optional var firstAnim:StageAnimData;
    @:optional var secondAnim:StageAnimData;
}
//PUT YOUR MORE COMPLICATED ANIMATED SHIT IN THE HSCRIPT

typedef StageAnimData = 
{
    var animPrefix:String;
    @:optional var indices:Array<Int>;
    var frameRate:Float;
    var boppinBeat:Bool;
    var looped:Bool;
    var offset:Array<Float>;
}