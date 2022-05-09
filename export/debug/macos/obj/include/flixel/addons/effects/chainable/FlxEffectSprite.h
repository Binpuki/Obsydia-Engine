#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#define INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxEffectSprite)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxEffectSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxEffectSprite_obj OBJ_;
		FlxEffectSprite_obj();

	public:
		enum { _hx_ClassId = 0x156bf340 };

		void __construct( ::flixel::FlxSprite Target,::Array< ::Dynamic> Effects);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxEffectSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxEffectSprite"); }
		static ::hx::ObjectPtr< FlxEffectSprite_obj > __new( ::flixel::FlxSprite Target,::Array< ::Dynamic> Effects);
		static ::hx::ObjectPtr< FlxEffectSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite Target,::Array< ::Dynamic> Effects);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxEffectSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxEffectSprite",e8,68,af,66); }

		bool effectsEnabled;
		 ::flixel::FlxSprite target;
		bool updateTargetAnimation;
		::Array< ::Dynamic> effects;
		 ::flixel::math::FlxPoint _effectOffset;
		void destroy();

		 ::flixel::math::FlxPoint getScreenPosition( ::flixel::math::FlxPoint point, ::flixel::FlxCamera Camera);

		void draw();

		void update(Float elapsed);

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite */ 
