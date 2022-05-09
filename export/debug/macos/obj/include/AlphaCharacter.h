#ifndef INCLUDED_AlphaCharacter
#define INCLUDED_AlphaCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(AlphaCharacter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AlphaCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef AlphaCharacter_obj OBJ_;
		AlphaCharacter_obj();

	public:
		enum { _hx_ClassId = 0x10d46877 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AlphaCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AlphaCharacter"); }
		static ::hx::ObjectPtr< AlphaCharacter_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< AlphaCharacter_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AlphaCharacter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AlphaCharacter",8b,cc,2e,b9); }

		static void __boot();
		static ::String alphabet;
		static ::String numbers;
		static ::String symbols;
		int row;
		void createBold(::String letter);
		::Dynamic createBold_dyn();

		void createLetter(::String letter);
		::Dynamic createLetter_dyn();

		void createNumber(::String letter);
		::Dynamic createNumber_dyn();

		void createSymbol(::String letter);
		::Dynamic createSymbol_dyn();

};


#endif /* INCLUDED_AlphaCharacter */ 
