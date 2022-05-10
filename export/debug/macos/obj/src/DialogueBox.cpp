#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_DialogueBox
#include <DialogueBox.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_57_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",57,0x0149b4eb)
HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_15_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",15,0x0149b4eb)
static const int _hx_array_data_ffc81fb3_4[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_5[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_6[] = {
	(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_152_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",152,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_196_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",196,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_206_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",206,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_225_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",225,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_255_cleanDialog,"DialogueBox","cleanDialog",0x0fc249f6,"DialogueBox.cleanDialog","DialogueBox.hx",255,0x0149b4eb)

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_57_new)
HXLINE(  58)			 ::flixel::FlxSprite fh = _gthis->bgFade;
HXDLIN(  58)			fh->set_alpha((fh->alpha + ((Float)0.139999999999999986)));
HXLINE(  59)			if ((_gthis->bgFade->alpha > ((Float)0.7))) {
HXLINE(  60)				_gthis->bgFade->set_alpha(((Float)0.7));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool talkingRight = __o_talkingRight.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_15_new)
HXLINE( 222)		this->isEnding = false;
HXLINE( 149)		this->dialogueStarted = false;
HXLINE( 148)		this->dialogueOpened = false;
HXLINE(  22)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  19)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  38)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  39)		super::__construct(null(),null(),null());
HXLINE(  41)		::String _hx_switch_0 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  44)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  44)			::String library = null();
HXDLIN(  44)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("Lunchbox",c1,34,3f,3d)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  45)			{
HXLINE(  45)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  45)				 ::Dynamic onComplete = null();
HXDLIN(  45)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  45)					_this->play(null(),null(),null());
            				}
HXDLIN(  45)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  45)					_this->fadeTween->cancel();
            				}
HXDLIN(  45)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  47)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  47)			::String library = null();
HXDLIN(  47)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("LunchboxScary",57,33,01,24)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  48)			{
HXLINE(  48)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  48)				 ::Dynamic onComplete = null();
HXDLIN(  48)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  48)					_this->play(null(),null(),null());
            				}
HXDLIN(  48)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  48)					_this->fadeTween->cancel();
            				}
HXDLIN(  48)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  46)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  51)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  51)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  52)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  53)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  54)		this->add(this->bgFade);
HXLINE(  56)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.83), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE(  63)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  65)		bool hasDialog = false;
HXLINE(  66)		::String _hx_switch_1 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_1==HX_("roses",04,6c,64,ed)) ){
HXLINE(  74)			hasDialog = true;
HXLINE(  75)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  75)			_hx_tmp->play(::Paths_obj::sound(HX_("ANGRY_TEXT_BOX",57,5c,5c,19),null()),null(),null(),null(),null(),null());
HXLINE(  77)			 ::flixel::FlxSprite _hx_tmp1 = this->box;
HXDLIN(  77)			::String library = null();
HXDLIN(  77)			::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  77)			_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  78)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),24,false,null(),null());
HXLINE(  79)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_4,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  73)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  69)			hasDialog = true;
HXLINE(  70)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  70)			::String library = null();
HXDLIN(  70)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  70)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  71)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Text Box Appear",bd,48,54,1a),24,false,null(),null());
HXLINE(  72)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Text Box Appear",bd,48,54,1a),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_5,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  68)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  82)			hasDialog = true;
HXLINE(  83)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  83)			::String library = null();
HXDLIN(  83)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  83)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  84)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Spirit Textbox spawn",ea,ee,35,84),24,false,null(),null());
HXLINE(  85)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Spirit Textbox spawn",ea,ee,35,84),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_6,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  87)			 ::flixel::FlxSprite face =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,170,null());
HXDLIN(  87)			::String library1 = null();
HXDLIN(  87)			 ::flixel::FlxSprite face1 = face->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spiritFaceForward",93,1c,29,2a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  88)			face1->setGraphicSize(::Std_obj::_hx_int((face1->get_width() * ( (Float)(6) ))),null());
HXLINE(  89)			this->add(face1);
HXLINE(  81)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  92)		this->dialogueList = dialogueList;
HXLINE(  94)		if (!(hasDialog)) {
HXLINE(  95)			return;
            		}
