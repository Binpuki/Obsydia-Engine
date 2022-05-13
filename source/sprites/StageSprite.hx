package sprites;

import flixel.math.FlxPoint;
import flixel.FlxSprite;

class StageSprite extends FlxSprite
{
    public var name:String = "";
    public var boppin:Bool = false;
    public var danced:Bool = false;

    private var animOffsets(default, null):Map<String, FlxPoint>;

    public function addOffset(anim:String, x:Float, y:Float)
    {
        animOffsets.set(anim, new FlxPoint(x, y));
    }

    public function dance()
    {
        if (animOffsets.exists('danceRight') && animOffsets.exists('danceLeft'))
        {
            if (!danced)
            {
                animation.play('danceLeft', true);
                offset.set(animOffsets['danceLeft'].x, animOffsets['danceLeft'].y);
                danced = !danced;
            }
            else
            {
                animation.play('danceRight', true);
                offset.set(animOffsets['danceRight'].x, animOffsets['danceRight'].y);
                danced = !danced;
            }
        }
        else
        {
            animation.play('idle');
            offset.set(animOffsets['idle'].x, animOffsets['idle'].y);
        }
    }
}