package sprites;

import flixel.graphics.frames.FlxAtlasFrames;
import sprites.Note.NoteSkin;
import sprites.Note.StrumGraphicSkin;
import flixel.FlxSprite;

class StrumNote extends FlxSprite
{
    var noteData:Int = 0;
    var strumScale:Float = 0.7;

    var offsets:Map<String, Array<Int>> = [];

    override public function new(x:Int = 0, y:Int = 0)
    {
        super(x, y);

        updateHitbox();
    }

    public function playAnim(anim:String, forced:Bool = false)
    {
        animation.play(anim, forced);

        updateHitbox();
        
        offset.set((frameWidth/2)-(54*(.7/strumScale)),(frameHeight/2)-(56*(.7/strumScale))); //TY ANDROMEDA ENGINE, WHICH TOOK THIS FROM KE LOL
        if (offsets[anim] != null)
        {
            offset.x += offsets[anim][0];   offset.y += offsets[anim][1]; 
        }
        centerOrigin();
    }

    public function positionSelf() //just in case you wanna mess with this for some reason idfk
    {
        x += Note.swagWidth * noteData;
    }

    public function loadNoteskin(noteData:Int = 0, skin:NoteSkin = null)
    {
        if (skin == null)
        {
            if (Note.noteSkin != null) skin = Note.noteSkin; else return;
        }

        this.noteData = noteData;

        var shit:StrumGraphicSkin = null;

        switch (noteData)
        {
            case 0:
                shit = skin.leftStrum;
            case 1:
                shit = skin.downStrum;
            case 2:
                shit = skin.upStrum;
            case 3:
                shit = skin.rightStrum;
        }

        if (shit == null) return; //bruh

        switch (skin.actsLike)
        {
            case 'pixel':
                loadGraphic(SkinPaths.skinImage(PlayState.skin, skin.strumPath[0], skin.strumPath[1]), true, skin.strumGrid[0], skin.strumGrid[1]);
                animation.add('static', shit.staticAnim.pixelFrames, shit.staticAnim.frameRate);
				animation.add('pressed', shit.pressedAnim.pixelFrames, shit.pressedAnim.frameRate, false);
				animation.add('confirm', shit.confirmAnim.pixelFrames, shit.confirmAnim.frameRate, false);
            default:
                frames = FlxAtlasFrames.fromSparrow(SkinPaths.skinImage(PlayState.skin, skin.strumPath[0], skin.strumPath[1]), SkinPaths.skinSparrow(PlayState.skin, skin.strumPath[0], skin.strumPath[1]));
                animation.addByPrefix('static', shit.staticAnim.animPrefix, shit.staticAnim.frameRate);
                animation.addByPrefix('pressed', shit.pressedAnim.animPrefix, shit.pressedAnim.frameRate, false);
                animation.addByPrefix('confirm', shit.confirmAnim.animPrefix, shit.confirmAnim.frameRate, false);
        }

        antialiasing = shit.staticAnim.antialiasing;

        offsets.set('static', shit.staticAnim.offset);
        offsets.set('pressed', shit.pressedAnim.offset);
        offsets.set('confirm', shit.confirmAnim.offset);

        //updateHitbox();
        setGraphicSize(Std.int(width * skin.scale));
        //updateHitbox();
        playAnim('static', true);

        this.strumScale = skin.scale;

        positionSelf();
    }
}