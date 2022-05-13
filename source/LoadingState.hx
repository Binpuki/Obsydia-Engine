package;

import haxe.Json;
import openfl.utils.Assets;
import Stage.StageJSON;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.system.FlxSound;
import lime.app.Future;
import flixel.graphics.FlxGraphic;
import openfl.display.BitmapData;

using StringTools;

class LoadingState extends MusicBeatState
{
    var imagePaths:Array<String> = [Paths.image('num1')];
    
    var percentShit:Array<Int> = [0, 0];
    var percent:Float;

    var percentBar:FlxSprite;

    override function create()
    {
        getStageImages('a');

        super.create();

        percentShit[1] = (imagePaths.length) + 2;
        percent = percentShit[0] / percentShit[1];

        percentBar = new FlxSprite(0, FlxG.height - 20).makeGraphic(FlxG.width, 20, FlxColor.WHITE);
        add(percentBar);

        loadImages();
        loadSongs();
    }

    override function update(elapsed:Float)
    {
        percent = percentShit[0] / percentShit[1];
        percentBar.scale.x = percent;
    }

    inline static public function loadAndSwitchState(target:FlxState, stopMusic = false)
	{
		FlxG.switchState(new LoadingState());
	}

    function getStageImages(path:String)
    {
        //get the fucking thingy
        var jsonThingy:StageJSON = cast Json.parse(Assets.getText(path).trim());

        for (lawl in jsonThingy.layers)
        {
            for (poop in lawl)
            {
                imagePaths.push(Paths.cutPath(Paths.image(poop.texturePath[0], poop.texturePath[1])));
            }
        }
    }

    function loadImages()
    {
        for (path in imagePaths) //LOAD IMAGES grjfeioarjiogijofeaijo
        {
            BitmapData.loadFromFile(path).onComplete(function(bitmap){ //OK FIRST MAKE BITMAP
                AssetHandler.loadAsset(path, bitmap); //PUT THE THING IN THE THING
                objectFinishLoading();
            });
        }
    }

    function loadSongs()
    {
        var songPaths:Array<String> = [Paths.inst(PlayState.SONG.song), Paths.voices(PlayState.SONG.song)];

        if (PlayState.inst != null) {PlayState.inst.destroy();  PlayState.inst = null;}
        if (PlayState.vocals != null) {PlayState.vocals.destroy();  PlayState.vocals = null;}

        PlayState.inst = new FlxSound().loadStream(Paths.inst(PlayState.SONG.song), false, true, null, objectFinishLoading);
        PlayState.vocals = new FlxSound().loadStream(Paths.voices(PlayState.SONG.song), false, true, null, objectFinishLoading);
    }

    function objectFinishLoading()
    {
        percentShit[0]++;
        trace(percent);
    }
}