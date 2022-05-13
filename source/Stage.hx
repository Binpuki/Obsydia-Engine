package;

import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;

class Stage extends FlxTypedGroup<FlxSprite>
{
    public var layers(default, null):Array<FlxTypedGroup<FlxSprite>> = []; //WHAT THE FUCK IS THIS
    
    override function new(shit:StageJSON)
    {
        super();

        for (i in 0...shit.layers.length)
        {
            //MAKE SHIT AHHHH
            var group = layers[i] = new FlxTypedGroup<FlxSprite>();

            var dataLayer = shit.layers[i];

            for (sprite in dataLayer)
            {
                var poop = new FlxSprite(sprite.position[0], sprite.position[1]);

                if (sprite.animated)
                {
                    
                }
                else
                {
                    
                }

                //For every lol
                poop.alpha = sprite.alpha != null ? sprite.alpha : 1;
                poop.visible = sprite.visible != null ? sprite.visible : true;
            }
        }
    }
}

typedef StageJSON =
{
    var layers:Array<Array<StageObject>>;
}

typedef StageObject =
{
    var texturePath:Array<String>;
    var position:Array<Float>;

    var scale:Float;
    var antialiasing:Bool;
    @:optional var alpha:Float;
    @:optional var visible:Bool;

    var animated:Bool;
    
    @:optional var animPrefix:String;
    @:optional var frameRate:Int;
    @:optional var boppinBeat:Bool;
    @:optional var looped:Bool;
}