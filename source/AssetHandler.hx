import openfl.utils.Future;
import flixel.graphics.FlxGraphic;
import openfl.display.BitmapData;
#if cpp
import sys.io.File;
import sys.FileSystem;
#end

import openfl.Assets as OpenFLAssets;
import lime.utils.Assets as LimeAssets;

class AssetHandler
{
    public static var loadedAssets(default, null):Map<String, Dynamic> = [];

    public static function loadAsset(path:String, content:Dynamic)
    {
        loadedAssets.set(path, content);
    }

    public static function clearCache()
    {
        for (key in loadedAssets.keys())
        {
            var shit = loadedAssets[key];

            switch(Type.typeof(shit)){
                case TClass(BitmapData):
                    shit.dispose();
                case TClass(FlxGraphic):
                    shit.destroy();
                default:
                {
                    //do fucking nothing
                }
            }
        }
    }

    public static var textGrabber:String->Void =
    #if cpp
        File.getContent;
    #else
        LimeAssets.getText;
    #end

    public static function grabTextAsync(path:String):Future<String>
    {
        #if cpp
        return Future.withValue(File.getContent(path));
        #else
        return LimeAssets.loadText(path);
        #end
    }

    //public static var imageGrabber:String->Void =
}