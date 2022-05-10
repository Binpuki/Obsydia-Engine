#ifndef INCLUDED_flixel_FlxGame
#define INCLUDED_flixel_FlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebugger)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSoundTray)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxGame_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef FlxGame_obj OBJ_;
		FlxGame_obj();

	public:
		enum { _hx_ClassId = 0x43384a08 };

		void __construct(::hx::Null< int >  __o_GameWidth,::hx::Null< int >  __o_GameHeight,::hx::Class InitialState,::hx::Null< Float >  __o_Zoom,::hx::Null< int >  __o_UpdateFramerate,::hx::Null< int >  __o_DrawFramerate,::hx::Null< bool >  __o_SkipSplash,::hx::Null< bool >  __o_StartFullscreen);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxGame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.FlxGame"); }
		static ::hx::ObjectPtr< FlxGame_obj > __new(::hx::Null< int >  __o_GameWidth,::hx::Null< int >  __o_GameHeight,::hx::Class InitialState,::hx::Null< Float >  __o_Zoom,::hx::Null< int >  __o_UpdateFramerate,::hx::Null< int >  __o_DrawFramerate,::hx::Null< bool >  __o_SkipSplash,::hx::Null< bool >  __o_StartFullscreen);
		static ::hx::ObjectPtr< FlxGame_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_GameWidth,::hx::Null< int >  __o_GameHeight,::hx::Class InitialState,::hx::Null< Float >  __o_Zoom,::hx::Null< int >  __o_UpdateFramerate,::hx::Null< int >  __o_DrawFramerate,::hx::Null< bool >  __o_SkipSplash,::hx::Null< bool >  __o_StartFullscreen);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,FlxGame_obj *_hx_obj);
		//~FlxGame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGame",64,2d,b7,d4); }

		int focusLostFramerate;
		 ::flixel::_hx_system::ui::FlxSoundTray soundTray;
		 ::flixel::_hx_system::debug::FlxDebugger debugger;
		int ticks;
		bool filtersEnabled;
		bool _gameJustStarted;
		::hx::Class _initialState;
		 ::flixel::FlxState _state;
		int _total;
		int _startTime;
		Float _accumulator;
		Float _elapsedMS;
		Float _stepMS;
		Float _stepSeconds;
		Float _maxAccumulation;
		bool _lostFocus;
		::Array< ::Dynamic> _filters;
		 ::openfl::display::Sprite _inputContainer;
		::hx::Class _customSoundTray;
		bool _skipSplash;
		bool _startFullscreen;
		 ::flixel::FlxState _requestedState;
		bool _resetGame;
		void setFilters(::Array< ::Dynamic> filters);
		::Dynamic setFilters_dyn();

		void create( ::openfl::events::Event _);
		::Dynamic create_dyn();

		void onFocus( ::openfl::events::Event _);
		::Dynamic onFocus_dyn();

		void onFocusLost( ::openfl::events::Event event);
		::Dynamic onFocusLost_dyn();

		void onResize( ::openfl::events::Event _);
		::Dynamic onResize_dyn();

		void resizeGame(int width,int height);
		::Dynamic resizeGame_dyn();

		void onEnterFrame( ::openfl::events::Event _);
		::Dynamic onEnterFrame_dyn();

		void resetGame();
		::Dynamic resetGame_dyn();

		void switchState();
		::Dynamic switchState_dyn();

		void gameStart();
		::Dynamic gameStart_dyn();

		void step();
		::Dynamic step_dyn();

		void handleReplayRequests();
		::Dynamic handleReplayRequests_dyn();

		void update();
		::Dynamic update_dyn();

		void updateElapsed();
		::Dynamic updateElapsed_dyn();

		void updateInput();
		::Dynamic updateInput_dyn();

		void draw();
		::Dynamic draw_dyn();

		int getTicks();
		::Dynamic getTicks_dyn();

		::Dynamic getTimer;
		inline ::Dynamic &getTimer_dyn() {return getTimer; }

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxGame */ 