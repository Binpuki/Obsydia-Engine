#include <hxcpp.h>

#ifndef INCLUDED_ControlsSubState
#include <ControlsSubState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b4c671511389f04_10_new,"ControlsSubState","new",0x89291199,"ControlsSubState.new","ControlsSubState.hx",10,0x2d62e3f7)

void ControlsSubState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3b4c671511389f04_10_new)
HXDLIN(  10)		super::__construct(null());
            	}

Dynamic ControlsSubState_obj::__CreateEmpty() { return new ControlsSubState_obj; }

void *ControlsSubState_obj::_hx_vtable = 0;

Dynamic ControlsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubState_obj > _hx_result = new ControlsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x62817b24;
			}
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7e7565a3;
	}
}


::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__new() {
	::hx::ObjectPtr< ControlsSubState_obj > __this = new ControlsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubState_obj *__this = (ControlsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubState_obj), true, "ControlsSubState"));
	*(void **)__this = ControlsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubState_obj::ControlsSubState_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ControlsSubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlsSubState_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ControlsSubState_obj::__mClass;

void ControlsSubState_obj::__register()
{
	ControlsSubState_obj _hx_dummy;
	ControlsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ControlsSubState",27,51,d0,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
