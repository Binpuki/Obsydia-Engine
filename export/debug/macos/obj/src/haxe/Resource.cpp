#include <hxcpp.h>

#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fca07e86ad3f4245_35_getBytes,"haxe.Resource","getBytes",0x9bc1712d,"haxe.Resource.getBytes","/usr/local/lib/haxe/std/cpp/_std/haxe/Resource.hx",35,0xfd53b169)
namespace haxe{

void Resource_obj::__construct() { }

Dynamic Resource_obj::__CreateEmpty() { return new Resource_obj; }

void *Resource_obj::_hx_vtable = 0;

Dynamic Resource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Resource_obj > _hx_result = new Resource_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Resource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57a3ae14;
}

 ::haxe::io::Bytes Resource_obj::getBytes(::String name){
            	HX_STACKFRAME(&_hx_pos_fca07e86ad3f4245_35_getBytes)
HXLINE(  36)		::Array< unsigned char > array =  ::__hxcpp_resource_bytes(name);
HXLINE(  37)		if (::hx::IsNull( array )) {
HXLINE(  38)			return null();
            		}
HXLINE(  39)		return ::haxe::io::Bytes_obj::ofData(array);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,getBytes,return )


Resource_obj::Resource_obj()
{
}

bool Resource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Resource_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Resource_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Resource_obj::__mClass;

static ::String Resource_obj_sStaticFields[] = {
	HX_("getBytes",f5,17,6f,1d),
	::String(null())
};

void Resource_obj::__register()
{
	Resource_obj _hx_dummy;
	Resource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.Resource",36,0e,12,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Resource_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Resource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Resource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Resource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Resource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
