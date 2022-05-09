#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IEventGetter_obj_sMemberFields[] = {
	HX_("getEvent",a4,d7,9b,d5),
	HX_("getRequest",59,65,e6,93),
	::String(null()) };

::hx::Class IEventGetter_obj::__mClass;

void IEventGetter_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IEventGetter",3f,6a,70,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IEventGetter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xdcf9e4f9 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
