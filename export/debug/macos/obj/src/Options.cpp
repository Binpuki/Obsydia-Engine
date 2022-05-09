#include <hxcpp.h>

#ifndef INCLUDED_Options
#include <Options.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0a8d9dcffdfdfda_6_new,"Options","new",0x492c7330,"Options.new","Options.hx",6,0x9d9a0240)
static const int _hx_array_data_ad4f5b3e_1[] = {
	(int)37,(int)40,(int)38,(int)39,
};
static const int _hx_array_data_ad4f5b3e_2[] = {
	(int)65,(int)83,(int)75,(int)76,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0a8d9dcffdfdfda_8_boot,"Options","boot",0xb5d15762,"Options.boot","Options.hx",8,0x9d9a0240)

void Options_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b0a8d9dcffdfdfda_6_new)
HXLINE(  12)		 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  12)		_g->set(32,HX_("dodge",d7,ec,bc,dd));
HXDLIN(  12)		this->extraControls = _g;
HXLINE(  11)		this->secondControls = ::Array_obj< int >::fromData( _hx_array_data_ad4f5b3e_1,4);
HXLINE(  10)		this->firstControls = ::Array_obj< int >::fromData( _hx_array_data_ad4f5b3e_2,4);
            	}

Dynamic Options_obj::__CreateEmpty() { return new Options_obj; }

void *Options_obj::_hx_vtable = 0;

Dynamic Options_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Options_obj > _hx_result = new Options_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Options_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d6f007e;
}

Float Options_obj::masterVolume;


::hx::ObjectPtr< Options_obj > Options_obj::__new() {
	::hx::ObjectPtr< Options_obj > __this = new Options_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Options_obj > Options_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Options_obj *__this = (Options_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Options_obj), true, "Options"));
	*(void **)__this = Options_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Options_obj::Options_obj()
{
}

void Options_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Options);
	HX_MARK_MEMBER_NAME(firstControls,"firstControls");
	HX_MARK_MEMBER_NAME(secondControls,"secondControls");
	HX_MARK_MEMBER_NAME(extraControls,"extraControls");
	HX_MARK_END_CLASS();
}

void Options_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstControls,"firstControls");
	HX_VISIT_MEMBER_NAME(secondControls,"secondControls");
	HX_VISIT_MEMBER_NAME(extraControls,"extraControls");
}

::hx::Val Options_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"firstControls") ) { return ::hx::Val( firstControls ); }
		if (HX_FIELD_EQ(inName,"extraControls") ) { return ::hx::Val( extraControls ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondControls") ) { return ::hx::Val( secondControls ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Options_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"masterVolume") ) { outValue = ( masterVolume ); return true; }
	}
	return false;
}

::hx::Val Options_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"firstControls") ) { firstControls=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extraControls") ) { extraControls=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondControls") ) { secondControls=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Options_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"masterVolume") ) { masterVolume=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Options_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("firstControls",c6,6a,87,2d));
	outFields->push(HX_("secondControls",0a,a6,00,5e));
	outFields->push(HX_("extraControls",26,ed,85,5b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Options_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Options_obj,firstControls),HX_("firstControls",c6,6a,87,2d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Options_obj,secondControls),HX_("secondControls",0a,a6,00,5e)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Options_obj,extraControls),HX_("extraControls",26,ed,85,5b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Options_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Options_obj::masterVolume,HX_("masterVolume",1c,44,fd,72)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Options_obj_sMemberFields[] = {
	HX_("firstControls",c6,6a,87,2d),
	HX_("secondControls",0a,a6,00,5e),
	HX_("extraControls",26,ed,85,5b),
	::String(null()) };

static void Options_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Options_obj::masterVolume,"masterVolume");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Options_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Options_obj::masterVolume,"masterVolume");
};

#endif

::hx::Class Options_obj::__mClass;

static ::String Options_obj_sStaticFields[] = {
	HX_("masterVolume",1c,44,fd,72),
	::String(null())
};

void Options_obj::__register()
{
	Options_obj _hx_dummy;
	Options_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Options",3e,5b,4f,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Options_obj::__GetStatic;
	__mClass->mSetStaticField = &Options_obj::__SetStatic;
	__mClass->mMarkFunc = Options_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Options_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Options_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Options_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Options_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Options_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Options_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Options_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0a8d9dcffdfdfda_8_boot)
HXDLIN(   8)		masterVolume = ((Float)1);
            	}
}

