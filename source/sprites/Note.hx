package sprites;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
#if polymod
import polymod.format.ParseRules.TargetSignatureElement;
#end

using StringTools;

class Note extends FlxSprite
{
	public static var noteSkin:NoteSkin;

	public var strumTime:Float = 0;

	public var mustPress:Bool = false;
	public var noteData:Int = 0;
	public var canBeHit:Bool = false;
	public var tooLate:Bool = false;
	public var wasGoodHit:Bool = false;

	public var prevNote:Note;
	public var parentNote:Note;
	public var wholeNote:Array<Note> = []; //Represents the entire note, arrow and sus

	public var sustainLength:Float = 0;
	public var isSustainNote(default, null):Bool = false;
	public var isSustainEnd(default, null):Bool = false;

	public var beingHit:Bool = false;
	public var alreadyMissed:Bool = false;

	public var noteScore:Float = 1;

	public static var swagWidth:Float = 160 * 0.7;
	public static var PURP_NOTE:Int = 0;
	public static var GREEN_NOTE:Int = 2;
	public static var BLUE_NOTE:Int = 1;
	public static var RED_NOTE:Int = 3;

	public function new(strumTime:Float, noteData:Int, ?prevNote:Note, ?sustainNote:Bool = false)
	{
		super();

		this.prevNote = prevNote;
		isSustainNote = sustainNote;

		if (prevNote == null)
		{
			parentNote = this;
			wholeNote.push(this);
		}
		else
		{
			if (!prevNote.isSustainNote)
			{
				parentNote = prevNote;
			}
			else
			{
				parentNote = prevNote.parentNote;
			}

			parentNote.wholeNote.push(this);
		}

		x += (FlxG.width / 4) - ((Note.swagWidth * 4) / 2);
		// MAKE SURE ITS DEFINITELY OFF SCREEN?
		y -= 2000;
		this.strumTime = strumTime;

		this.noteData = noteData;

		/*
		var daStage:String = PlayState.curStage;

		switch (daStage)
		{
			case 'school' | 'schoolEvil':
				loadGraphic(Paths.image('weeb/pixelUI/arrows-pixels'), true, 17, 17);

				animation.add('greenScroll', [6]);
				animation.add('redScroll', [7]);
				animation.add('blueScroll', [5]);
				animation.add('purpleScroll', [4]);

				if (isSustainNote)
				{
					loadGraphic(Paths.image('weeb/pixelUI/arrowEnds'), true, 7, 6);

					animation.add('purpleholdend', [4]);
					animation.add('greenholdend', [6]);
					animation.add('redholdend', [7]);
					animation.add('blueholdend', [5]);

					animation.add('purplehold', [0]);
					animation.add('greenhold', [2]);
					animation.add('redhold', [3]);
					animation.add('bluehold', [1]);
				}

				setGraphicSize(Std.int(width * PlayState.daPixelZoom));
				updateHitbox();

			default:
				frames = Paths.getSparrowAtlas('NOTE_assets');

				animation.addByPrefix('greenScroll', 'green0');
				animation.addByPrefix('redScroll', 'red0');
				animation.addByPrefix('blueScroll', 'blue0');
				animation.addByPrefix('purpleScroll', 'purple0');

				animation.addByPrefix('purpleholdend', 'pruple end hold');
				animation.addByPrefix('greenholdend', 'green hold end');
				animation.addByPrefix('redholdend', 'red hold end');
				animation.addByPrefix('blueholdend', 'blue hold end');

				animation.addByPrefix('purplehold', 'purple hold piece');
				animation.addByPrefix('greenhold', 'green hold piece');
				animation.addByPrefix('redhold', 'red hold piece');
				animation.addByPrefix('bluehold', 'blue hold piece');

				setGraphicSize(Std.int(width * 0.7));
				updateHitbox();
				antialiasing = true;
		}
		*/

		loadNoteskin();

		// trace(prevNote);

		if (isSustainNote && prevNote != null)
		{
			noteScore * 0.2;
			alpha = 0.6;

			x += width / 2;

			animation.play('holdend', true);
			isSustainEnd = true;

			updateHitbox();

			x -= width / 2;

			if (PlayState.curStage.startsWith('school'))
				x += 30;

			if (prevNote.isSustainNote)
			{
				prevNote.animation.play('hold', true);
				prevNote.isSustainEnd = false;

				prevNote.scale.y *= Conductor.stepCrochet / 100 * 1.5 * PlayState.SONG.speed;
				prevNote.updateHitbox();
				// prevNote.setGraphicSize();
			}
		}
	}

	function loadNoteskin()
	{
		if (noteSkin == null)
        {
            return;
        }

        var shit:NoteAnimation = null;

        switch (noteData)
        {
            case 0:
                shit = noteSkin.left;
            case 1:
                shit = noteSkin.down;
            case 2:
                shit = noteSkin.up;
            case 3:
                shit = noteSkin.right;
        }

		if (shit == null) return;

		switch (noteSkin.actsLike)
        {
            case 'pixel':
                loadGraphic(SkinPaths.skinImage(PlayState.skin, noteSkin.notePath[0], noteSkin.notePath[1]), true, noteSkin.noteGrid[0], noteSkin.noteGrid[1]);
                animation.add('scroll', shit.scrollAnim.pixelFrames, shit.scrollAnim.frameRate);
				animation.add('hold', shit.holdAnim.pixelFrames, shit.holdAnim.frameRate, false);
				animation.add('holdend', shit.holdEndAnim.pixelFrames, shit.holdEndAnim.frameRate, false);
            default:
				frames = FlxAtlasFrames.fromSparrow(SkinPaths.skinImage(PlayState.skin, noteSkin.notePath[0], noteSkin.notePath[1]), SkinPaths.skinSparrow(PlayState.skin, noteSkin.notePath[0], noteSkin.notePath[1]));
                animation.addByPrefix('scroll', shit.scrollAnim.animPrefix, shit.scrollAnim.frameRate);
                animation.addByPrefix('hold', shit.holdAnim.animPrefix, shit.holdAnim.frameRate, false);
                animation.addByPrefix('holdend', shit.holdEndAnim.animPrefix, shit.holdEndAnim.frameRate, false);
        }

        antialiasing = shit.scrollAnim.antialiasing; //AHHHHHHHHHHHHHHHHH

        animation.play('scroll', true);
        updateHitbox();
        setGraphicSize(Std.int(width * noteSkin.scale));
        updateHitbox();

        //this.strumScale = skin.scale;

        positionSelf();
	}

	public function positionSelf() //just in case you wanna mess with this for some reason idfk
    {
        x += Note.swagWidth * noteData;
    }

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (mustPress)
		{
			// The * 0.5 is so that it's easier to hit them too late, instead of too early
			if (strumTime > Conductor.songPosition - Conductor.safeZoneOffset
				&& strumTime < Conductor.songPosition + (Conductor.safeZoneOffset * 0.5))
				canBeHit = true;
			else
				canBeHit = false;

			//Never hit the note at all lol
			var didntHitEver:Bool = strumTime < Conductor.songPosition - Conductor.safeZoneOffset && !wasGoodHit && !isSustainNote;

			//Let go too early (doesn't count for sustain ends because i think thats bullshit)
			//var letGoTooEarly:Bool = !isSustainEnd && strumTime < Conductor.songPosition && isSustainNote && !beingHit && !wasGoodHit;
			if (didntHitEver)
			{
				miss();
			}
		}
		else
		{
			canBeHit = false;

			if (strumTime <= Conductor.songPosition)
				wasGoodHit = true;
		}

		if (tooLate)
		{
			if (alpha > 0.3)
				alpha = 0.3;
		}
	}

	public function miss()
	{
		for (note in parentNote.wholeNote)
		{
			if (!parentNote.alreadyMissed)
			{
				PlayState.currentSession.noteMiss(noteData);
			}
			note.alreadyMissed = true;
			note.tooLate = true;
		}
	}
}

typedef NoteSkin =
{
	var actsLike:String;
	var scale:Float;

	var notePath:Array<String>;
	var noteGrid:Array<Int>;
	var left:NoteAnimation;
	var down:NoteAnimation;
	var up:NoteAnimation;
	var right:NoteAnimation;

	var strumPath:Array<String>;
	var strumGrid:Array<Int>;
	var leftStrum:StrumGraphicSkin;
	var downStrum:StrumGraphicSkin;
	var upStrum:StrumGraphicSkin;
	var rightStrum:StrumGraphicSkin;
}

typedef NoteAnimation =
{
	var scrollAnim:BasicAnimation;
	var holdAnim:BasicAnimation;
	var holdEndAnim:BasicAnimation;
}

typedef StrumGraphicSkin = 
{
	var staticAnim:BasicAnimation;
	var pressedAnim:BasicAnimation;
	var confirmAnim:BasicAnimation;
}

typedef BasicAnimation =
{
	var frameRate:Int;
	var pixelFrames:Array<Int>;
	var animPrefix:String;
	var antialiasing:Bool;
	var offset:Array<Int>;
}