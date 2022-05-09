#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#define INCLUDED_flixel_addons_transition_FlxTransitionableState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,Transition)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES FlxTransitionableState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef FlxTransitionableState_obj OBJ_;
		FlxTransitionableState_obj();

	public:
		enum { _hx_ClassId = 0x2f064378 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.FlxTransitionableState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.FlxTransitionableState"); }
		static ::hx::ObjectPtr< FlxTransitionableState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< FlxTransitionableState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTransitionableState_obj();

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
		::String __ToString() const { return HX_("FlxTransitionableState",b0,b8,2b,5f); }

		static void __boot();
		static  ::flixel::addons::transition::TransitionData defaultTransIn;
		static  ::flixel::addons::transition::TransitionData defaultTransOut;
		static bool skipNextTransIn;
		static bool skipNextTransOut;
		 ::flixel::addons::transition::TransitionData transIn;
		 ::flixel::addons::transition::TransitionData transOut;
		virtual void destroy();

		virtual void create();

		virtual bool switchTo( ::flixel::FlxState nextState);

		void transitionToState( ::flixel::FlxState nextState);
		::Dynamic transitionToState_dyn();

		void transitionIn();
		::Dynamic transitionIn_dyn();

		void transitionOut( ::Dynamic OnExit);
		::Dynamic transitionOut_dyn();

		bool transOutFinished;
		bool _exiting;
		 ::Dynamic _onExit;
		Dynamic _onExit_dyn() { return _onExit;}
		bool get_hasTransIn();
		::Dynamic get_hasTransIn_dyn();

		bool get_hasTransOut();
		::Dynamic get_hasTransOut_dyn();

		 ::flixel::addons::transition::Transition createTransition( ::flixel::addons::transition::TransitionData data);
		::Dynamic createTransition_dyn();

		void finishTransIn();
		::Dynamic finishTransIn_dyn();

		void finishTransOut();
		::Dynamic finishTransOut_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_FlxTransitionableState */ 
