#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace input{


static ::String IFlxInputManager_obj_sMemberFields[] = {
	HX_("reset",cf,49,c8,e6),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	::String(null()) };

::hx::Class IFlxInputManager_obj::__mClass;

void IFlxInputManager_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.IFlxInputManager",82,09,19,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxInputManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x65dd217a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
