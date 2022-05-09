#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_SongMetadata
#include <SongMetadata.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86166a84e8de7ace_18_new,"FreeplayState","new",0xc894eea3,"FreeplayState.new","FreeplayState.hx",18,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_37_create,"FreeplayState","create",0x931e5499,"FreeplayState.create","FreeplayState.hx",37,0x0d86f62d)
static const ::String _hx_array_data_b3f26131_4[] = {
	HX_("Bopeebo",90,29,16,da),HX_("Fresh",4e,f6,b3,99),HX_("Dadbattle",9f,4a,7c,48),
};
static const ::String _hx_array_data_b3f26131_5[] = {
	HX_("dad",47,36,4c,00),
};
static const ::String _hx_array_data_b3f26131_6[] = {
	HX_("Spookeez",2c,36,dd,4e),HX_("South",ed,01,fa,13),HX_("Monster",fa,7b,01,86),
};
static const ::String _hx_array_data_b3f26131_7[] = {
	HX_("spooky",eb,bd,9e,c1),
};
static const ::String _hx_array_data_b3f26131_8[] = {
	HX_("Pico",05,15,31,35),HX_("Philly",48,eb,f2,23),HX_("Blammed",76,2a,51,09),
};
static const ::String _hx_array_data_b3f26131_9[] = {
	HX_("pico",e5,e8,57,4a),
};
static const ::String _hx_array_data_b3f26131_10[] = {
	HX_("Satin-Panties",be,dc,41,e6),HX_("High",82,63,e7,2f),HX_("Milf",f6,78,35,33),
};
static const ::String _hx_array_data_b3f26131_11[] = {
	HX_("mom",cb,16,53,00),
};
static const ::String _hx_array_data_b3f26131_12[] = {
	HX_("Cocoa",e9,0c,83,dd),HX_("Eggnog",81,78,4e,29),HX_("Winter-Horrorland",9d,fd,2a,b7),
};
static const ::String _hx_array_data_b3f26131_13[] = {
	HX_("parents-christmas",fe,94,c5,32),HX_("parents-christmas",fe,94,c5,32),HX_("monster-christmas",4f,88,85,27),
};
static const ::String _hx_array_data_b3f26131_14[] = {
	HX_("Senpai",5c,53,22,a0),HX_("Roses",e4,db,91,80),HX_("Thorns",bc,33,5c,c1),
};
static const ::String _hx_array_data_b3f26131_15[] = {
	HX_("senpai",3c,df,8d,6b),HX_("senpai",3c,df,8d,6b),HX_("spirit",31,bb,a9,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_161_addSong,"FreeplayState","addSong",0x9e966259,"FreeplayState.addSong","FreeplayState.hx",161,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_165_addWeek,"FreeplayState","addWeek",0xa1339e78,"FreeplayState.addWeek","FreeplayState.hx",165,0x0d86f62d)
static const ::String _hx_array_data_b3f26131_19[] = {
	HX_("bf",c4,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_180_update,"FreeplayState","update",0x9e1473a6,"FreeplayState.update","FreeplayState.hx",180,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_235_changeDiff,"FreeplayState","changeDiff",0x302511b2,"FreeplayState.changeDiff","FreeplayState.hx",235,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_259_changeSelection,"FreeplayState","changeSelection",0xbe8c8f7f,"FreeplayState.changeSelection","FreeplayState.hx",259,0x0d86f62d)

void FreeplayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_18_new)
HXLINE(  34)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  32)		this->curPlaying = false;
HXLINE(  29)		this->intendedScore = 0;
HXLINE(  28)		this->lerpScore = 0;
HXLINE(  24)		this->curDifficulty = 1;
HXLINE(  23)		this->curSelected = 0;
HXLINE(  20)		this->songs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic FreeplayState_obj::__CreateEmpty() { return new FreeplayState_obj; }

void *FreeplayState_obj::_hx_vtable = 0;

