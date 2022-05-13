package editors;

import Stage.StageJSON;

class StageEditorState extends MusicBeatState
{
    var curStage:Stage;
    var curData:StageJSON;
    
    var curName:String = 'stage';

    override function create()
    {
        super.create();
    }
}