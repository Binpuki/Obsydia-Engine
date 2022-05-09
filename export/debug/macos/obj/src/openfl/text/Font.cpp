#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_60_new,"openfl.text.Font","new",0xe13d5ce4,"openfl.text.Font.new","openfl/text/Font.hx",60,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_244___fromLimeFont,"openfl.text.Font","__fromLimeFont",0x57c4282a,"openfl.text.Font.__fromLimeFont","openfl/text/Font.hx",244,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_249___initialize,"openfl.text.Font","__initialize",0x3f396f6c,"openfl.text.Font.__initialize","openfl/text/Font.hx",249,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_274_get_fontName,"openfl.text.Font","get_fontName",0x9a8206bf,"openfl.text.Font.get_fontName","openfl/text/Font.hx",274,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_283_set_fontName,"openfl.text.Font","set_fontName",0xaf7b2a33,"openfl.text.Font.set_fontName","openfl/text/Font.hx",283,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_79_enumerateFonts,"openfl.text.Font","enumerateFonts",0x792ac3fc,"openfl.text.Font.enumerateFonts","openfl/text/Font.hx",79,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_91_fromBytes,"openfl.text.Font","fromBytes",0x95ccba25,"openfl.text.Font.fromBytes","openfl/text/Font.hx",91,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_112_fromFile,"openfl.text.Font","fromFile",0x919e3202,"openfl.text.Font.fromFile","openfl/text/Font.hx",112,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_150_loadFromBytes,"openfl.text.Font","loadFromBytes",0x88069d1f,"openfl.text.Font.loadFromBytes","openfl/text/Font.hx",150,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_149_loadFromBytes,"openfl.text.Font","loadFromBytes",0x88069d1f,"openfl.text.Font.loadFromBytes","openfl/text/Font.hx",149,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_174_loadFromFile,"openfl.text.Font","loadFromFile",0x74db4c48,"openfl.text.Font.loadFromFile","openfl/text/Font.hx",174,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_173_loadFromFile,"openfl.text.Font","loadFromFile",0x74db4c48,"openfl.text.Font.loadFromFile","openfl/text/Font.hx",173,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_200_loadFromName,"openfl.text.Font","loadFromName",0x7a1ef017,"openfl.text.Font.loadFromName","openfl/text/Font.hx",200,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_199_loadFromName,"openfl.text.Font","loadFromName",0x7a1ef017,"openfl.text.Font.loadFromName","openfl/text/Font.hx",199,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_216_registerFont,"openfl.text.Font","registerFont",0xd99a60ce,"openfl.text.Font.registerFont","openfl/text/Font.hx",216,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_42_boot,"openfl.text.Font","boot",0x2c8ceb2e,"openfl.text.Font.boot","openfl/text/Font.hx",42,0x076bbaac)
HX_LOCAL_STACK_FRAME(_hx_pos_bf5c0d6977753a1b_43_boot,"openfl.text.Font","boot",0x2c8ceb2e,"openfl.text.Font.boot","openfl/text/Font.hx",43,0x076bbaac)
namespace openfl{
namespace text{

void Font_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_60_new)
HXDLIN(  60)		super::__construct(name);
            	}

Dynamic Font_obj::__CreateEmpty() { return new Font_obj; }

void *Font_obj::_hx_vtable = 0;

Dynamic Font_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Font_obj > _hx_result = new Font_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Font_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12d0aa2c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12d0aa2c;
	} else {
		return inClassId==(int)0x40cee131;
	}
}

void Font_obj::_hx___fromLimeFont( ::lime::text::Font font){
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_244___fromLimeFont)
HXDLIN( 244)		this->_hx___copyFrom(font);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___fromLimeFont,(void))

bool Font_obj::_hx___initialize(){
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_249___initialize)
HXLINE( 251)		if (!(this->_hx___initialized)) {
HXLINE( 253)			if (::hx::IsNotNull( this->src )) {
HXLINE( 256)				if ((this->unitsPerEM == 0)) {
HXLINE( 256)					this->_hx___initializeSource();
            				}
HXLINE( 257)				this->_hx___initialized = true;
            			}
            			else {
HXLINE( 259)				bool _hx_tmp;
HXDLIN( 259)				bool _hx_tmp1;
HXDLIN( 259)				if (::hx::IsNull( this->src )) {
HXLINE( 259)					_hx_tmp1 = ::hx::IsNotNull( this->_hx___fontID );
            				}
            				else {
HXLINE( 259)					_hx_tmp1 = false;
            				}
HXDLIN( 259)				if (_hx_tmp1) {
HXLINE( 259)					_hx_tmp = ::openfl::utils::Assets_obj::isLocal(this->_hx___fontID,null(),null());
            				}
            				else {
HXLINE( 259)					_hx_tmp = false;
            				}
HXDLIN( 259)				if (_hx_tmp) {
HXLINE( 261)					this->_hx___fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(::openfl::utils::Assets_obj::getBytes(this->_hx___fontID)));
HXLINE( 262)					this->_hx___initialized = true;
            				}
            			}
            		}
HXLINE( 267)		return this->_hx___initialized;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,_hx___initialize,return )

::String Font_obj::get_fontName(){
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_274_get_fontName)
HXDLIN( 274)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_fontName,return )

::String Font_obj::set_fontName(::String value){
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_283_set_fontName)
HXDLIN( 283)		return (this->name = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,set_fontName,return )

 ::haxe::ds::StringMap Font_obj::_hx___fontByName;

::Array< ::Dynamic> Font_obj::_hx___registeredFonts;

::Array< ::Dynamic> Font_obj::enumerateFonts(::hx::Null< bool >  __o_enumerateDeviceFonts){
            		bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_79_enumerateFonts)
HXDLIN(  79)		return ::openfl::text::Font_obj::_hx___registeredFonts;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

 ::openfl::text::Font Font_obj::fromBytes( ::openfl::utils::ByteArrayData bytes){
            	HX_GC_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_91_fromBytes)
HXLINE(  92)		 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE(  94)		font->_hx___fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes));
HXLINE(  98)		if (::hx::IsNotNull( font->src )) {
HXLINE(  98)			return font;
            		}
            		else {
HXLINE(  98)			return null();
            		}
HXDLIN(  98)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

 ::openfl::text::Font Font_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_112_fromFile)
HXLINE( 113)		 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 115)		font->_hx___fromFile(path);
HXLINE( 119)		if (::hx::IsNotNull( font->src )) {
HXLINE( 119)			return font;
            		}
            		else {
HXLINE( 119)			return null();
            		}
HXDLIN( 119)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

 ::lime::app::Future Font_obj::loadFromBytes( ::openfl::utils::ByteArrayData bytes){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::text::Font limeFont){
            			HX_GC_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_150_loadFromBytes)
HXLINE( 151)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 152)			font->_hx___fromLimeFont(limeFont);
HXLINE( 154)			return ::lime::app::Future_obj::withValue(font);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_149_loadFromBytes)
HXDLIN( 149)		return ::lime::text::Font_obj::loadFromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes))->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromBytes,return )

 ::lime::app::Future Font_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::text::Font limeFont){
            			HX_GC_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_174_loadFromFile)
HXLINE( 175)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 176)			font->_hx___fromLimeFont(limeFont);
HXLINE( 178)			return ::lime::app::Future_obj::withValue(font);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_173_loadFromFile)
HXDLIN( 173)		return ::lime::text::Font_obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromFile,return )

 ::lime::app::Future Font_obj::loadFromName(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::text::Font limeFont){
            			HX_GC_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_200_loadFromName)
HXLINE( 201)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 202)			font->_hx___fromLimeFont(limeFont);
HXLINE( 204)			return ::lime::app::Future_obj::withValue(font);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_199_loadFromName)
HXDLIN( 199)		return ::lime::text::Font_obj::loadFromName(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromName,return )

void Font_obj::registerFont( ::Dynamic font){
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_216_registerFont)
HXLINE( 217)		 ::openfl::text::Font instance = null();
HXLINE( 219)		if (::hx::IsNull( ::Type_obj::getClass(font) )) {
HXLINE( 221)			instance = ::hx::TCast<  ::openfl::text::Font >::cast(::Type_obj::createInstance(font,::cpp::VirtualArray_obj::__new(0)));
            		}
            		else {
HXLINE( 225)			instance = ::hx::TCast<  ::openfl::text::Font >::cast(font);
            		}
HXLINE( 228)		if (::hx::IsNotNull( instance )) {
HXLINE( 236)			::openfl::text::Font_obj::_hx___registeredFonts->push(instance);
HXLINE( 237)			::openfl::text::Font_obj::_hx___fontByName->set(instance->name,instance);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))


::hx::ObjectPtr< Font_obj > Font_obj::__new(::String name) {
	::hx::ObjectPtr< Font_obj > __this = new Font_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Font_obj > Font_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Font_obj *__this = (Font_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Font_obj), true, "openfl.text.Font"));
	*(void **)__this = Font_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	HX_MARK_MEMBER_NAME(_hx___initialized,"__initialized");
	 ::lime::text::Font_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	HX_VISIT_MEMBER_NAME(_hx___initialized,"__initialized");
	 ::lime::text::Font_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Font_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fontName() ); }
		if (HX_FIELD_EQ(inName,"fontType") ) { return ::hx::Val( fontType ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return ::hx::Val( fontStyle ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initialize") ) { return ::hx::Val( _hx___initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fontName") ) { return ::hx::Val( get_fontName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fontName") ) { return ::hx::Val( set_fontName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { return ::hx::Val( _hx___initialized ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__fromLimeFont") ) { return ::hx::Val( _hx___fromLimeFont_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fontByName") ) { outValue = ( _hx___fontByName ); return true; }
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromName") ) { outValue = loadFromName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"registerFont") ) { outValue = registerFont_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { outValue = enumerateFonts_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { outValue = ( _hx___registeredFonts ); return true; }
	}
	return false;
}

::hx::Val Font_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fontName(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { _hx___initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__fontByName") ) { _hx___fontByName=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { _hx___registeredFonts=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fontName",ba,8f,7d,cb));
	outFields->push(HX_("fontStyle",e2,48,f9,2f));
	outFields->push(HX_("fontType",29,10,87,cf));
	outFields->push(HX_("__initialized",f4,35,88,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Font_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Font_obj,fontStyle),HX_("fontStyle",e2,48,f9,2f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Font_obj,fontType),HX_("fontType",29,10,87,cf)},
	{::hx::fsBool,(int)offsetof(Font_obj,_hx___initialized),HX_("__initialized",f4,35,88,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Font_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Font_obj::_hx___fontByName,HX_("__fontByName",11,3e,35,fb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Font_obj::_hx___registeredFonts,HX_("__registeredFonts",c2,83,84,64)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Font_obj_sMemberFields[] = {
	HX_("fontStyle",e2,48,f9,2f),
	HX_("fontType",29,10,87,cf),
	HX_("__initialized",f4,35,88,7f),
	HX_("__fromLimeFont",2e,ae,65,db),
	HX_("__initialize",70,ac,4e,25),
	HX_("get_fontName",c3,43,97,80),
	HX_("set_fontName",37,67,90,95),
	::String(null()) };

static void Font_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::_hx___fontByName,"__fontByName");
	HX_MARK_MEMBER_NAME(Font_obj::_hx___registeredFonts,"__registeredFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Font_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::_hx___fontByName,"__fontByName");
	HX_VISIT_MEMBER_NAME(Font_obj::_hx___registeredFonts,"__registeredFonts");
};

#endif

::hx::Class Font_obj::__mClass;

static ::String Font_obj_sStaticFields[] = {
	HX_("__fontByName",11,3e,35,fb),
	HX_("__registeredFonts",c2,83,84,64),
	HX_("enumerateFonts",00,4a,cc,fc),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromName",1b,2d,34,60),
	HX_("registerFont",d2,9d,af,bf),
	::String(null())
};

void Font_obj::__register()
{
	Font_obj _hx_dummy;
	Font_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.Font",f2,5a,54,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = Font_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Font_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Font_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Font_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Font_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Font_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Font_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_42_boot)
HXDLIN(  42)		_hx___fontByName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf5c0d6977753a1b_43_boot)
HXDLIN(  43)		_hx___registeredFonts = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace openfl
} // end namespace text
