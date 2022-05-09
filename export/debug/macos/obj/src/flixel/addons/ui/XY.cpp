#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_XY
#include <flixel/addons/ui/XY.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::XY XY_obj::X;

::flixel::addons::ui::XY XY_obj::Y;

bool XY_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("X",58,00,00,00)) { outValue = XY_obj::X; return true; }
	if (inName==HX_("Y",59,00,00,00)) { outValue = XY_obj::Y; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(XY_obj)

int XY_obj::__FindIndex(::String inName)
{
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("Y",59,00,00,00)) return 1;
	return super::__FindIndex(inName);
}

int XY_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("Y",59,00,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val XY_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("X",58,00,00,00)) return X;
	if (inName==HX_("Y",59,00,00,00)) return Y;
	return super::__Field(inName,inCallProp);
}

static ::String XY_obj_sStaticFields[] = {
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	::String(null())
};

::hx::Class XY_obj::__mClass;

Dynamic __Create_XY_obj() { return new XY_obj; }

void XY_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.ui.XY",72,40,c5,68), ::hx::TCanCast< XY_obj >,XY_obj_sStaticFields,0,
	&__Create_XY_obj, &__Create,
	&super::__SGetClass(), &CreateXY_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &XY_obj::__GetStatic;
}

void XY_obj::__boot()
{
X = ::hx::CreateConstEnum< XY_obj >(HX_("X",58,00,00,00),0);
Y = ::hx::CreateConstEnum< XY_obj >(HX_("Y",59,00,00,00),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