Dynamic FreeplayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FreeplayState_obj > _hx_result = new FreeplayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FreeplayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f09868d) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x5f09868d;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FreeplayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_37_create)
HXLINE(  38)		::String library = null();
HXDLIN(  38)		::Array< ::String > initSonglist = ::CoolUtil_obj::coolTextFile(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("freeplaySonglist",73,3b,dc,de)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  40)		{
HXLINE(  40)			int _g = 0;
HXDLIN(  40)			int _g1 = initSonglist->length;
HXDLIN(  40)			while((_g < _g1)){
HXLINE(  40)				_g = (_g + 1);
HXDLIN(  40)				int i = (_g - 1);
HXLINE(  42)				::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN(  42)				_hx_tmp->push( ::SongMetadata_obj::__alloc( HX_CTX ,initSonglist->__get(i),1,HX_("gf",1f,5a,00,00)));
            			}
            		}
HXLINE(  55)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  58)		bool isDebug = false;
HXLINE(  61)		isDebug = true;
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if (!(::StoryMenuState_obj::weekUnlocked->__get(2))) {
HXLINE(  64)			_hx_tmp = isDebug;
            		}
            		else {
HXLINE(  64)			_hx_tmp = true;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_4,3),1,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_5,1));
            		}
HXLINE(  67)		bool _hx_tmp1;
HXDLIN(  67)		if (!(::StoryMenuState_obj::weekUnlocked->__get(2))) {
HXLINE(  67)			_hx_tmp1 = isDebug;
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (_hx_tmp1) {
HXLINE(  68)			this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_6,3),2,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_7,1));
            		}
HXLINE(  70)		bool _hx_tmp2;
HXDLIN(  70)		if (!(::StoryMenuState_obj::weekUnlocked->__get(3))) {
HXLINE(  70)			_hx_tmp2 = isDebug;
            		}
            		else {
HXLINE(  70)			_hx_tmp2 = true;
            		}
HXDLIN(  70)		if (_hx_tmp2) {
HXLINE(  71)			this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_8,3),3,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_9,1));
            		}
HXLINE(  73)		bool _hx_tmp3;
HXDLIN(  73)		if (!(::StoryMenuState_obj::weekUnlocked->__get(4))) {
HXLINE(  73)			_hx_tmp3 = isDebug;
            		}
            		else {
HXLINE(  73)			_hx_tmp3 = true;
            		}
HXDLIN(  73)		if (_hx_tmp3) {
HXLINE(  74)			this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_10,3),4,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_11,1));
            		}
HXLINE(  76)		bool _hx_tmp4;
HXDLIN(  76)		if (!(::StoryMenuState_obj::weekUnlocked->__get(5))) {
HXLINE(  76)			_hx_tmp4 = isDebug;
            		}
            		else {
HXLINE(  76)			_hx_tmp4 = true;
            		}
HXDLIN(  76)		if (_hx_tmp4) {
HXLINE(  77)			this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_12,3),5,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_13,3));
            		}
HXLINE(  79)		bool _hx_tmp5;
HXDLIN(  79)		if (!(::StoryMenuState_obj::weekUnlocked->__get(6))) {
HXLINE(  79)			_hx_tmp5 = isDebug;
            		}
            		else {
HXLINE(  79)			_hx_tmp5 = true;
            		}
HXDLIN(  79)		if (_hx_tmp5) {
HXLINE(  80)			this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_14,3),6,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_15,3));
            		}