HXLINE(  97)		this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE(  98)		 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN(  98)		::String library = null();
HXDLIN(  98)		::String _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  98)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  99)		this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE( 100)		 ::flixel::FlxSprite _hx_tmp4 = this->portraitLeft;
HXDLIN( 100)		Float _hx_tmp5 = this->portraitLeft->get_width();
HXDLIN( 100)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp5 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 101)		this->portraitLeft->updateHitbox();
HXLINE( 102)		this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 103)		this->add(this->portraitLeft);
HXLINE( 104)		this->portraitLeft->set_visible(false);
HXLINE( 106)		this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE( 107)		 ::flixel::FlxSprite _hx_tmp6 = this->portraitRight;
HXDLIN( 107)		::String library1 = null();
HXDLIN( 107)		::String _hx_tmp7 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 107)		_hx_tmp6->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp7,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE( 108)		this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Boyfriend portrait enter",a9,02,f8,de),24,false,null(),null());
HXLINE( 109)		 ::flixel::FlxSprite _hx_tmp8 = this->portraitRight;
HXDLIN( 109)		Float _hx_tmp9 = this->portraitRight->get_width();
HXDLIN( 109)		_hx_tmp8->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp9 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 110)		this->portraitRight->updateHitbox();
HXLINE( 111)		this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 112)		this->add(this->portraitRight);
HXLINE( 113)		this->portraitRight->set_visible(false);
HXLINE( 115)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE( 116)		 ::flixel::FlxSprite _hx_tmp10 = this->box;
HXDLIN( 116)		Float _hx_tmp11 = this->box->get_width();
HXDLIN( 116)		_hx_tmp10->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp11 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 117)		this->box->updateHitbox();
HXLINE( 118)		this->add(this->box);
HXLINE( 120)		{
HXLINE( 120)			 ::flixel::FlxSprite _this = this->box;
HXDLIN( 120)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 120)			if (::hx::IsNull( axes )) {
HXLINE( 120)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 120)			bool _hx_tmp12;
HXDLIN( 120)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 120)					_hx_tmp12 = true;
            				}
            				break;
            				default:{
HXLINE( 120)					_hx_tmp12 = false;
            				}
            			}
HXDLIN( 120)			if (_hx_tmp12) {
HXLINE( 120)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 120)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 120)			bool _hx_tmp13;
HXDLIN( 120)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 120)					_hx_tmp13 = true;
            				}
            				break;
            				default:{
HXLINE( 120)					_hx_tmp13 = false;
            				}
            			}
HXDLIN( 120)			if (_hx_tmp13) {
HXLINE( 120)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 120)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 121)		{
HXLINE( 121)			 ::flixel::FlxSprite _this1 = this->portraitLeft;
HXDLIN( 121)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 121)			if (::hx::IsNull( axes1 )) {
HXLINE( 121)				axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 121)			bool _hx_tmp14;
HXDLIN( 121)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 121)					_hx_tmp14 = true;
            				}
            				break;
            				default:{
HXLINE( 121)					_hx_tmp14 = false;
            				}
            			}
HXDLIN( 121)			if (_hx_tmp14) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 121)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 121)			bool _hx_tmp15;
HXDLIN( 121)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 121)					_hx_tmp15 = true;
            				}
            				break;
            				default:{
HXLINE( 121)					_hx_tmp15 = false;
            				}
            			}
HXDLIN( 121)			if (_hx_tmp15) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 121)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 123)		 ::flixel::FlxSprite _hx_tmp16 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.9)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.9)),null());
HXDLIN( 123)		::String library2 = null();
HXDLIN( 123)		this->handSelect = _hx_tmp16->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/hand_textbox",67,1b,cd,60)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2),null(),null(),null(),null(),null());
HXLINE( 124)		this->add(this->handSelect);
HXLINE( 127)		bool _hx_tmp17 = !(talkingRight);
HXLINE( 132)		this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,242,502,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 133)		this->dropText->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 134)		this->dropText->set_color(-2583404);
HXLINE( 135)		this->add(this->dropText);
HXLINE( 137)		this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(240) ),( (Float)(500) ),::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 138)		this->swagDialogue->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 139)		this->swagDialogue->set_color(-12640223);
HXLINE( 140)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp18 = ::flixel::FlxG_obj::sound;
HXDLIN( 140)		 ::flixel::_hx_system::FlxSound _hx_tmp19 = _hx_tmp18->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.6),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 140)		this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp19);
HXLINE( 141)		this->add(this->swagDialogue);
HXLINE( 143)		this->dialogue =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(80) ),HX_("",00,00,00,00),false,true);
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x04b35cb7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b35cb7;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_152_update)
HXDLIN( 152)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 154)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed))) {
HXLINE( 155)			this->portraitLeft->set_visible(false);
            		}
