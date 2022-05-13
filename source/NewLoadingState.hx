package;

import flixel.graphics.FlxGraphic;
import openfl.display.BitmapData;

class NewLoadingState extends MusicBeatState
{
    var imagePaths:Array<String> = [Paths.image('stageback', 'shared')];

    override function create()
    {
        super.create();

        for (path in imagePaths)
        {
            var bitmap = BitmapData.loadFromFile(path)
        }
    }
}