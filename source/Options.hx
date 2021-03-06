package;

import flixel.FlxG;
import flixel.input.keyboard.FlxKey;

class Options
{
	public static var masterVolume:Float = 1;

	public var firstControls:Array<FlxKey> = [A, S, K, L]; //primary controls (ASKL by default)
	public var secondControls:Array<FlxKey> = [LEFT, DOWN, UP, RIGHT]; //secondary controls (arrow keys by default)
	public var extraControls:Map<FlxKey, String> = [ //For all your funny mechanics
		SPACE => "dodge"
	];

	public var downScroll:Bool = true; //Pretty obvious, stoopi
	public var ghostTapping:Bool = true; //If you want to not miss when there's no notes that are hittable

	public function new()
	{

	}
}
