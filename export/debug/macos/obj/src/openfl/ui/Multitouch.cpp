#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_ui_Multitouch
#include <openfl/ui/Multitouch.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d04537844d94f90f_112___init__,"::openfl::ui::Multitouch_obj","__init__",0xd9e1825c,"::openfl::ui::Multitouch_obj.__init__","openfl/ui/Multitouch.hx",112,0xce42901c)
HX_LOCAL_STACK_FRAME(_hx_pos_0f8b8e224a678ffc_143_get_supportsTouchEvents,"openfl.ui.Multitouch","get_supportsTouchEvents",0x2ba8207f,"openfl.ui.Multitouch.get_supportsTouchEvents","openfl/ui/Multitouch.hx",143,0xce42901c)
namespace openfl{
namespace ui{

void Multitouch_obj::__construct() { }

Dynamic Multitouch_obj::__CreateEmpty() { return new Multitouch_obj; }

void *Multitouch_obj::_hx_vtable = 0;

Dynamic Multitouch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Multitouch_obj > _hx_result = new Multitouch_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Multitouch_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x647efaea;
}

void Multitouch_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_d04537844d94f90f_112___init__)
HXLINE( 113)		::openfl::ui::Multitouch_obj::maxTouchPoints = 2;
HXLINE( 114)		::openfl::ui::Multitouch_obj::supportedGestures = null();
HXLINE( 115)		::openfl::ui::Multitouch_obj::supportsGestureEvents = false;
HXLINE( 116)		::openfl::ui::Multitouch_obj::inputMode = 2;
            	}


 ::Dynamic Multitouch_obj::inputMode;

int Multitouch_obj::maxTouchPoints;

 ::openfl::_Vector::ObjectVector Multitouch_obj::supportedGestures;

bool Multitouch_obj::supportsGestureEvents;

bool Multitouch_obj::get_supportsTouchEvents(){
            	HX_STACKFRAME(&_hx_pos_0f8b8e224a678ffc_143_get_supportsTouchEvents)
HXDLIN( 143)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_supportsTouchEvents,return )


Multitouch_obj::Multitouch_obj()
{
}

bool Multitouch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { outValue = ( inputMode ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { outValue = ( maxTouchPoints ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { outValue = ( supportedGestures ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsTouchEvents() ); return true; } }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { outValue = ( supportsGestureEvents ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_supportsTouchEvents") ) { outValue = get_supportsTouchEvents_dyn(); return true; }
	}
	return false;
}

bool Multitouch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { inputMode=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { supportedGestures=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { supportsGestureEvents=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Multitouch_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Multitouch_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Multitouch_obj::inputMode,HX_("inputMode",8d,90,8b,0f)},
	{::hx::fsInt,(void *) &Multitouch_obj::maxTouchPoints,HX_("maxTouchPoints",fe,7e,0e,64)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Multitouch_obj::supportedGestures,HX_("supportedGestures",18,be,c8,bc)},
	{::hx::fsBool,(void *) &Multitouch_obj::supportsGestureEvents,HX_("supportsGestureEvents",5e,d6,ce,30)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Multitouch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Multitouch_obj::inputMode,"inputMode");
	HX_MARK_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Multitouch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Multitouch_obj::inputMode,"inputMode");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
};

#endif

::hx::Class Multitouch_obj::__mClass;

static ::String Multitouch_obj_sStaticFields[] = {
	HX_("inputMode",8d,90,8b,0f),
	HX_("maxTouchPoints",fe,7e,0e,64),
	HX_("supportedGestures",18,be,c8,bc),
	HX_("supportsGestureEvents",5e,d6,ce,30),
	HX_("get_supportsTouchEvents",ab,97,f3,72),
	::String(null())
};

void Multitouch_obj::__register()
{
	Multitouch_obj _hx_dummy;
	Multitouch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.ui.Multitouch",42,0d,e8,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Multitouch_obj::__GetStatic;
	__mClass->mSetStaticField = &Multitouch_obj::__SetStatic;
	__mClass->mMarkFunc = Multitouch_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Multitouch_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Multitouch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Multitouch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Multitouch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Multitouch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Multitouch_obj::__boot()
{
}

} // end namespace openfl
} // end namespace ui
