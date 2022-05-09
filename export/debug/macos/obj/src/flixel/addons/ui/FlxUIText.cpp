#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontFixer
#include <flixel/addons/ui/FontFixer.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e806b787b3227c3b_15_new,"flixel.addons.ui.FlxUIText","new",0x88106994,"flixel.addons.ui.FlxUIText.new","flixel/addons/ui/FlxUIText.hx",15,0x557f53bd)
HX_LOCAL_STACK_FRAME(_hx_pos_e806b787b3227c3b_28_resize,"flixel.addons.ui.FlxUIText","resize",0x42437940,"flixel.addons.ui.FlxUIText.resize","flixel/addons/ui/FlxUIText.hx",28,0x557f53bd)
HX_LOCAL_STACK_FRAME(_hx_pos_e806b787b3227c3b_101_set_minimumHeight,"flixel.addons.ui.FlxUIText","set_minimumHeight",0xb1233fec,"flixel.addons.ui.FlxUIText.set_minimumHeight","flixel/addons/ui/FlxUIText.hx",101,0x557f53bd)
HX_LOCAL_STACK_FRAME(_hx_pos_e806b787b3227c3b_111_set_params,"flixel.addons.ui.FlxUIText","set_params",0xcdb7becf,"flixel.addons.ui.FlxUIText.set_params","flixel/addons/ui/FlxUIText.hx",111,0x557f53bd)
HX_LOCAL_STACK_FRAME(_hx_pos_e806b787b3227c3b_117_clone,"flixel.addons.ui.FlxUIText","clone",0xab5f6191,"flixel.addons.ui.FlxUIText.clone","flixel/addons/ui/FlxUIText.hx",117,0x557f53bd)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float FieldWidth = __o_FieldWidth.Default(0);
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_e806b787b3227c3b_15_new)
HXLINE(  20)		this->minimumHeight = ((Float)1);
HXLINE(  17)		this->broadcastToFlxUI = true;
HXLINE(  24)		super::__construct(X,Y,FieldWidth,Text,Size,EmbeddedFont);
            	}

Dynamic FlxUIText_obj::__CreateEmpty() { return new FlxUIText_obj; }

void *FlxUIText_obj::_hx_vtable = 0;

Dynamic FlxUIText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIText_obj > _hx_result = new FlxUIText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxUIText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x752f90b6) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x752f90b6;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7fd79200;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIText__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIText_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIText_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIText_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIText__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIText__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIText_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIText_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIText_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIText_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUIText__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUIText_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUIText__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIText_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIText_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIText_obj::resize,
};

void *FlxUIText_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIText__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIText__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIText__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUIText__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUIText__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUIText_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_e806b787b3227c3b_28_resize)
HXLINE(  29)		int sign = 1;
HXLINE(  31)		if ((h < this->minimumHeight)) {
HXLINE(  33)			h = this->minimumHeight;
            		}
HXLINE(  36)		if ((h < this->get_height())) {
HXLINE(  38)			sign = -1;
            		}
HXLINE(  41)		this->set_width(w);
HXLINE(  42)		this->set_height(h);
HXLINE(  44)		 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN(  44)		_hx_tmp->set_width(this->get_width());
HXLINE(  46)		int old_size = ::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) ));
HXLINE(  47)		Float diff = this->get_height();
HXDLIN(  47)		Float diff1 = (diff - ( (Float)(this->graphic->bitmap->height) ));
HXLINE(  58)		int failsafe = 0;
HXLINE(  60)		int numLines = this->textField->get_numLines();
HXLINE(  62)		while(true){
HXLINE(  62)			bool _hx_tmp;
HXDLIN(  62)			if (((diff1 * ( (Float)(sign) )) > 0)) {
HXLINE(  62)				_hx_tmp = (failsafe < 999);
            			}
            			else {
HXLINE(  62)				_hx_tmp = false;
            			}
HXDLIN(  62)			if (!(_hx_tmp)) {
HXLINE(  62)				goto _hx_goto_1;
            			}
HXLINE(  64)			failsafe = (failsafe + 1);
HXLINE(  65)			this->set_size((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + sign));
HXLINE(  66)			bool _hx_tmp1;
HXDLIN(  66)			if ((sign > 0)) {
HXLINE(  66)				_hx_tmp1 = (this->textField->get_numLines() > numLines);
            			}
            			else {
HXLINE(  66)				_hx_tmp1 = false;
            			}
HXDLIN(  66)			if (_hx_tmp1) {
HXLINE(  68)				this->set_size((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) - sign));
HXLINE(  69)				goto _hx_goto_1;
            			}
HXLINE(  71)			this->_regen = true;
HXLINE(  72)			this->calcFrame(true);
HXLINE(  77)			diff1 = (h - ( (Float)(this->graphic->bitmap->height) ));
HXLINE(  80)			diff1 = (h - ( (Float)(this->graphic->bitmap->height) ));
            		}
            		_hx_goto_1:;
HXLINE(  87)		if ((failsafe >= 999)) {
HXLINE(  89)			::flixel::FlxG_obj::log->advanced(((HX_("Loop failsafe tripped while resizing FlxUIText to height(",fa,63,b3,d6) + h) + HX_(")",29,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE(  90)			this->set_size(old_size);
            		}
HXLINE(  93)		this->set_width(w);
HXLINE(  94)		this->set_height(h);
HXLINE(  96)		this->_regen = true;
HXLINE(  97)		this->calcFrame(true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIText_obj,resize,(void))

Float FlxUIText_obj::set_minimumHeight(Float H){
            	HX_STACKFRAME(&_hx_pos_e806b787b3227c3b_101_set_minimumHeight)
HXLINE( 102)		if ((H < 1)) {
HXLINE( 104)			H = ( (Float)(1) );
            		}
HXLINE( 106)		this->minimumHeight = H;
HXLINE( 107)		return this->minimumHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIText_obj,set_minimumHeight,return )

::cpp::VirtualArray FlxUIText_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_e806b787b3227c3b_111_set_params)
HXLINE( 112)		this->params = p;
HXLINE( 113)		return this->params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIText_obj,set_params,return )

 ::flixel::FlxSprite FlxUIText_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e806b787b3227c3b_117_clone)
HXLINE( 118)		 ::flixel::addons::ui::FlxUIText newText =  ::flixel::addons::ui::FlxUIText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 119)		newText->set_width(this->get_width());
HXLINE( 120)		newText->set_height(this->get_height());
HXLINE( 122)		::String theFont = this->_font;
HXLINE( 124)		theFont = ::flixel::addons::ui::FontFixer_obj::fix(this->_font);
HXLINE( 126)		int _hx_tmp = ::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) ));
HXDLIN( 126)		newText->setFormat(theFont,_hx_tmp,this->color,null(),null(),null(),null());
HXLINE( 129)		bool _hx_tmp1;
HXDLIN( 129)		if (::hx::IsNotNull( this->_defaultFormat )) {
HXLINE( 129)			_hx_tmp1 = ::hx::IsNotNull( this->_defaultFormat->align );
            		}
            		else {
HXLINE( 129)			_hx_tmp1 = false;
            		}
HXDLIN( 129)		if (_hx_tmp1) {
HXLINE( 131)			newText->set_alignment(::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align));
            		}
HXLINE( 133)		{
HXLINE( 133)			int Color = this->borderColor;
HXDLIN( 133)			Float Size = this->borderSize;
HXDLIN( 133)			Float Quality = this->borderQuality;
HXDLIN( 133)			newText->set_borderStyle(this->borderStyle);
HXDLIN( 133)			newText->set_borderColor(Color);
HXDLIN( 133)			newText->set_borderSize(Size);
HXDLIN( 133)			newText->set_borderQuality(Quality);
            		}
HXLINE( 134)		newText->set_text(this->text);
HXLINE( 135)		return newText;
            	}



::hx::ObjectPtr< FlxUIText_obj > FlxUIText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxUIText_obj > __this = new FlxUIText_obj();
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxUIText_obj > FlxUIText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxUIText_obj *__this = (FlxUIText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIText_obj), true, "flixel.addons.ui.FlxUIText"));
	*(void **)__this = FlxUIText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

FlxUIText_obj::FlxUIText_obj()
{
}

void FlxUIText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIText);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(minimumHeight,"minimumHeight");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(minimumHeight,"minimumHeight");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimumHeight") ) { return ::hx::Val( minimumHeight ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_minimumHeight") ) { return ::hx::Val( set_minimumHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimumHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minimumHeight(inValue.Cast< Float >()) );minimumHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("minimumHeight",55,90,f2,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIText_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUIText_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{::hx::fsString,(int)offsetof(FlxUIText_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUIText_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsFloat,(int)offsetof(FlxUIText_obj,minimumHeight),HX_("minimumHeight",55,90,f2,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUIText_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIText_obj_sMemberFields[] = {
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("name",4b,72,ff,48),
	HX_("params",46,fb,7a,ed),
	HX_("minimumHeight",55,90,f2,c8),
	HX_("resize",f4,59,7b,08),
	HX_("set_minimumHeight",b8,73,d0,f2),
	HX_("set_params",83,09,80,e1),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class FlxUIText_obj::__mClass;

void FlxUIText_obj::__register()
{
	FlxUIText_obj _hx_dummy;
	FlxUIText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIText",a2,4f,17,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
