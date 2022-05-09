#ifndef INCLUDED_lime_text_harfbuzz__HBFTFont_HBFTFont_Impl_
#define INCLUDED_lime_text_harfbuzz__HBFTFont_HBFTFont_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS4(lime,text,harfbuzz,_HBFTFont,HBFTFont_Impl_)

namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBFTFont{


class HXCPP_CLASS_ATTRIBUTES HBFTFont_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBFTFont_Impl__obj OBJ_;
		HBFTFont_Impl__obj();

	public:
		enum { _hx_ClassId = 0x774c06eb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_"); }

		inline static ::hx::ObjectPtr< HBFTFont_Impl__obj > __new() {
			::hx::ObjectPtr< HBFTFont_Impl__obj > __this = new HBFTFont_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBFTFont_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBFTFont_Impl__obj *__this = (HBFTFont_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBFTFont_Impl__obj), false, "lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_"));
			*(void **)__this = HBFTFont_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBFTFont_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBFTFont_Impl_",97,5c,ac,c2); }

		static  ::Dynamic _new( ::lime::text::Font font);
		static ::Dynamic _new_dyn();

		static int get_loadFlags( ::Dynamic this1);
		static ::Dynamic get_loadFlags_dyn();

		static int set_loadFlags( ::Dynamic this1,int value);
		static ::Dynamic set_loadFlags_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBFTFont

#endif /* INCLUDED_lime_text_harfbuzz__HBFTFont_HBFTFont_Impl_ */ 
