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
    var imagePaths:Array<String> = [
        Paths.image('BOYFRIEND', 'shared')
    ];
    var imageIdx:Int = 0;
    var imageTotal:Int = 0;

    var xmlPaths:Array<String> = [
        Paths.file('images/BOYFRIEND.xml', TEXT, 'shared')
    ];
    var xmlIdx:Int = 0;
    var xmlTotal:Int = 0;
    
    var percentShit:Array<Int> = [0, 0];
    var percent:Float;

    var finished:Bool = false;

    var percentBar:FlxSprite;

    override function create()
    {
        //getStageImages('a');

        super.create();

        percentShit[1] = (imagePaths.length) + (xmlPaths.length) + 2;
        percent = percentShit[0] / percentShit[1];

        imageTotal = imagePaths.length;
        xmlTotal = xmlPaths.length;

        percentBar = new FlxSprite(0, FlxG.height - 20).makeGraphic(FlxG.width, 20, FlxColor.WHITE);
        add(percentBar);

        loadImage(imageIdx);
        //loadSongs();
    }

    var transitioning:Bool = false;

    override function update(elapsed:Float)
    {
        percent = percentShit[0] / percentShit[1];
        percentBar.scale.x = percent;

        if (finished && !transitioning)
        {
            transitioning = true;

            FlxG.switchState(new PlayState());
        }
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

    function loadImage(idx:Int)
    {
        var path = imagePaths[idx];
        var cutPath = Paths.cutPath(path);

        BitmapData.loadFromFile(cutPath).onComplete(function(bitmap){ //OK FIRST MAKE BITMAP
            AssetHandler.loadAsset(path, bitmap); //PUT THE THING IN THE THING
            objectFinishLoading();
            imageIdx++;
            
            if (imageIdx < imageTotal)
            {
                loadImage(imageIdx);
            }
            else
            {
                loadXML(xmlIdx);
            }
        });
    }

    function loadXML(idx:Int)
    {
        var path = xmlPaths[idx];
        var cutPath = Paths.cutPath(path);

        AssetHandler.grabTextAsync(cutPath).onComplete(function(xmlShit){
            AssetHandler.loadAsset(path, xmlShit); //PUT THE THING IN THE THING
            objectFinishLoading();
            xmlIdx++;
            
            if (xmlIdx < xmlTotal)
            {
                loadXML(xmlIdx);
            }
            else
            {
                loadSongs();
            }
        });
    }

    function loadSongs()
    {
        if (PlayState.inst != null) {PlayState.inst.destroy();  PlayState.inst = null;}
        if (PlayState.vocals != null) {PlayState.vocals.destroy();  PlayState.vocals = null;}

        PlayState.inst = new FlxSound().loadStream(Paths.inst(PlayState.SONG.song), false, true, null, objectFinishLoading);
        PlayState.vocals = new FlxSound().loadStream(Paths.voices(PlayState.SONG.song), false, true, null, objectFinishLoading);
    }

    function objectFinishLoading()
    {
        percentShit[0]++;
        trace(percent);

        if (percentShit[0] == percentShit[1])
        {
            finished = true;
        }
    }
}