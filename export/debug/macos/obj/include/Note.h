#ifndef INCLUDED_Note
#define INCLUDED_Note

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Note_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Note_obj OBJ_;
		Note_obj();

	public:
		enum { _hx_ClassId = 0x08363a36 };

		void __construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Note")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Note"); }
		static ::hx::ObjectPtr< Note_obj > __new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote);
		static ::hx::ObjectPtr< Note_obj > __alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Note_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Note",12,44,e3,33); }

		static void __boot();
		static Float swagWidth;
		static int PURP_NOTE;
		static int GREEN_NOTE;
		static int BLUE_NOTE;
		static int RED_NOTE;
		Float strumTime;
		bool mustPress;
		int noteData;
		bool canBeHit;
		bool tooLate;
		bool wasGoodHit;
		 ::Note prevNote;
		Float sustainLength;
		bool isSustainNote;
		Float noteScore;
		void update(Float elapsed);

};


#endif /* INCLUDED_Note */ 
