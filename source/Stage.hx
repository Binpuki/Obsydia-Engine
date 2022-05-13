package;

import flixel.FlxBasic;
import sprites.StageSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;

class Stage extends FlxTypedGroup<FlxBasic>
{
    public var layers(default, null):Array<FlxTypedGroup<StageSprite>> = []; //WHAT THE FUCK IS THIS

    public var boppers(default, null):FlxTypedGroup<StageSprite>;
    
    override function new(shit:StageJSON)
    {
        super();

        boppers = new FlxTypedGroup<StageSprite>();

        layers = JSONToStage(shit);

        for (layer in layers)
        {
            add(layer);

            layer.forEach(function(obj:StageSprite){
                if (obj.boppin) boppers.add(obj);

                
            });
        }
    }

    public static function StageToJSON(stage:Stage)
    {
        var daLayers = stage.layers;

        for (layer in daLayers)
        {
            layer.forEach(function(obj:StageSprite){

            });
            
        }
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
                        poop.animation.addByIndices('danceLeft', anim.animPrefix, anim.indices, "", anim.frameRate, anim.looped);
                        poop.addOffset('danceLeft', anim.offset[0], anim.offset[1]);
                    }
                    else if (anim2 != null)
                    {
                        poop.animation.addByPrefix('danceLeft', anim.animPrefix, anim.frameRate, anim.looped);
                        poop.addOffset('idle', anim.offset[0], anim.offset[1]);
                    }
                    else
                    {
                        poop.animation.addByPrefix('idle', anim.animPrefix, anim.frameRate, anim.looped);
                        poop.addOffset('idle', anim.offset[0], anim.offset[1]);
                        poop.dance();
                    }

                    if (anim2 != null && anim2.indices != null && anim2.boppinBeat)
                    {
                        poop.animation.addByIndices('danceRight', anim2.animPrefix, anim2.indices, "", anim2.frameRate, anim2.looped);
                        poop.addOffset('danceRight', anim2.offset[0], anim2.offset[1]);
                        poop.dance();
                    }
                    else if (anim2 != null && anim2.boppinBeat)
                    {
                        poop.animation.addByPrefix('danceRight', anim2.animPrefix, anim2.frameRate, anim2.looped);
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

                //For every lol
                poop.name = sprite.name;
                poop.alpha = sprite.alpha != null ? sprite.alpha : 1;
                poop.visible = sprite.visible != null ? sprite.visible : true;

                var scrollX:Float = sprite.scrollFactor[0] != null ? sprite.scrollFactor[0] : 1;
                var scrollY:Float = sprite.scrollFactor[1] != null ? sprite.scrollFactor[1] : 1;

                poop.scrollFactor.set(scrollX, scrollY);

                var scaleX:Float = sprite.scale[0] != null ? sprite.scale[0] : 1;
                var scaleY:Float = sprite.scale[1] != null ? sprite.scale[1] : 1;

                poop.scale.set(scaleX, scaleY);

                poop.antialiasing = sprite.antialiasing;

                group.add(poop);
            }
        }

        return stuffzies;
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
    var frameRate:Int;
    var boppinBeat:Bool;
    var looped:Bool;
    var offset:Array<Int>;
}