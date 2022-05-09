#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

::flixel::_hx_system::debug::watch::WatchEntryData WatchEntryData_obj::EXPRESSION(::String expression, ::Dynamic parsedExpr)
{
	return ::hx::CreateEnum< WatchEntryData_obj >(HX_("EXPRESSION",98,85,a8,20),2,2)->_hx_init(0,expression)->_hx_init(1,parsedExpr);
}

::flixel::_hx_system::debug::watch::WatchEntryData WatchEntryData_obj::FIELD( ::Dynamic object,::String field)
{
	return ::hx::CreateEnum< WatchEntryData_obj >(HX_("FIELD",9a,cc,81,7e),0,2)->_hx_init(0,object)->_hx_init(1,field);
}

::flixel::_hx_system::debug::watch::WatchEntryData WatchEntryData_obj::QUICK(::String value)
{
	return ::hx::CreateEnum< WatchEntryData_obj >(HX_("QUICK",cd,be,db,db),1,1)->_hx_init(0,value);
}

bool WatchEntryData_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EXPRESSION",98,85,a8,20)) { outValue = WatchEntryData_obj::EXPRESSION_dyn(); return true; }
	if (inName==HX_("FIELD",9a,cc,81,7e)) { outValue = WatchEntryData_obj::FIELD_dyn(); return true; }
	if (inName==HX_("QUICK",cd,be,db,db)) { outValue = WatchEntryData_obj::QUICK_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(WatchEntryData_obj)

int WatchEntryData_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EXPRESSION",98,85,a8,20)) return 2;
	if (inName==HX_("FIELD",9a,cc,81,7e)) return 0;
	if (inName==HX_("QUICK",cd,be,db,db)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(WatchEntryData_obj,EXPRESSION,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(WatchEntryData_obj,FIELD,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(WatchEntryData_obj,QUICK,return)

int WatchEntryData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EXPRESSION",98,85,a8,20)) return 2;
	if (inName==HX_("FIELD",9a,cc,81,7e)) return 2;
	if (inName==HX_("QUICK",cd,be,db,db)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val WatchEntryData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EXPRESSION",98,85,a8,20)) return EXPRESSION_dyn();
	if (inName==HX_("FIELD",9a,cc,81,7e)) return FIELD_dyn();
	if (inName==HX_("QUICK",cd,be,db,db)) return QUICK_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String WatchEntryData_obj_sStaticFields[] = {
	HX_("FIELD",9a,cc,81,7e),
	HX_("QUICK",cd,be,db,db),
	HX_("EXPRESSION",98,85,a8,20),
	::String(null())
};

::hx::Class WatchEntryData_obj::__mClass;

Dynamic __Create_WatchEntryData_obj() { return new WatchEntryData_obj; }

void WatchEntryData_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.system.debug.watch.WatchEntryData",54,23,6d,a5), ::hx::TCanCast< WatchEntryData_obj >,WatchEntryData_obj_sStaticFields,0,
	&__Create_WatchEntryData_obj, &__Create,
	&super::__SGetClass(), &CreateWatchEntryData_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &WatchEntryData_obj::__GetStatic;
}

void WatchEntryData_obj::__boot()
{
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
