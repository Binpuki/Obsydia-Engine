package;

import openfl.display.BitmapData;
import flixel.graphics.FlxGraphic;
#if cpp
import sys.io.File;
import sys.FileSystem;
#end
import openfl.Assets;

class SkinPaths
{
    public static function skinImage(skin:String, key:String, ?library:String = 'preload'):FlxGraphic
    {
        var path = Paths.file('skins/$skin/$key.png', IMAGE, library);
        switch (Paths.doesItExist(path))
        {
            case 'openfl':
            {
                return FlxGraphic.fromAssetKey(path);
            }

            case 'cpp':
            {
                #if cpp
                return FlxGraphic.fromBitmapData(BitmapData.fromBytes(File.getBytes(Paths.cutPath(path))));
                #else
                trace('This program was not compiled in CPP.'); //how tf do you even get this
                #end
            }
        }

        return FlxGraphic.fromAssetKey('assets/skins/default/NOTE_assets.png');
    }

    public static function skinSparrow(skin:String, key:String, ?library:String = 'preload'):String
    {
        var path = Paths.file('skins/$skin/$key.xml', TEXT, library);
        switch (Paths.doesItExist(path))
        {
            case 'openfl':
            {
                return path;
            }
            case 'cpp':
            {
                #if cpp
                return File.getContent(Paths.cutPath(path));
                #else
                trace('This program was not compiled in CPP.'); //how tf do you even get this
                #end
            }
        }

        return Paths.file('skins/default/NOTE_assets.xml', TEXT, library);
    }

    public static function skinMetadata(skin:String, key:String, ?library:String = 'preload')
    {
        var path = Paths.file('skins/$skin/$key.json', TEXT, library);
        switch (Paths.doesItExist(path))
        {
            case 'openfl':
            {
                return path;
            }
            case 'cpp':
            {
                #if cpp
                return File.getContent(Paths.cutPath(path));
                #else
                trace('This program was not compiled in CPP.'); //how tf do you even get this
                #end
            }
        }

        return Paths.file('skins/default/metadata.json', TEXT, library);
    }
}