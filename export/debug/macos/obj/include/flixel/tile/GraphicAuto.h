#ifndef INCLUDED_flixel_tile_GraphicAuto
#define INCLUDED_flixel_tile_GraphicAuto

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS2(flixel,tile,GraphicAuto)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES GraphicAuto_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicAuto_obj OBJ_;
		GraphicAuto_obj();

	public:
		enum { _hx_ClassId = 0x0effa329 };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.GraphicAuto")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.GraphicAuto"); }
		static ::hx::ObjectPtr< GraphicAuto_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static ::hx::ObjectPtr< GraphicAuto_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicAuto_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicAuto",17,72,90,5e); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_GraphicAuto */ 