HXLINE(  86)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  86)		::String library1 = null();
HXDLIN(  86)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBGBlue",de,35,e3,1e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  87)		this->add(bg1);
HXLINE(  89)		this->grpSongs =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  90)		this->add(this->grpSongs);
HXLINE(  92)		{
HXLINE(  92)			int _g2 = 0;
HXDLIN(  92)			int _g3 = this->songs->length;
HXDLIN(  92)			while((_g2 < _g3)){
HXLINE(  92)				_g2 = (_g2 + 1);
HXDLIN(  92)				int i = (_g2 - 1);
HXLINE(  94)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->songs->__get(i).StaticCast<  ::SongMetadata >()->songName,true,false);
HXLINE(  95)				songText->isMenuItem = true;
HXLINE(  96)				songText->targetY = ( (Float)(i) );
HXLINE(  97)				this->grpSongs->add(songText).StaticCast<  ::Alphabet >();
HXLINE(  99)				 ::HealthIcon icon =  ::HealthIcon_obj::__alloc( HX_CTX ,this->songs->__get(i).StaticCast<  ::SongMetadata >()->songCharacter,null());
HXLINE( 100)				icon->sprTracker = songText;
HXLINE( 103)				this->iconArray->push(icon);
HXLINE( 104)				this->add(icon);
            			}
            		}
HXLINE( 111)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),5,0,HX_("",00,00,00,00),32,null());
HXLINE( 113)		this->scoreText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 116)		 ::flixel::FlxSprite scoreBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->scoreText->x - ( (Float)(6) )),0,null());
HXDLIN( 116)		 ::flixel::FlxSprite scoreBG1 = scoreBG->makeGraphic(::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))),66,-16777216,null(),null());
HXLINE( 117)		scoreBG1->set_alpha(((Float)0.6));
HXLINE( 118)		this->add(scoreBG1);
HXLINE( 120)		this->diffText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->scoreText->x,(this->scoreText->y + 36),0,HX_("",00,00,00,00),24,null());
HXLINE( 121)		this->diffText->set_font(this->scoreText->_font);
HXLINE( 122)		this->add(this->diffText);
HXLINE( 124)		this->add(this->scoreText);
HXLINE( 126)		this->changeSelection(null());
HXLINE( 127)		this->changeDiff(null());
HXLINE( 131)		this->selector =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 133)		this->selector->set_size(40);
HXLINE( 134)		this->selector->set_text(HX_(">",3e,00,00,00));
HXLINE( 137)		 ::Alphabet swag =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),HX_("swag",8a,2a,5e,4c),null(),null());
HXLINE( 156)		this->super::create();
            	}


void FreeplayState_obj::addSong(::String songName,int weekNum,::String songCharacter){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_161_addSong)
HXDLIN( 161)		::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN( 161)		_hx_tmp->push( ::SongMetadata_obj::__alloc( HX_CTX ,songName,weekNum,songCharacter));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addSong,(void))

void FreeplayState_obj::addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_165_addWeek)
HXLINE( 166)		if (::hx::IsNull( songCharacters )) {
HXLINE( 167)			songCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_19,1);
            		}
HXLINE( 169)		int num = 0;
HXLINE( 170)		{
HXLINE( 170)			int _g = 0;
HXDLIN( 170)			while((_g < songs->length)){
HXLINE( 170)				::String song = songs->__get(_g);
HXDLIN( 170)				_g = (_g + 1);
HXLINE( 172)				this->addSong(song,weekNum,songCharacters->__get(num));
HXLINE( 174)				if ((songCharacters->length != 1)) {
HXLINE( 175)					num = (num + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addWeek,(void))

void FreeplayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_180_update)
HXLINE( 181)		this->super::update(elapsed);
HXLINE( 183)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 185)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 185)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 188)		Float a = ( (Float)(this->lerpScore) );
HXDLIN( 188)		this->lerpScore = ::Math_obj::floor((a + (((Float)0.4) * (( (Float)(this->intendedScore) ) - a))));
HXLINE( 190)		if ((::Math_obj::abs(( (Float)((this->lerpScore - this->intendedScore)) )) <= 10)) {
HXLINE( 191)			this->lerpScore = this->intendedScore;
            		}
HXLINE( 193)		this->scoreText->set_text((HX_("PERSONAL BEST:",36,ce,e9,ee) + this->lerpScore));
HXLINE( 195)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE( 196)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE( 197)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 199)		if (upP) {
HXLINE( 201)			this->changeSelection(-1);
            		}
HXLINE( 203)		if (downP) {
HXLINE( 205)			this->changeSelection(1);
            		}
