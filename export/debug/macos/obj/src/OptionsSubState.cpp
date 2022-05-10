#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ControlsSubState
#include <ControlsSubState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_OptionsSubState
#include <OptionsSubState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5813655399be5ed0_9_new,"OptionsSubState","new",0xc4a08641,"OptionsSubState.new","OptionsSubState.hx",9,0xe308bc4f)
static const ::String _hx_array_data_cdf651cf_2[] = {
	HX_("Master Volume",98,7d,62,62),HX_("Sound Volume",4b,fd,8f,d5),HX_("Controls",96,42,6e,11),
};
HX_LOCAL_STACK_FRAME(_hx_pos_5813655399be5ed0_53_update,"OptionsSubState","update",0xb290f2c8,"OptionsSubState.update","OptionsSubState.hx",53,0xe308bc4f)
HX_LOCAL_STACK_FRAME(_hx_pos_5813655399be5ed0_37_update,"OptionsSubState","update",0xb290f2c8,"OptionsSubState.update","OptionsSubState.hx",37,0xe308bc4f)

void OptionsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5813655399be5ed0_9_new)
HXLINE(  14)		this->curSelected = 0;
HXLINE(  11)		this->textMenuItems = ::Array_obj< ::String >::fromData( _hx_array_data_cdf651cf_2,3);
HXLINE(  20)		super::__construct();
HXLINE(  22)		this->grpOptionsTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  23)		this->add(this->grpOptionsTexts);
HXLINE(  25)		this->selector =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(5,5,-65536,null(),null());
HXLINE(  26)		this->add(this->selector);
HXLINE(  28)		{
HXLINE(  28)			int _g = 0;
HXDLIN(  28)			int _g1 = this->textMenuItems->length;
HXDLIN(  28)			while((_g < _g1)){
HXLINE(  28)				_g = (_g + 1);
HXDLIN(  28)				int i = (_g - 1);
HXLINE(  30)				 ::flixel::text::FlxText optionText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,(20 + (i * 50)),0,this->textMenuItems->__get(i),32,null());
HXLINE(  31)				optionText->ID = i;
HXLINE(  32)				this->grpOptionsTexts->add(optionText).StaticCast<  ::flixel::text::FlxText >();
            			}
            		}
            	}

Dynamic OptionsSubState_obj::__CreateEmpty() { return new OptionsSubState_obj; }

void *OptionsSubState_obj::_hx_vtable = 0;

Dynamic OptionsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsSubState_obj > _hx_result = new OptionsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x27392463) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x27392463;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void OptionsSubState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::OptionsSubState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::text::FlxText txt){
            			HX_STACKFRAME(&_hx_pos_5813655399be5ed0_53_update)
HXLINE(  54)			txt->set_color(-1);
HXLINE(  56)			if ((txt->ID == _gthis->curSelected)) {
HXLINE(  57)				txt->set_color(-256);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_5813655399be5ed0_37_update)
HXDLIN(  37)		 ::OptionsSubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  38)		this->super::update(elapsed);
HXLINE(  40)		if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE(  41)			 ::OptionsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  41)			_hx_tmp->curSelected = (_hx_tmp->curSelected - 1);
            		}
HXLINE(  43)		if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE(  44)			 ::OptionsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  44)			_hx_tmp->curSelected = (_hx_tmp->curSelected + 1);
            		}
HXLINE(  46)		if ((this->curSelected < 0)) {
HXLINE(  47)			this->curSelected = (this->textMenuItems->length - 1);
            		}
HXLINE(  49)		if ((this->curSelected >= this->textMenuItems->length)) {
HXLINE(  50)			this->curSelected = 0;
            		}
HXLINE(  52)		this->grpOptionsTexts->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  60)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  62)			if ((this->textMenuItems->__get(this->curSelected) == HX_("Controls",96,42,6e,11))) {
HXLINE(  65)				::flixel::FlxG_obj::game->_state->closeSubState();
HXLINE(  66)				 ::flixel::FlxState _hx_tmp = ::flixel::FlxG_obj::game->_state;
HXDLIN(  66)				_hx_tmp->openSubState( ::ControlsSubState_obj::__alloc( HX_CTX ));
            			}
            		}
            	}



::hx::ObjectPtr< OptionsSubState_obj > OptionsSubState_obj::__new() {
	::hx::ObjectPtr< OptionsSubState_obj > __this = new OptionsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OptionsSubState_obj > OptionsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OptionsSubState_obj *__this = (OptionsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsSubState_obj), true, "OptionsSubState"));
	*(void **)__this = OptionsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionsSubState_obj::OptionsSubState_obj()
{
}

void OptionsSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsSubState);
	HX_MARK_MEMBER_NAME(textMenuItems,"textMenuItems");
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(grpOptionsTexts,"grpOptionsTexts");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textMenuItems,"textMenuItems");
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(grpOptionsTexts,"grpOptionsTexts");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textMenuItems") ) { return ::hx::Val( textMenuItems ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"grpOptionsTexts") ) { return ::hx::Val( grpOptionsTexts ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionsSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textMenuItems") ) { textMenuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"grpOptionsTexts") ) { grpOptionsTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textMenuItems",74,ab,77,14));
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("grpOptionsTexts",6d,2e,b1,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsSubState_obj,textMenuItems),HX_("textMenuItems",74,ab,77,14)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsSubState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(OptionsSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsSubState_obj,grpOptionsTexts),HX_("grpOptionsTexts",6d,2e,b1,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionsSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionsSubState_obj_sMemberFields[] = {
	HX_("textMenuItems",74,ab,77,14),
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("grpOptionsTexts",6d,2e,b1,bf),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class OptionsSubState_obj::__mClass;

void OptionsSubState_obj::__register()
{
	OptionsSubState_obj _hx_dummy;
	OptionsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsSubState",cf,51,f6,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
