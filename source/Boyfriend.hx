package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.util.FlxTimer;

using StringTools;

class Boyfriend extends Character
{
	public var stunned(default, set):Bool = false;

	public function new(x:Float, y:Float, ?char:String = 'bf')
	{
		super(x, y, char, true);
	}

	override function update(elapsed:Float)
	{
		if (!debugMode)
		{
			if (animation.curAnim.name.startsWith('sing'))
			{
				holdTimer += elapsed;
			}
			else
				holdTimer = 0;
		}

		super.update(elapsed);
	}

	function frameUpdate(name:String, frameNumber:Int, frameIndex:Int)
	{
		//rjgehfjwds
	}

	function finishAnim(name:String)
	{
		switch (name)
		{
			case 'firstDeath':
				playAnim('deathLoop');
		}

		/*

		if (name.endsWith('miss') && !debugMode)
		{
			stunned = false;
			playAnim('idle', true, false, 10);
		}
		*/
	}

	function set_stunned(value:Bool):Bool {
		stunned = value;

		new FlxTimer().start(5 / 60, function(tmr:FlxTimer)
		{
			stunned = false;
		});

		return value;
	}
}
