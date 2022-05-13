package sprites;

import flixel.math.FlxPoint;
import flixel.FlxSprite;

class StageSprite extends FlxSprite
{
    public var name:String = "";
    public var boppin:Bool = false;
    public var danced:Bool = false;

    public var animOffsets(default, null):Map<String, FlxPoint> = [];
    public var animIndices(default, null):Map<String, Array<Int>> = [];
    public var animPrefixes(default, null):Map<String, String> = [];

    public var graphicPath:Array<String> = [];

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

    public function addByIndices(Name:String, Prefix:String, Indices:Array<Int>, Postfix:String, FrameRate:Int = 30, Looped:Bool = true, FlipX:Bool = false, FlipY:Bool = false):Void
	{
        animIndices.set(Name, Indices);
        animPrefixes.set(Name, Prefix);

		animation.addByIndices(Name, Prefix, Indices, Postfix, FrameRate, Looped, FlipX, FlipY);
	}

    public function addByPrefix(Name:String, Prefix:String, FrameRate:Int = 30, Looped:Bool = true, FlipX:Bool = false, FlipY:Bool = false)
    {
        animPrefixes.set(Name, Prefix);

        animation.addByPrefix(Name, Prefix, FrameRate, Looped, FlipX, FlipY);
    }
}