HXLINE( 208)		if (::PlayerSettings_obj::player1->controls->_leftP->check()) {
HXLINE( 209)			this->changeDiff(-1);
            		}
HXLINE( 210)		if (::PlayerSettings_obj::player1->controls->_rightP->check()) {
HXLINE( 211)			this->changeDiff(1);
            		}
HXLINE( 213)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 215)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 215)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 215)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 218)		if (accepted) {
HXLINE( 220)			::String poop = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
HXDLIN( 220)			::String poop1 = ::Highscore_obj::formatSong(poop,this->curDifficulty);
HXLINE( 222)			::haxe::Log_obj::trace(poop1,::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),222,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
HXLINE( 224)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop1,this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase());
HXLINE( 225)			::PlayState_obj::isStoryMode = false;
HXLINE( 226)			::PlayState_obj::storyDifficulty = this->curDifficulty;
HXLINE( 228)			::PlayState_obj::storyWeek = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->week;
HXLINE( 229)			::haxe::Log_obj::trace((HX_("CUR WEEK",b4,9a,a0,36) + ::PlayState_obj::storyWeek),::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),229,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
HXLINE( 230)			{
HXLINE( 230)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX )) ),false);
HXDLIN( 230)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 230)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


void FreeplayState_obj::changeDiff(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_235_changeDiff)
HXLINE( 236)		 ::FreeplayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 236)		_hx_tmp->curDifficulty = (_hx_tmp->curDifficulty + change);
HXLINE( 238)		if ((this->curDifficulty < 0)) {
HXLINE( 239)			this->curDifficulty = 2;
            		}
HXLINE( 240)		if ((this->curDifficulty > 2)) {
HXLINE( 241)			this->curDifficulty = 0;
            		}
HXLINE( 244)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName,this->curDifficulty);
HXLINE( 247)		switch((int)(this->curDifficulty)){
            			case (int)0: {
HXLINE( 250)				this->diffText->set_text(HX_("EASY",02,54,cd,2d));
            			}
            			break;
            			case (int)1: {
HXLINE( 252)				this->diffText->set_text(HX_("NORMAL",27,1e,ec,e2));
            			}
            			break;
            			case (int)2: {
HXLINE( 254)				this->diffText->set_text(HX_("HARD",eb,f6,c8,2f));
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeDiff,(void))

void FreeplayState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_259_changeSelection)
HXLINE( 261)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 261)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 263)		 ::FreeplayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 265)		if ((this->curSelected < 0)) {
HXLINE( 266)			this->curSelected = (this->songs->length - 1);
            		}
HXLINE( 267)		if ((this->curSelected >= this->songs->length)) {
HXLINE( 268)			this->curSelected = 0;
            		}