HXLINE( 156)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c))) {
HXLINE( 158)			this->portraitLeft->set_color(-16777216);
HXLINE( 159)			this->swagDialogue->set_color(-1);
HXLINE( 160)			this->dropText->set_color(-16777216);
            		}
HXLINE( 163)		this->dropText->set_text(this->swagDialogue->text);
HXLINE( 165)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 167)			bool _hx_tmp;
HXDLIN( 167)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 167)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 167)				_hx_tmp = false;
            			}
HXDLIN( 167)			if (_hx_tmp) {
HXLINE( 169)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 170)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (this->dialogueOpened) {
HXLINE( 174)			_hx_tmp = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 176)			this->startDialogue();
HXLINE( 177)			this->dialogueStarted = true;
            		}
HXLINE( 180)		bool _hx_tmp1;
HXDLIN( 180)		if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 180)			_hx_tmp1 = (this->dialogueStarted == true);
            		}
            		else {
HXLINE( 180)			_hx_tmp1 = false;
            		}
HXDLIN( 180)		if (_hx_tmp1) {
HXLINE( 182)			this->remove(this->dialogue,null());
HXLINE( 184)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 184)			_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 186)			bool _hx_tmp1;
HXDLIN( 186)			if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 186)				_hx_tmp1 = ::hx::IsNotNull( this->dialogueList->__get(0) );
            			}
            			else {
HXLINE( 186)				_hx_tmp1 = false;
            			}
HXDLIN( 186)			if (_hx_tmp1) {
HXLINE( 188)				if (!(this->isEnding)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_196_update)
HXLINE( 197)						 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 197)						fh->set_alpha((fh->alpha - ((Float)0.2)));
HXLINE( 198)						 ::flixel::FlxSprite fh1 = _gthis->bgFade;
HXDLIN( 198)						fh1->set_alpha((fh1->alpha - ((Float)0.139999999999999986)));
HXLINE( 199)						_gthis->portraitLeft->set_visible(false);
HXLINE( 200)						_gthis->portraitRight->set_visible(false);
HXLINE( 201)						 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 201)						fh2->set_alpha((fh2->alpha - ((Float)0.2)));
HXLINE( 202)						_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_206_update)
HXLINE( 207)						_gthis->finishThing();
HXLINE( 208)						_gthis->kill();
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 190)					this->isEnding = true;
HXLINE( 192)					bool _hx_tmp;
HXDLIN( 192)					if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 192)						_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            					}
            					else {
HXLINE( 192)						_hx_tmp = true;
            					}
HXDLIN( 192)					if (_hx_tmp) {
HXLINE( 193)						 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 193)						 ::Dynamic To = 0;
HXDLIN( 193)						 ::Dynamic onComplete = null();
HXDLIN( 193)						if (::hx::IsNull( To )) {
HXLINE( 193)							To = 0;
            						}
HXDLIN( 193)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 193)							_this->fadeTween->cancel();
            						}
HXDLIN( 193)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)2.2), ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
HXLINE( 195)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 205)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.2), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            				}
            			}
            			else {
HXLINE( 214)				this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 215)				this->startDialogue();
            			}
            		}
HXLINE( 219)		this->super::update(elapsed);
            	}


void DialogueBox_obj::startDialogue(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_225_startDialogue)
HXLINE( 226)		this->cleanDialog();
HXLINE( 232)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 233)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
HXLINE( 235)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 245)			this->portraitLeft->set_visible(false);
HXLINE( 246)			if (!(this->portraitRight->visible)) {
HXLINE( 248)				this->portraitRight->set_visible(true);
HXLINE( 249)				this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 244)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 238)			this->portraitRight->set_visible(false);
HXLINE( 239)			if (!(this->portraitLeft->visible)) {
HXLINE( 241)				this->portraitLeft->set_visible(true);
HXLINE( 242)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 237)			goto _hx_goto_10;
            		}
            		_hx_goto_10:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_255_cleanDialog)
HXLINE( 256)		::Array< ::String > splitName = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE( 257)		this->curCharacter = splitName->__get(1);
HXLINE( 258)		this->dialogueList[0] = ::StringTools_obj::trim(this->dialogueList->__get(0).substr((splitName->__get(1).length + 2),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBox_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBox_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("finishThing",9b,aa,8e,36),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	::String(null()) };

::hx::Class DialogueBox_obj::__mClass;

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBox",b3,1f,c8,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