HXLINE( 273)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName,this->curDifficulty);
HXLINE( 278)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 278)		_hx_tmp2->playMusic((((HX_("songs:assets/songs/",c1,ed,e6,7e) + this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00)),0,null(),null());
HXLINE( 281)		int bullShit = 0;
HXLINE( 283)		{
HXLINE( 283)			int _g = 0;
HXDLIN( 283)			int _g1 = this->iconArray->length;
HXDLIN( 283)			while((_g < _g1)){
HXLINE( 283)				_g = (_g + 1);
HXDLIN( 283)				int i = (_g - 1);
HXLINE( 285)				this->iconArray->__get(i).StaticCast<  ::HealthIcon >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 288)		this->iconArray->__get(this->curSelected).StaticCast<  ::HealthIcon >()->set_alpha(( (Float)(1) ));
HXLINE( 290)		{
HXLINE( 290)			int _g2 = 0;
HXDLIN( 290)			::Array< ::Dynamic> _g3 = this->grpSongs->members;
HXDLIN( 290)			while((_g2 < _g3->length)){
HXLINE( 290)				 ::Alphabet item = _g3->__get(_g2).StaticCast<  ::Alphabet >();
HXDLIN( 290)				_g2 = (_g2 + 1);
HXLINE( 292)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 293)				bullShit = (bullShit + 1);
HXLINE( 295)				item->set_alpha(((Float)0.6));
HXLINE( 298)				if ((item->targetY == 0)) {
HXLINE( 300)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeSelection,(void))


::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FreeplayState_obj > __this = new FreeplayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FreeplayState_obj *__this = (FreeplayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FreeplayState_obj), true, "FreeplayState"));
	*(void **)__this = FreeplayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FreeplayState_obj::FreeplayState_obj()
{
}

void FreeplayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeplayState);
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(diffText,"diffText");
	HX_MARK_MEMBER_NAME(lerpScore,"lerpScore");
	HX_MARK_MEMBER_NAME(intendedScore,"intendedScore");
	HX_MARK_MEMBER_NAME(grpSongs,"grpSongs");
	HX_MARK_MEMBER_NAME(curPlaying,"curPlaying");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FreeplayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(diffText,"diffText");
	HX_VISIT_MEMBER_NAME(lerpScore,"lerpScore");
	HX_VISIT_MEMBER_NAME(intendedScore,"intendedScore");
	HX_VISIT_MEMBER_NAME(grpSongs,"grpSongs");
	HX_VISIT_MEMBER_NAME(curPlaying,"curPlaying");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FreeplayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addSong") ) { return ::hx::Val( addSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWeek") ) { return ::hx::Val( addWeek_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		if (HX_FIELD_EQ(inName,"diffText") ) { return ::hx::Val( diffText ); }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { return ::hx::Val( grpSongs ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { return ::hx::Val( lerpScore ); }
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curPlaying") ) { return ::hx::Val( curPlaying ); }
		if (HX_FIELD_EQ(inName,"changeDiff") ) { return ::hx::Val( changeDiff_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { return ::hx::Val( curDifficulty ); }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { return ::hx::Val( intendedScore ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FreeplayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffText") ) { diffText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { grpSongs=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { lerpScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curPlaying") ) { curPlaying=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { intendedScore=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FreeplayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curDifficulty",db,b7,38,a7));
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("diffText",52,3b,1b,21));
	outFields->push(HX_("lerpScore",5b,81,4d,e7));
	outFields->push(HX_("intendedScore",a7,fd,7c,89));
	outFields->push(HX_("grpSongs",d9,dc,c7,63));
	outFields->push(HX_("curPlaying",ce,61,01,95));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FreeplayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,curDifficulty),HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,diffText),HX_("diffText",52,3b,1b,21)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,lerpScore),HX_("lerpScore",5b,81,4d,e7)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,intendedScore),HX_("intendedScore",a7,fd,7c,89)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FreeplayState_obj,grpSongs),HX_("grpSongs",d9,dc,c7,63)},
	{::hx::fsBool,(int)offsetof(FreeplayState_obj,curPlaying),HX_("curPlaying",ce,61,01,95)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FreeplayState_obj_sStaticStorageInfo = 0;
#endif

static ::String FreeplayState_obj_sMemberFields[] = {
	HX_("songs",fe,36,c7,80),
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("scoreText",1f,7d,bd,dc),
	HX_("diffText",52,3b,1b,21),
	HX_("lerpScore",5b,81,4d,e7),
	HX_("intendedScore",a7,fd,7c,89),
	HX_("grpSongs",d9,dc,c7,63),
	HX_("curPlaying",ce,61,01,95),
	HX_("iconArray",60,3f,53,5f),
	HX_("create",fc,66,0f,7c),
	HX_("addSong",96,66,95,88),
	HX_("addWeek",b5,a2,32,8b),
	HX_("update",09,86,05,87),
	HX_("changeDiff",95,91,b2,1c),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class FreeplayState_obj::__mClass;

void FreeplayState_obj::__register()
{
	FreeplayState_obj _hx_dummy;
	FreeplayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FreeplayState",31,61,f2,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FreeplayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FreeplayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FreeplayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

