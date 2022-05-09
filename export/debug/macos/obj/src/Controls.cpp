#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Device
#include <Device.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948b5caa279cd923_95_new,"Controls","new",0x4f8de688,"Controls.new","Controls.hx",95,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_127_get_UP,"Controls","get_UP",0xb958147c,"Controls.get_UP","Controls.hx",127,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_132_get_LEFT,"Controls","get_LEFT",0xc8e82468,"Controls.get_LEFT","Controls.hx",132,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_137_get_RIGHT,"Controls","get_RIGHT",0x7944c43b,"Controls.get_RIGHT","Controls.hx",137,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_142_get_DOWN,"Controls","get_DOWN",0xc3a614c3,"Controls.get_DOWN","Controls.hx",142,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_147_get_UP_P,"Controls","get_UP_P",0xcee37e8d,"Controls.get_UP_P","Controls.hx",147,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_152_get_LEFT_P,"Controls","get_LEFT_P",0xee886179,"Controls.get_LEFT_P","Controls.hx",152,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_157_get_RIGHT_P,"Controls","get_RIGHT_P",0xe72adc0c,"Controls.get_RIGHT_P","Controls.hx",157,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_162_get_DOWN_P,"Controls","get_DOWN_P",0x88e75e94,"Controls.get_DOWN_P","Controls.hx",162,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_167_get_UP_R,"Controls","get_UP_R",0xcee37e8f,"Controls.get_UP_R","Controls.hx",167,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_172_get_LEFT_R,"Controls","get_LEFT_R",0xee88617b,"Controls.get_LEFT_R","Controls.hx",172,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_177_get_RIGHT_R,"Controls","get_RIGHT_R",0xe72adc0e,"Controls.get_RIGHT_R","Controls.hx",177,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_182_get_DOWN_R,"Controls","get_DOWN_R",0x88e75e96,"Controls.get_DOWN_R","Controls.hx",182,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_187_get_ACCEPT,"Controls","get_ACCEPT",0x5fc72da9,"Controls.get_ACCEPT","Controls.hx",187,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_192_get_BACK,"Controls","get_BACK",0xc248f688,"Controls.get_BACK","Controls.hx",192,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_197_get_PAUSE,"Controls","get_PAUSE",0x4d388f55,"Controls.get_PAUSE","Controls.hx",197,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_202_get_RESET,"Controls","get_RESET",0x76a9022e,"Controls.get_RESET","Controls.hx",202,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_207_get_CHEAT,"Controls","get_CHEAT",0xd5974f72,"Controls.get_CHEAT","Controls.hx",207,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_271_update,"Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",271,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_276_checkByName,"Controls","checkByName",0xbe587cd2,"Controls.checkByName","Controls.hx",276,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_285_getDialogueName,"Controls","getDialogueName",0xe1263f61,"Controls.getDialogueName","Controls.hx",285,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_297_getDialogueNameFromToken,"Controls","getDialogueNameFromToken",0x6458998e,"Controls.getDialogueNameFromToken","Controls.hx",297,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_302_getActionFromControl,"Controls","getActionFromControl",0xa2e9ae5f,"Controls.getActionFromControl","Controls.hx",302,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_330_forEachBound,"Controls","forEachBound",0x9a98930c,"Controls.forEachBound","Controls.hx",330,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_362_replaceBinding,"Controls","replaceBinding",0x45096449,"Controls.replaceBinding","Controls.hx",362,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_383_copyFrom,"Controls","copyFrom",0xdf1da497,"Controls.copyFrom","Controls.hx",383,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_430_copyTo,"Controls","copyTo",0xdf5b4f68,"Controls.copyTo","Controls.hx",430,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_435_mergeKeyboardScheme,"Controls","mergeKeyboardScheme",0x61e2372c,"Controls.mergeKeyboardScheme","Controls.hx",435,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_454_bindKeys,"Controls","bindKeys",0xcb8dbf29,"Controls.bindKeys","Controls.hx",454,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_467_unbindKeys,"Controls","unbindKeys",0xec4b8c82,"Controls.unbindKeys","Controls.hx",467,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_491_setKeyboardScheme,"Controls","setKeyboardScheme",0x039bdb96,"Controls.setKeyboardScheme","Controls.hx",491,0x0ab041e8)
static const int _hx_array_data_116e4296_460[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_116e4296_461[] = {
	(int)83,(int)40,
};
static const int _hx_array_data_116e4296_462[] = {
	(int)65,(int)37,
};
static const int _hx_array_data_116e4296_463[] = {
	(int)68,(int)39,
};
static const int _hx_array_data_116e4296_464[] = {
	(int)90,(int)32,(int)13,
};
static const int _hx_array_data_116e4296_465[] = {
	(int)8,(int)27,
};
static const int _hx_array_data_116e4296_466[] = {
	(int)80,(int)13,(int)27,
};
static const int _hx_array_data_116e4296_467[] = {
	(int)82,
};
static const int _hx_array_data_116e4296_468[] = {
	(int)87,
};
static const int _hx_array_data_116e4296_469[] = {
	(int)83,
};
static const int _hx_array_data_116e4296_470[] = {
	(int)65,
};
static const int _hx_array_data_116e4296_471[] = {
	(int)68,
};
static const int _hx_array_data_116e4296_472[] = {
	(int)71,(int)90,
};
static const int _hx_array_data_116e4296_473[] = {
	(int)72,(int)88,
};
static const int _hx_array_data_116e4296_474[] = {
	(int)49,
};
static const int _hx_array_data_116e4296_475[] = {
	(int)82,
};
static const int _hx_array_data_116e4296_476[] = {
	(int)38,
};
static const int _hx_array_data_116e4296_477[] = {
	(int)40,
};
static const int _hx_array_data_116e4296_478[] = {
	(int)37,
};
static const int _hx_array_data_116e4296_479[] = {
	(int)39,
};
static const int _hx_array_data_116e4296_480[] = {
	(int)79,
};
static const int _hx_array_data_116e4296_481[] = {
	(int)80,
};
static const int _hx_array_data_116e4296_482[] = {
	(int)13,
};
static const int _hx_array_data_116e4296_483[] = {
	(int)8,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_568_removeKeyboard,"Controls","removeKeyboard",0xd2dac3e3,"Controls.removeKeyboard","Controls.hx",568,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_581_addGamepad,"Controls","addGamepad",0xa2c68b58,"Controls.addGamepad","Controls.hx",581,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_594_addGamepadLiteral,"Controls","addGamepadLiteral",0x50b4e0f7,"Controls.addGamepadLiteral","Controls.hx",594,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_607_removeGamepad,"Controls","removeGamepad",0xfdf294e5,"Controls.removeGamepad","Controls.hx",607,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_625_addDefaultGamepad,"Controls","addDefaultGamepad",0xaa5e6409,"Controls.addDefaultGamepad","Controls.hx",625,0x0ab041e8)
static const int _hx_array_data_116e4296_547[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_548[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_549[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_550[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_551[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_552[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_553[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_554[] = {
	(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_659_bindButtons,"Controls","bindButtons",0x94dee42c,"Controls.bindButtons","Controls.hx",659,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_672_unbindButtons,"Controls","unbindButtons",0x83d33473,"Controls.unbindButtons","Controls.hx",672,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_696_getInputsFor,"Controls","getInputsFor",0xa3571ac2,"Controls.getInputsFor","Controls.hx",696,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_720_removeDevice,"Controls","removeDevice",0x4c1b5cd2,"Controls.removeDevice","Controls.hx",720,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_317_init,"Controls","init",0x495487e8,"Controls.init","Controls.hx",317,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_475_addKeys,"Controls","addKeys",0xd0486edd,"Controls.addKeys","Controls.hx",475,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_480_removeKeys,"Controls","removeKeys",0x75dc9b30,"Controls.removeKeys","Controls.hx",480,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_680_addButtons,"Controls","addButtons",0xe3b5fcf8,"Controls.addButtons","Controls.hx",680,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_685_removeButtons,"Controls","removeButtons",0x3ee20685,"Controls.removeButtons","Controls.hx",685,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_731_isDevice,"Controls","isDevice",0xe09e10f8,"Controls.isDevice","Controls.hx",731,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_740_isGamepad,"Controls","isGamepad",0x5bcd81ff,"Controls.isGamepad","Controls.hx",740,0x0ab041e8)

void Controls_obj::__construct(::String name, ::KeyboardScheme __o_scheme){
            		 ::KeyboardScheme scheme = __o_scheme;
            		if (::hx::IsNull(__o_scheme)) scheme = ::KeyboardScheme_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_95_new)
HXLINE( 122)		this->keyboardScheme = ::KeyboardScheme_obj::None_dyn();
HXLINE( 121)		this->gamepadsAdded = ::Array_obj< int >::__new(0);
HXLINE( 116)		this->byName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 113)		this->_cheat =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("cheat",13,97,b6,45),null());
HXLINE( 112)		this->_reset =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("reset",cf,49,c8,e6),null());
HXLINE( 111)		this->_pause =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("pause",f6,d6,57,bd),null());
HXLINE( 110)		this->_back =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("back",27,da,10,41),null());
HXLINE( 109)		this->_accept =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("accept",08,93,06,0b),null());
HXLINE( 108)		this->_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-release",9c,bf,5b,fc),null());
HXLINE( 107)		this->_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-release",16,dd,28,fb),null());
HXLINE( 106)		this->_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-release",41,7c,5d,2e),null());
HXLINE( 105)		this->_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-release",95,4e,72,92),null());
HXLINE( 104)		this->_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-press",18,fe,06,cf),null());
HXLINE( 103)		this->_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-press",12,e9,87,fb),null());
HXLINE( 102)		this->_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-press",7d,d7,13,c1),null());
HXLINE( 101)		this->_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-press",d1,ac,09,1c),null());
HXLINE( 100)		this->_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down",62,f8,6d,42),null());
HXLINE(  99)		this->_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right",dc,0b,64,e9),null());
HXLINE(  98)		this->_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left",07,08,b0,47),null());
HXLINE(  97)		this->_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up",5b,66,00,00),null());
HXLINE( 212)		super::__construct(name,null(),null());
HXLINE( 214)		this->add(this->_up);
HXLINE( 215)		this->add(this->_left);
HXLINE( 216)		this->add(this->_right);
HXLINE( 217)		this->add(this->_down);
HXLINE( 218)		this->add(this->_upP);
HXLINE( 219)		this->add(this->_leftP);
HXLINE( 220)		this->add(this->_rightP);
HXLINE( 221)		this->add(this->_downP);
HXLINE( 222)		this->add(this->_upR);
HXLINE( 223)		this->add(this->_leftR);
HXLINE( 224)		this->add(this->_rightR);
HXLINE( 225)		this->add(this->_downR);
HXLINE( 226)		this->add(this->_accept);
HXLINE( 227)		this->add(this->_back);
HXLINE( 228)		this->add(this->_pause);
HXLINE( 229)		this->add(this->_reset);
HXLINE( 230)		this->add(this->_cheat);
HXLINE( 232)		{
HXLINE( 232)			int _g = 0;
HXDLIN( 232)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 232)			while((_g < _g1->length)){
HXLINE( 232)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 232)				_g = (_g + 1);
HXLINE( 233)				this->byName->set(action->name,action);
            			}
            		}
HXLINE( 235)		this->setKeyboardScheme(scheme,false);
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315ddd0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
	} else {
		return inClassId==(int)0x6cff3556;
	}
}

bool Controls_obj::get_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_127_get_UP)
HXDLIN( 127)		return this->_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP,return )

bool Controls_obj::get_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_132_get_LEFT)
HXDLIN( 132)		return this->_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT,return )

bool Controls_obj::get_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_137_get_RIGHT)
HXDLIN( 137)		return this->_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT,return )

bool Controls_obj::get_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_142_get_DOWN)
HXDLIN( 142)		return this->_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN,return )

bool Controls_obj::get_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_147_get_UP_P)
HXDLIN( 147)		return this->_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_P,return )

bool Controls_obj::get_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_152_get_LEFT_P)
HXDLIN( 152)		return this->_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_P,return )

bool Controls_obj::get_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_157_get_RIGHT_P)
HXDLIN( 157)		return this->_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_P,return )

bool Controls_obj::get_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_162_get_DOWN_P)
HXDLIN( 162)		return this->_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_P,return )

bool Controls_obj::get_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_167_get_UP_R)
HXDLIN( 167)		return this->_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_R,return )

bool Controls_obj::get_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_172_get_LEFT_R)
HXDLIN( 172)		return this->_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_R,return )

bool Controls_obj::get_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_177_get_RIGHT_R)
HXDLIN( 177)		return this->_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_R,return )

bool Controls_obj::get_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_182_get_DOWN_R)
HXDLIN( 182)		return this->_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_187_get_ACCEPT)
HXDLIN( 187)		return this->_accept->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_192_get_BACK)
HXDLIN( 192)		return this->_back->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_197_get_PAUSE)
HXDLIN( 197)		return this->_pause->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_202_get_RESET)
HXDLIN( 202)		return this->_reset->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

bool Controls_obj::get_CHEAT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_207_get_CHEAT)
HXDLIN( 207)		return this->_cheat->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_CHEAT,return )

void Controls_obj::update(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_271_update)
HXDLIN( 271)		this->super::update();
            	}


bool Controls_obj::checkByName(::String name){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_276_checkByName)
HXLINE( 278)		if (!(this->byName->exists(name))) {
HXLINE( 279)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid name: ",da,fb,f0,ea) + name)));
            		}
HXLINE( 281)		return ( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->check();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,checkByName,return )

::String Controls_obj::getDialogueName( ::flixel::input::actions::FlxActionDigital action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_285_getDialogueName)
HXLINE( 286)		 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(0).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 287)		 ::flixel::input::actions::FlxInputDevice _g = input->device;
HXDLIN( 287)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 289)				return ((HX_("[",5b,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(input->inputID)) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)4: {
HXLINE( 290)				return ((HX_("(",28,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get(input->inputID)) + HX_(")",29,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 291)				 ::flixel::input::actions::FlxInputDevice device = _g;
HXDLIN( 291)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unhandled device: ",f9,e1,62,a5) + ::Std_obj::string(device))));
            			}
            		}
HXLINE( 287)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueName,return )

::String Controls_obj::getDialogueNameFromToken(::String token){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_297_getDialogueNameFromToken)
HXDLIN( 297)		::cpp::VirtualArray params = null();
HXDLIN( 297)		return this->getDialogueName(this->getActionFromControl(::Type_obj::createEnum(::hx::ClassOf< ::Control >(),token.toUpperCase(),params)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueNameFromToken,return )

 ::flixel::input::actions::FlxActionDigital Controls_obj::getActionFromControl( ::Control control){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_302_getActionFromControl)
HXDLIN( 302)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 304)				return this->_up;
            			}
            			break;
            			case (int)1: {
HXLINE( 306)				return this->_left;
            			}
            			break;
            			case (int)2: {
HXLINE( 307)				return this->_right;
            			}
            			break;
            			case (int)3: {
HXLINE( 305)				return this->_down;
            			}
            			break;
            			case (int)4: {
HXLINE( 311)				return this->_reset;
            			}
            			break;
            			case (int)5: {
HXLINE( 308)				return this->_accept;
            			}
            			break;
            			case (int)6: {
HXLINE( 309)				return this->_back;
            			}
            			break;
            			case (int)7: {
HXLINE( 310)				return this->_pause;
            			}
            			break;
            			case (int)8: {
HXLINE( 312)				return this->_cheat;
            			}
            			break;
            		}
HXLINE( 302)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getActionFromControl,return )

void Controls_obj::forEachBound( ::Control control, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_330_forEachBound)
HXDLIN( 330)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 333)				func(this->_up,1);
HXLINE( 334)				func(this->_upP,2);
HXLINE( 335)				func(this->_upR,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 337)				func(this->_left,1);
HXLINE( 338)				func(this->_leftP,2);
HXLINE( 339)				func(this->_leftR,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 341)				func(this->_right,1);
HXLINE( 342)				func(this->_rightP,2);
HXLINE( 343)				func(this->_rightR,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 345)				func(this->_down,1);
HXLINE( 346)				func(this->_downP,2);
HXLINE( 347)				func(this->_downR,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 355)				func(this->_reset,2);
            			}
            			break;
            			case (int)5: {
HXLINE( 349)				func(this->_accept,2);
            			}
            			break;
            			case (int)6: {
HXLINE( 351)				func(this->_back,2);
            			}
            			break;
            			case (int)7: {
HXLINE( 353)				func(this->_pause,2);
            			}
            			break;
            			case (int)8: {
HXLINE( 357)				func(this->_cheat,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,forEachBound,(void))

void Controls_obj::replaceBinding( ::Control control, ::Device device, ::Dynamic toAdd, ::Dynamic toRemove){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_362_replaceBinding)
HXLINE( 363)		if (::hx::IsEq( toAdd,toRemove )) {
HXLINE( 364)			return;
            		}
HXLINE( 366)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 369)				if (::hx::IsNotNull( toRemove )) {
HXLINE( 370)					this->unbindKeys(control,::Array_obj< int >::__new(1)->init(0,toRemove));
            				}
HXLINE( 371)				if (::hx::IsNotNull( toAdd )) {
HXLINE( 372)					this->bindKeys(control,::Array_obj< int >::__new(1)->init(0,toAdd));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 374)				int id = device->_hx_getInt(0);
HXDLIN( 374)				{
HXLINE( 375)					if (::hx::IsNotNull( toRemove )) {
HXLINE( 376)						this->unbindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toRemove));
            					}
HXLINE( 377)					if (::hx::IsNotNull( toAdd )) {
HXLINE( 378)						this->bindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toAdd));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,replaceBinding,(void))

void Controls_obj::copyFrom( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_383_copyFrom)
HXLINE( 385)		{
HXLINE( 385)			::Dynamic map = controls->byName;
HXDLIN( 385)			::Dynamic _g_map = map;
HXDLIN( 385)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 385)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 385)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 385)				 ::flixel::input::actions::FlxActionDigital _g1_value = ( ( ::flixel::input::actions::FlxActionDigital)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 385)				::String _g1_key = key;
HXDLIN( 385)				::String name = _g1_key;
HXDLIN( 385)				 ::flixel::input::actions::FlxActionDigital action = _g1_value;
HXLINE( 387)				{
HXLINE( 387)					int _g = 0;
HXDLIN( 387)					::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 387)					while((_g < _g1->length)){
HXLINE( 387)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 387)						_g = (_g + 1);
HXLINE( 389)						bool _hx_tmp;
HXDLIN( 389)						if (::hx::IsNotNull( device )) {
HXLINE( 389)							_hx_tmp = ::Controls_obj::isDevice(input,device);
            						}
            						else {
HXLINE( 389)							_hx_tmp = true;
            						}
HXDLIN( 389)						if (_hx_tmp) {
HXLINE( 390)							( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->add(( ( ::flixel::input::actions::FlxActionInputDigital)(input) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 405)		if (::hx::IsNull( device )) {
HXLINE( 410)			{
HXLINE( 410)				int _g = 0;
HXDLIN( 410)				::Array< int > _g1 = controls->gamepadsAdded;
HXDLIN( 410)				while((_g < _g1->length)){
HXLINE( 410)					int gamepad = _g1->__get(_g);
HXDLIN( 410)					_g = (_g + 1);
HXLINE( 411)					if (!(this->gamepadsAdded->contains(gamepad))) {
HXLINE( 412)						this->gamepadsAdded->push(gamepad);
            					}
            				}
            			}
HXLINE( 419)			this->mergeKeyboardScheme(controls->keyboardScheme);
            		}
            		else {
HXLINE( 405)			switch((int)(device->_hx_getIndex())){
            				case (int)0: {
HXLINE( 424)					this->mergeKeyboardScheme(controls->keyboardScheme);
            				}
            				break;
            				case (int)1: {
HXLINE( 421)					int id = device->_hx_getInt(0);
HXLINE( 422)					this->gamepadsAdded->push(id);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyFrom,(void))

void Controls_obj::copyTo( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_430_copyTo)
HXDLIN( 430)		controls->copyFrom(::hx::ObjectPtr<OBJ_>(this),device);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyTo,(void))

void Controls_obj::mergeKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_435_mergeKeyboardScheme)
HXDLIN( 435)		if (::hx::IsPointerNotEq( scheme,::KeyboardScheme_obj::None_dyn() )) {
HXLINE( 437)			if ((this->keyboardScheme->_hx_getIndex() == 2)) {
HXLINE( 440)				this->keyboardScheme = scheme;
            			}
            			else {
HXLINE( 442)				this->keyboardScheme = ::KeyboardScheme_obj::Custom_dyn();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,mergeKeyboardScheme,(void))

void Controls_obj::bindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_454_bindKeys)
HXDLIN( 454)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,bindKeys,(void))

void Controls_obj::unbindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_467_unbindKeys)
HXDLIN( 467)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_up,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_upP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_upR,keys);
            			}
            			break;
            			case (int)1: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_left,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_leftP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_leftR,keys);
            			}
            			break;
            			case (int)2: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_right,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_rightP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_rightR,keys);
            			}
            			break;
            			case (int)3: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_down,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_downP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_downR,keys);
            			}
            			break;
            			case (int)4: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_reset,keys);
            			}
            			break;
            			case (int)5: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_accept,keys);
            			}
            			break;
            			case (int)6: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_back,keys);
            			}
            			break;
            			case (int)7: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_pause,keys);
            			}
            			break;
            			case (int)8: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_cheat,keys);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,unbindKeys,(void))

void Controls_obj::setKeyboardScheme( ::KeyboardScheme scheme,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(true);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_491_setKeyboardScheme)
HXLINE( 492)		if (reset) {
HXLINE( 493)			this->removeKeyboard();
            		}
HXLINE( 495)		this->keyboardScheme = scheme;
HXLINE( 498)		switch((int)(scheme->_hx_getIndex())){
            			case (int)0: {
HXLINE( 501)				{
HXLINE( 501)					::Array< int > keys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_460,2);
HXDLIN( 501)					switch((int)(::Control_obj::UP_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 501)								int state = 1;
HXDLIN( 501)								int _g = 0;
HXDLIN( 501)								while((_g < keys->length)){
HXLINE( 501)									int key = keys->__get(_g);
HXDLIN( 501)									_g = (_g + 1);
HXDLIN( 501)									action->addKey(key,state);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 501)								int state1 = 2;
HXDLIN( 501)								int _g1 = 0;
HXDLIN( 501)								while((_g1 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g1);
HXDLIN( 501)									_g1 = (_g1 + 1);
HXDLIN( 501)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 501)								int state2 = -1;
HXDLIN( 501)								int _g2 = 0;
HXDLIN( 501)								while((_g2 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g2);
HXDLIN( 501)									_g2 = (_g2 + 1);
HXDLIN( 501)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 501)								int state = 1;
HXDLIN( 501)								int _g = 0;
HXDLIN( 501)								while((_g < keys->length)){
HXLINE( 501)									int key = keys->__get(_g);
HXDLIN( 501)									_g = (_g + 1);
HXDLIN( 501)									action->addKey(key,state);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 501)								int state1 = 2;
HXDLIN( 501)								int _g1 = 0;
HXDLIN( 501)								while((_g1 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g1);
HXDLIN( 501)									_g1 = (_g1 + 1);
HXDLIN( 501)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 501)								int state2 = -1;
HXDLIN( 501)								int _g2 = 0;
HXDLIN( 501)								while((_g2 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g2);
HXDLIN( 501)									_g2 = (_g2 + 1);
HXDLIN( 501)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 501)								int state = 1;
HXDLIN( 501)								int _g = 0;
HXDLIN( 501)								while((_g < keys->length)){
HXLINE( 501)									int key = keys->__get(_g);
HXDLIN( 501)									_g = (_g + 1);
HXDLIN( 501)									action->addKey(key,state);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 501)								int state1 = 2;
HXDLIN( 501)								int _g1 = 0;
HXDLIN( 501)								while((_g1 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g1);
HXDLIN( 501)									_g1 = (_g1 + 1);
HXDLIN( 501)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 501)								int state2 = -1;
HXDLIN( 501)								int _g2 = 0;
HXDLIN( 501)								while((_g2 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g2);
HXDLIN( 501)									_g2 = (_g2 + 1);
HXDLIN( 501)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 501)								int state = 1;
HXDLIN( 501)								int _g = 0;
HXDLIN( 501)								while((_g < keys->length)){
HXLINE( 501)									int key = keys->__get(_g);
HXDLIN( 501)									_g = (_g + 1);
HXDLIN( 501)									action->addKey(key,state);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 501)								int state1 = 2;
HXDLIN( 501)								int _g1 = 0;
HXDLIN( 501)								while((_g1 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g1);
HXDLIN( 501)									_g1 = (_g1 + 1);
HXDLIN( 501)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 501)							{
HXLINE( 501)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 501)								int state2 = -1;
HXDLIN( 501)								int _g2 = 0;
HXDLIN( 501)								while((_g2 < keys->length)){
HXLINE( 501)									int key = keys->__get(_g2);
HXDLIN( 501)									_g2 = (_g2 + 1);
HXDLIN( 501)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 501)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 501)							int state = 2;
HXDLIN( 501)							int _g = 0;
HXDLIN( 501)							while((_g < keys->length)){
HXLINE( 501)								int key = keys->__get(_g);
HXDLIN( 501)								_g = (_g + 1);
HXDLIN( 501)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 501)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 501)							int state = 2;
HXDLIN( 501)							int _g = 0;
HXDLIN( 501)							while((_g < keys->length)){
HXLINE( 501)								int key = keys->__get(_g);
HXDLIN( 501)								_g = (_g + 1);
HXDLIN( 501)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 501)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 501)							int state = 2;
HXDLIN( 501)							int _g = 0;
HXDLIN( 501)							while((_g < keys->length)){
HXLINE( 501)								int key = keys->__get(_g);
HXDLIN( 501)								_g = (_g + 1);
HXDLIN( 501)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 501)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 501)							int state = 2;
HXDLIN( 501)							int _g = 0;
HXDLIN( 501)							while((_g < keys->length)){
HXLINE( 501)								int key = keys->__get(_g);
HXDLIN( 501)								_g = (_g + 1);
HXDLIN( 501)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 501)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 501)							int state = 2;
HXDLIN( 501)							int _g = 0;
HXDLIN( 501)							while((_g < keys->length)){
HXLINE( 501)								int key = keys->__get(_g);
HXDLIN( 501)								_g = (_g + 1);
HXDLIN( 501)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 502)				{
HXLINE( 502)					::Array< int > keys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_461,2);
HXDLIN( 502)					switch((int)(::Control_obj::DOWN_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 502)								int state = 1;
HXDLIN( 502)								int _g = 0;
HXDLIN( 502)								while((_g < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g);
HXDLIN( 502)									_g = (_g + 1);
HXDLIN( 502)									action->addKey(key,state);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 502)								int state1 = 2;
HXDLIN( 502)								int _g1 = 0;
HXDLIN( 502)								while((_g1 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g1);
HXDLIN( 502)									_g1 = (_g1 + 1);
HXDLIN( 502)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 502)								int state2 = -1;
HXDLIN( 502)								int _g2 = 0;
HXDLIN( 502)								while((_g2 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g2);
HXDLIN( 502)									_g2 = (_g2 + 1);
HXDLIN( 502)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 502)								int state = 1;
HXDLIN( 502)								int _g = 0;
HXDLIN( 502)								while((_g < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g);
HXDLIN( 502)									_g = (_g + 1);
HXDLIN( 502)									action->addKey(key,state);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 502)								int state1 = 2;
HXDLIN( 502)								int _g1 = 0;
HXDLIN( 502)								while((_g1 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g1);
HXDLIN( 502)									_g1 = (_g1 + 1);
HXDLIN( 502)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 502)								int state2 = -1;
HXDLIN( 502)								int _g2 = 0;
HXDLIN( 502)								while((_g2 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g2);
HXDLIN( 502)									_g2 = (_g2 + 1);
HXDLIN( 502)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 502)								int state = 1;
HXDLIN( 502)								int _g = 0;
HXDLIN( 502)								while((_g < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g);
HXDLIN( 502)									_g = (_g + 1);
HXDLIN( 502)									action->addKey(key,state);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 502)								int state1 = 2;
HXDLIN( 502)								int _g1 = 0;
HXDLIN( 502)								while((_g1 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g1);
HXDLIN( 502)									_g1 = (_g1 + 1);
HXDLIN( 502)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 502)								int state2 = -1;
HXDLIN( 502)								int _g2 = 0;
HXDLIN( 502)								while((_g2 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g2);
HXDLIN( 502)									_g2 = (_g2 + 1);
HXDLIN( 502)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 502)								int state = 1;
HXDLIN( 502)								int _g = 0;
HXDLIN( 502)								while((_g < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g);
HXDLIN( 502)									_g = (_g + 1);
HXDLIN( 502)									action->addKey(key,state);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 502)								int state1 = 2;
HXDLIN( 502)								int _g1 = 0;
HXDLIN( 502)								while((_g1 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g1);
HXDLIN( 502)									_g1 = (_g1 + 1);
HXDLIN( 502)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 502)							{
HXLINE( 502)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 502)								int state2 = -1;
HXDLIN( 502)								int _g2 = 0;
HXDLIN( 502)								while((_g2 < keys1->length)){
HXLINE( 502)									int key = keys1->__get(_g2);
HXDLIN( 502)									_g2 = (_g2 + 1);
HXDLIN( 502)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 502)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 502)							int state = 2;
HXDLIN( 502)							int _g = 0;
HXDLIN( 502)							while((_g < keys1->length)){
HXLINE( 502)								int key = keys1->__get(_g);
HXDLIN( 502)								_g = (_g + 1);
HXDLIN( 502)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 502)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 502)							int state = 2;
HXDLIN( 502)							int _g = 0;
HXDLIN( 502)							while((_g < keys1->length)){
HXLINE( 502)								int key = keys1->__get(_g);
HXDLIN( 502)								_g = (_g + 1);
HXDLIN( 502)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 502)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 502)							int state = 2;
HXDLIN( 502)							int _g = 0;
HXDLIN( 502)							while((_g < keys1->length)){
HXLINE( 502)								int key = keys1->__get(_g);
HXDLIN( 502)								_g = (_g + 1);
HXDLIN( 502)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 502)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 502)							int state = 2;
HXDLIN( 502)							int _g = 0;
HXDLIN( 502)							while((_g < keys1->length)){
HXLINE( 502)								int key = keys1->__get(_g);
HXDLIN( 502)								_g = (_g + 1);
HXDLIN( 502)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 502)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 502)							int state = 2;
HXDLIN( 502)							int _g = 0;
HXDLIN( 502)							while((_g < keys1->length)){
HXLINE( 502)								int key = keys1->__get(_g);
HXDLIN( 502)								_g = (_g + 1);
HXDLIN( 502)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 503)				{
HXLINE( 503)					::Array< int > keys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_462,2);
HXDLIN( 503)					switch((int)(::Control_obj::LEFT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 503)								int state = 1;
HXDLIN( 503)								int _g = 0;
HXDLIN( 503)								while((_g < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g);
HXDLIN( 503)									_g = (_g + 1);
HXDLIN( 503)									action->addKey(key,state);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 503)								int state1 = 2;
HXDLIN( 503)								int _g1 = 0;
HXDLIN( 503)								while((_g1 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g1);
HXDLIN( 503)									_g1 = (_g1 + 1);
HXDLIN( 503)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 503)								int state2 = -1;
HXDLIN( 503)								int _g2 = 0;
HXDLIN( 503)								while((_g2 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g2);
HXDLIN( 503)									_g2 = (_g2 + 1);
HXDLIN( 503)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 503)								int state = 1;
HXDLIN( 503)								int _g = 0;
HXDLIN( 503)								while((_g < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g);
HXDLIN( 503)									_g = (_g + 1);
HXDLIN( 503)									action->addKey(key,state);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 503)								int state1 = 2;
HXDLIN( 503)								int _g1 = 0;
HXDLIN( 503)								while((_g1 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g1);
HXDLIN( 503)									_g1 = (_g1 + 1);
HXDLIN( 503)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 503)								int state2 = -1;
HXDLIN( 503)								int _g2 = 0;
HXDLIN( 503)								while((_g2 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g2);
HXDLIN( 503)									_g2 = (_g2 + 1);
HXDLIN( 503)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 503)								int state = 1;
HXDLIN( 503)								int _g = 0;
HXDLIN( 503)								while((_g < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g);
HXDLIN( 503)									_g = (_g + 1);
HXDLIN( 503)									action->addKey(key,state);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 503)								int state1 = 2;
HXDLIN( 503)								int _g1 = 0;
HXDLIN( 503)								while((_g1 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g1);
HXDLIN( 503)									_g1 = (_g1 + 1);
HXDLIN( 503)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 503)								int state2 = -1;
HXDLIN( 503)								int _g2 = 0;
HXDLIN( 503)								while((_g2 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g2);
HXDLIN( 503)									_g2 = (_g2 + 1);
HXDLIN( 503)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 503)								int state = 1;
HXDLIN( 503)								int _g = 0;
HXDLIN( 503)								while((_g < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g);
HXDLIN( 503)									_g = (_g + 1);
HXDLIN( 503)									action->addKey(key,state);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 503)								int state1 = 2;
HXDLIN( 503)								int _g1 = 0;
HXDLIN( 503)								while((_g1 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g1);
HXDLIN( 503)									_g1 = (_g1 + 1);
HXDLIN( 503)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 503)							{
HXLINE( 503)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 503)								int state2 = -1;
HXDLIN( 503)								int _g2 = 0;
HXDLIN( 503)								while((_g2 < keys2->length)){
HXLINE( 503)									int key = keys2->__get(_g2);
HXDLIN( 503)									_g2 = (_g2 + 1);
HXDLIN( 503)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 503)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 503)							int state = 2;
HXDLIN( 503)							int _g = 0;
HXDLIN( 503)							while((_g < keys2->length)){
HXLINE( 503)								int key = keys2->__get(_g);
HXDLIN( 503)								_g = (_g + 1);
HXDLIN( 503)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 503)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 503)							int state = 2;
HXDLIN( 503)							int _g = 0;
HXDLIN( 503)							while((_g < keys2->length)){
HXLINE( 503)								int key = keys2->__get(_g);
HXDLIN( 503)								_g = (_g + 1);
HXDLIN( 503)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 503)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 503)							int state = 2;
HXDLIN( 503)							int _g = 0;
HXDLIN( 503)							while((_g < keys2->length)){
HXLINE( 503)								int key = keys2->__get(_g);
HXDLIN( 503)								_g = (_g + 1);
HXDLIN( 503)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 503)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 503)							int state = 2;
HXDLIN( 503)							int _g = 0;
HXDLIN( 503)							while((_g < keys2->length)){
HXLINE( 503)								int key = keys2->__get(_g);
HXDLIN( 503)								_g = (_g + 1);
HXDLIN( 503)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 503)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 503)							int state = 2;
HXDLIN( 503)							int _g = 0;
HXDLIN( 503)							while((_g < keys2->length)){
HXLINE( 503)								int key = keys2->__get(_g);
HXDLIN( 503)								_g = (_g + 1);
HXDLIN( 503)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 504)				{
HXLINE( 504)					::Array< int > keys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_463,2);
HXDLIN( 504)					switch((int)(::Control_obj::RIGHT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 504)								int state = 1;
HXDLIN( 504)								int _g = 0;
HXDLIN( 504)								while((_g < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g);
HXDLIN( 504)									_g = (_g + 1);
HXDLIN( 504)									action->addKey(key,state);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 504)								int state1 = 2;
HXDLIN( 504)								int _g1 = 0;
HXDLIN( 504)								while((_g1 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g1);
HXDLIN( 504)									_g1 = (_g1 + 1);
HXDLIN( 504)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 504)								int state2 = -1;
HXDLIN( 504)								int _g2 = 0;
HXDLIN( 504)								while((_g2 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g2);
HXDLIN( 504)									_g2 = (_g2 + 1);
HXDLIN( 504)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 504)								int state = 1;
HXDLIN( 504)								int _g = 0;
HXDLIN( 504)								while((_g < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g);
HXDLIN( 504)									_g = (_g + 1);
HXDLIN( 504)									action->addKey(key,state);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 504)								int state1 = 2;
HXDLIN( 504)								int _g1 = 0;
HXDLIN( 504)								while((_g1 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g1);
HXDLIN( 504)									_g1 = (_g1 + 1);
HXDLIN( 504)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 504)								int state2 = -1;
HXDLIN( 504)								int _g2 = 0;
HXDLIN( 504)								while((_g2 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g2);
HXDLIN( 504)									_g2 = (_g2 + 1);
HXDLIN( 504)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 504)								int state = 1;
HXDLIN( 504)								int _g = 0;
HXDLIN( 504)								while((_g < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g);
HXDLIN( 504)									_g = (_g + 1);
HXDLIN( 504)									action->addKey(key,state);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 504)								int state1 = 2;
HXDLIN( 504)								int _g1 = 0;
HXDLIN( 504)								while((_g1 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g1);
HXDLIN( 504)									_g1 = (_g1 + 1);
HXDLIN( 504)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 504)								int state2 = -1;
HXDLIN( 504)								int _g2 = 0;
HXDLIN( 504)								while((_g2 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g2);
HXDLIN( 504)									_g2 = (_g2 + 1);
HXDLIN( 504)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 504)								int state = 1;
HXDLIN( 504)								int _g = 0;
HXDLIN( 504)								while((_g < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g);
HXDLIN( 504)									_g = (_g + 1);
HXDLIN( 504)									action->addKey(key,state);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 504)								int state1 = 2;
HXDLIN( 504)								int _g1 = 0;
HXDLIN( 504)								while((_g1 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g1);
HXDLIN( 504)									_g1 = (_g1 + 1);
HXDLIN( 504)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 504)							{
HXLINE( 504)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 504)								int state2 = -1;
HXDLIN( 504)								int _g2 = 0;
HXDLIN( 504)								while((_g2 < keys3->length)){
HXLINE( 504)									int key = keys3->__get(_g2);
HXDLIN( 504)									_g2 = (_g2 + 1);
HXDLIN( 504)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 504)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 504)							int state = 2;
HXDLIN( 504)							int _g = 0;
HXDLIN( 504)							while((_g < keys3->length)){
HXLINE( 504)								int key = keys3->__get(_g);
HXDLIN( 504)								_g = (_g + 1);
HXDLIN( 504)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 504)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 504)							int state = 2;
HXDLIN( 504)							int _g = 0;
HXDLIN( 504)							while((_g < keys3->length)){
HXLINE( 504)								int key = keys3->__get(_g);
HXDLIN( 504)								_g = (_g + 1);
HXDLIN( 504)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 504)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 504)							int state = 2;
HXDLIN( 504)							int _g = 0;
HXDLIN( 504)							while((_g < keys3->length)){
HXLINE( 504)								int key = keys3->__get(_g);
HXDLIN( 504)								_g = (_g + 1);
HXDLIN( 504)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 504)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 504)							int state = 2;
HXDLIN( 504)							int _g = 0;
HXDLIN( 504)							while((_g < keys3->length)){
HXLINE( 504)								int key = keys3->__get(_g);
HXDLIN( 504)								_g = (_g + 1);
HXDLIN( 504)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 504)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 504)							int state = 2;
HXDLIN( 504)							int _g = 0;
HXDLIN( 504)							while((_g < keys3->length)){
HXLINE( 504)								int key = keys3->__get(_g);
HXDLIN( 504)								_g = (_g + 1);
HXDLIN( 504)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 505)				{
HXLINE( 505)					::Array< int > keys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_464,3);
HXDLIN( 505)					switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 505)								int state = 1;
HXDLIN( 505)								int _g = 0;
HXDLIN( 505)								while((_g < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g);
HXDLIN( 505)									_g = (_g + 1);
HXDLIN( 505)									action->addKey(key,state);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 505)								int state1 = 2;
HXDLIN( 505)								int _g1 = 0;
HXDLIN( 505)								while((_g1 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g1);
HXDLIN( 505)									_g1 = (_g1 + 1);
HXDLIN( 505)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 505)								int state2 = -1;
HXDLIN( 505)								int _g2 = 0;
HXDLIN( 505)								while((_g2 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g2);
HXDLIN( 505)									_g2 = (_g2 + 1);
HXDLIN( 505)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 505)								int state = 1;
HXDLIN( 505)								int _g = 0;
HXDLIN( 505)								while((_g < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g);
HXDLIN( 505)									_g = (_g + 1);
HXDLIN( 505)									action->addKey(key,state);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 505)								int state1 = 2;
HXDLIN( 505)								int _g1 = 0;
HXDLIN( 505)								while((_g1 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g1);
HXDLIN( 505)									_g1 = (_g1 + 1);
HXDLIN( 505)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 505)								int state2 = -1;
HXDLIN( 505)								int _g2 = 0;
HXDLIN( 505)								while((_g2 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g2);
HXDLIN( 505)									_g2 = (_g2 + 1);
HXDLIN( 505)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 505)								int state = 1;
HXDLIN( 505)								int _g = 0;
HXDLIN( 505)								while((_g < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g);
HXDLIN( 505)									_g = (_g + 1);
HXDLIN( 505)									action->addKey(key,state);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 505)								int state1 = 2;
HXDLIN( 505)								int _g1 = 0;
HXDLIN( 505)								while((_g1 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g1);
HXDLIN( 505)									_g1 = (_g1 + 1);
HXDLIN( 505)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 505)								int state2 = -1;
HXDLIN( 505)								int _g2 = 0;
HXDLIN( 505)								while((_g2 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g2);
HXDLIN( 505)									_g2 = (_g2 + 1);
HXDLIN( 505)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 505)								int state = 1;
HXDLIN( 505)								int _g = 0;
HXDLIN( 505)								while((_g < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g);
HXDLIN( 505)									_g = (_g + 1);
HXDLIN( 505)									action->addKey(key,state);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 505)								int state1 = 2;
HXDLIN( 505)								int _g1 = 0;
HXDLIN( 505)								while((_g1 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g1);
HXDLIN( 505)									_g1 = (_g1 + 1);
HXDLIN( 505)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 505)							{
HXLINE( 505)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 505)								int state2 = -1;
HXDLIN( 505)								int _g2 = 0;
HXDLIN( 505)								while((_g2 < keys4->length)){
HXLINE( 505)									int key = keys4->__get(_g2);
HXDLIN( 505)									_g2 = (_g2 + 1);
HXDLIN( 505)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 505)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 505)							int state = 2;
HXDLIN( 505)							int _g = 0;
HXDLIN( 505)							while((_g < keys4->length)){
HXLINE( 505)								int key = keys4->__get(_g);
HXDLIN( 505)								_g = (_g + 1);
HXDLIN( 505)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 505)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 505)							int state = 2;
HXDLIN( 505)							int _g = 0;
HXDLIN( 505)							while((_g < keys4->length)){
HXLINE( 505)								int key = keys4->__get(_g);
HXDLIN( 505)								_g = (_g + 1);
HXDLIN( 505)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 505)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 505)							int state = 2;
HXDLIN( 505)							int _g = 0;
HXDLIN( 505)							while((_g < keys4->length)){
HXLINE( 505)								int key = keys4->__get(_g);
HXDLIN( 505)								_g = (_g + 1);
HXDLIN( 505)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 505)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 505)							int state = 2;
HXDLIN( 505)							int _g = 0;
HXDLIN( 505)							while((_g < keys4->length)){
HXLINE( 505)								int key = keys4->__get(_g);
HXDLIN( 505)								_g = (_g + 1);
HXDLIN( 505)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 505)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 505)							int state = 2;
HXDLIN( 505)							int _g = 0;
HXDLIN( 505)							while((_g < keys4->length)){
HXLINE( 505)								int key = keys4->__get(_g);
HXDLIN( 505)								_g = (_g + 1);
HXDLIN( 505)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 506)				{
HXLINE( 506)					::Array< int > keys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_465,2);
HXDLIN( 506)					switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 506)								int state = 1;
HXDLIN( 506)								int _g = 0;
HXDLIN( 506)								while((_g < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g);
HXDLIN( 506)									_g = (_g + 1);
HXDLIN( 506)									action->addKey(key,state);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 506)								int state1 = 2;
HXDLIN( 506)								int _g1 = 0;
HXDLIN( 506)								while((_g1 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g1);
HXDLIN( 506)									_g1 = (_g1 + 1);
HXDLIN( 506)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 506)								int state2 = -1;
HXDLIN( 506)								int _g2 = 0;
HXDLIN( 506)								while((_g2 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g2);
HXDLIN( 506)									_g2 = (_g2 + 1);
HXDLIN( 506)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 506)								int state = 1;
HXDLIN( 506)								int _g = 0;
HXDLIN( 506)								while((_g < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g);
HXDLIN( 506)									_g = (_g + 1);
HXDLIN( 506)									action->addKey(key,state);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 506)								int state1 = 2;
HXDLIN( 506)								int _g1 = 0;
HXDLIN( 506)								while((_g1 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g1);
HXDLIN( 506)									_g1 = (_g1 + 1);
HXDLIN( 506)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 506)								int state2 = -1;
HXDLIN( 506)								int _g2 = 0;
HXDLIN( 506)								while((_g2 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g2);
HXDLIN( 506)									_g2 = (_g2 + 1);
HXDLIN( 506)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 506)								int state = 1;
HXDLIN( 506)								int _g = 0;
HXDLIN( 506)								while((_g < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g);
HXDLIN( 506)									_g = (_g + 1);
HXDLIN( 506)									action->addKey(key,state);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 506)								int state1 = 2;
HXDLIN( 506)								int _g1 = 0;
HXDLIN( 506)								while((_g1 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g1);
HXDLIN( 506)									_g1 = (_g1 + 1);
HXDLIN( 506)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 506)								int state2 = -1;
HXDLIN( 506)								int _g2 = 0;
HXDLIN( 506)								while((_g2 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g2);
HXDLIN( 506)									_g2 = (_g2 + 1);
HXDLIN( 506)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 506)								int state = 1;
HXDLIN( 506)								int _g = 0;
HXDLIN( 506)								while((_g < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g);
HXDLIN( 506)									_g = (_g + 1);
HXDLIN( 506)									action->addKey(key,state);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 506)								int state1 = 2;
HXDLIN( 506)								int _g1 = 0;
HXDLIN( 506)								while((_g1 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g1);
HXDLIN( 506)									_g1 = (_g1 + 1);
HXDLIN( 506)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 506)							{
HXLINE( 506)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 506)								int state2 = -1;
HXDLIN( 506)								int _g2 = 0;
HXDLIN( 506)								while((_g2 < keys5->length)){
HXLINE( 506)									int key = keys5->__get(_g2);
HXDLIN( 506)									_g2 = (_g2 + 1);
HXDLIN( 506)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 506)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 506)							int state = 2;
HXDLIN( 506)							int _g = 0;
HXDLIN( 506)							while((_g < keys5->length)){
HXLINE( 506)								int key = keys5->__get(_g);
HXDLIN( 506)								_g = (_g + 1);
HXDLIN( 506)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 506)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 506)							int state = 2;
HXDLIN( 506)							int _g = 0;
HXDLIN( 506)							while((_g < keys5->length)){
HXLINE( 506)								int key = keys5->__get(_g);
HXDLIN( 506)								_g = (_g + 1);
HXDLIN( 506)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 506)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 506)							int state = 2;
HXDLIN( 506)							int _g = 0;
HXDLIN( 506)							while((_g < keys5->length)){
HXLINE( 506)								int key = keys5->__get(_g);
HXDLIN( 506)								_g = (_g + 1);
HXDLIN( 506)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 506)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 506)							int state = 2;
HXDLIN( 506)							int _g = 0;
HXDLIN( 506)							while((_g < keys5->length)){
HXLINE( 506)								int key = keys5->__get(_g);
HXDLIN( 506)								_g = (_g + 1);
HXDLIN( 506)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 506)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 506)							int state = 2;
HXDLIN( 506)							int _g = 0;
HXDLIN( 506)							while((_g < keys5->length)){
HXLINE( 506)								int key = keys5->__get(_g);
HXDLIN( 506)								_g = (_g + 1);
HXDLIN( 506)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 507)				{
HXLINE( 507)					::Array< int > keys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_466,3);
HXDLIN( 507)					switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 507)								int state = 1;
HXDLIN( 507)								int _g = 0;
HXDLIN( 507)								while((_g < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g);
HXDLIN( 507)									_g = (_g + 1);
HXDLIN( 507)									action->addKey(key,state);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 507)								int state1 = 2;
HXDLIN( 507)								int _g1 = 0;
HXDLIN( 507)								while((_g1 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g1);
HXDLIN( 507)									_g1 = (_g1 + 1);
HXDLIN( 507)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 507)								int state2 = -1;
HXDLIN( 507)								int _g2 = 0;
HXDLIN( 507)								while((_g2 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g2);
HXDLIN( 507)									_g2 = (_g2 + 1);
HXDLIN( 507)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 507)								int state = 1;
HXDLIN( 507)								int _g = 0;
HXDLIN( 507)								while((_g < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g);
HXDLIN( 507)									_g = (_g + 1);
HXDLIN( 507)									action->addKey(key,state);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 507)								int state1 = 2;
HXDLIN( 507)								int _g1 = 0;
HXDLIN( 507)								while((_g1 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g1);
HXDLIN( 507)									_g1 = (_g1 + 1);
HXDLIN( 507)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 507)								int state2 = -1;
HXDLIN( 507)								int _g2 = 0;
HXDLIN( 507)								while((_g2 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g2);
HXDLIN( 507)									_g2 = (_g2 + 1);
HXDLIN( 507)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 507)								int state = 1;
HXDLIN( 507)								int _g = 0;
HXDLIN( 507)								while((_g < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g);
HXDLIN( 507)									_g = (_g + 1);
HXDLIN( 507)									action->addKey(key,state);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 507)								int state1 = 2;
HXDLIN( 507)								int _g1 = 0;
HXDLIN( 507)								while((_g1 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g1);
HXDLIN( 507)									_g1 = (_g1 + 1);
HXDLIN( 507)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 507)								int state2 = -1;
HXDLIN( 507)								int _g2 = 0;
HXDLIN( 507)								while((_g2 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g2);
HXDLIN( 507)									_g2 = (_g2 + 1);
HXDLIN( 507)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 507)								int state = 1;
HXDLIN( 507)								int _g = 0;
HXDLIN( 507)								while((_g < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g);
HXDLIN( 507)									_g = (_g + 1);
HXDLIN( 507)									action->addKey(key,state);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 507)								int state1 = 2;
HXDLIN( 507)								int _g1 = 0;
HXDLIN( 507)								while((_g1 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g1);
HXDLIN( 507)									_g1 = (_g1 + 1);
HXDLIN( 507)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 507)							{
HXLINE( 507)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 507)								int state2 = -1;
HXDLIN( 507)								int _g2 = 0;
HXDLIN( 507)								while((_g2 < keys6->length)){
HXLINE( 507)									int key = keys6->__get(_g2);
HXDLIN( 507)									_g2 = (_g2 + 1);
HXDLIN( 507)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 507)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 507)							int state = 2;
HXDLIN( 507)							int _g = 0;
HXDLIN( 507)							while((_g < keys6->length)){
HXLINE( 507)								int key = keys6->__get(_g);
HXDLIN( 507)								_g = (_g + 1);
HXDLIN( 507)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 507)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 507)							int state = 2;
HXDLIN( 507)							int _g = 0;
HXDLIN( 507)							while((_g < keys6->length)){
HXLINE( 507)								int key = keys6->__get(_g);
HXDLIN( 507)								_g = (_g + 1);
HXDLIN( 507)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 507)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 507)							int state = 2;
HXDLIN( 507)							int _g = 0;
HXDLIN( 507)							while((_g < keys6->length)){
HXLINE( 507)								int key = keys6->__get(_g);
HXDLIN( 507)								_g = (_g + 1);
HXDLIN( 507)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 507)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 507)							int state = 2;
HXDLIN( 507)							int _g = 0;
HXDLIN( 507)							while((_g < keys6->length)){
HXLINE( 507)								int key = keys6->__get(_g);
HXDLIN( 507)								_g = (_g + 1);
HXDLIN( 507)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 507)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 507)							int state = 2;
HXDLIN( 507)							int _g = 0;
HXDLIN( 507)							while((_g < keys6->length)){
HXLINE( 507)								int key = keys6->__get(_g);
HXDLIN( 507)								_g = (_g + 1);
HXDLIN( 507)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
HXLINE( 508)				{
HXLINE( 508)					::Array< int > keys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_467,1);
HXDLIN( 508)					switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 508)								int state = 1;
HXDLIN( 508)								int _g = 0;
HXDLIN( 508)								while((_g < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g);
HXDLIN( 508)									_g = (_g + 1);
HXDLIN( 508)									action->addKey(key,state);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 508)								int state1 = 2;
HXDLIN( 508)								int _g1 = 0;
HXDLIN( 508)								while((_g1 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g1);
HXDLIN( 508)									_g1 = (_g1 + 1);
HXDLIN( 508)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 508)								int state2 = -1;
HXDLIN( 508)								int _g2 = 0;
HXDLIN( 508)								while((_g2 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g2);
HXDLIN( 508)									_g2 = (_g2 + 1);
HXDLIN( 508)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 508)								int state = 1;
HXDLIN( 508)								int _g = 0;
HXDLIN( 508)								while((_g < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g);
HXDLIN( 508)									_g = (_g + 1);
HXDLIN( 508)									action->addKey(key,state);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 508)								int state1 = 2;
HXDLIN( 508)								int _g1 = 0;
HXDLIN( 508)								while((_g1 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g1);
HXDLIN( 508)									_g1 = (_g1 + 1);
HXDLIN( 508)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 508)								int state2 = -1;
HXDLIN( 508)								int _g2 = 0;
HXDLIN( 508)								while((_g2 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g2);
HXDLIN( 508)									_g2 = (_g2 + 1);
HXDLIN( 508)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 508)								int state = 1;
HXDLIN( 508)								int _g = 0;
HXDLIN( 508)								while((_g < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g);
HXDLIN( 508)									_g = (_g + 1);
HXDLIN( 508)									action->addKey(key,state);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 508)								int state1 = 2;
HXDLIN( 508)								int _g1 = 0;
HXDLIN( 508)								while((_g1 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g1);
HXDLIN( 508)									_g1 = (_g1 + 1);
HXDLIN( 508)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 508)								int state2 = -1;
HXDLIN( 508)								int _g2 = 0;
HXDLIN( 508)								while((_g2 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g2);
HXDLIN( 508)									_g2 = (_g2 + 1);
HXDLIN( 508)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 508)								int state = 1;
HXDLIN( 508)								int _g = 0;
HXDLIN( 508)								while((_g < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g);
HXDLIN( 508)									_g = (_g + 1);
HXDLIN( 508)									action->addKey(key,state);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 508)								int state1 = 2;
HXDLIN( 508)								int _g1 = 0;
HXDLIN( 508)								while((_g1 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g1);
HXDLIN( 508)									_g1 = (_g1 + 1);
HXDLIN( 508)									action1->addKey(key,state1);
            								}
            							}
HXDLIN( 508)							{
HXLINE( 508)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 508)								int state2 = -1;
HXDLIN( 508)								int _g2 = 0;
HXDLIN( 508)								while((_g2 < keys7->length)){
HXLINE( 508)									int key = keys7->__get(_g2);
HXDLIN( 508)									_g2 = (_g2 + 1);
HXDLIN( 508)									action2->addKey(key,state2);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 508)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 508)							int state = 2;
HXDLIN( 508)							int _g = 0;
HXDLIN( 508)							while((_g < keys7->length)){
HXLINE( 508)								int key = keys7->__get(_g);
HXDLIN( 508)								_g = (_g + 1);
HXDLIN( 508)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 508)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 508)							int state = 2;
HXDLIN( 508)							int _g = 0;
HXDLIN( 508)							while((_g < keys7->length)){
HXLINE( 508)								int key = keys7->__get(_g);
HXDLIN( 508)								_g = (_g + 1);
HXDLIN( 508)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 508)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 508)							int state = 2;
HXDLIN( 508)							int _g = 0;
HXDLIN( 508)							while((_g < keys7->length)){
HXLINE( 508)								int key = keys7->__get(_g);
HXDLIN( 508)								_g = (_g + 1);
HXDLIN( 508)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 508)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 508)							int state = 2;
HXDLIN( 508)							int _g = 0;
HXDLIN( 508)							while((_g < keys7->length)){
HXLINE( 508)								int key = keys7->__get(_g);
HXDLIN( 508)								_g = (_g + 1);
HXDLIN( 508)								action->addKey(key,state);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 508)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 508)							int state = 2;
HXDLIN( 508)							int _g = 0;
HXDLIN( 508)							while((_g < keys7->length)){
HXLINE( 508)								int key = keys7->__get(_g);
HXDLIN( 508)								_g = (_g + 1);
HXDLIN( 508)								action->addKey(key,state);
            							}
            						}
            						break;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 518)				if (scheme->_hx_getBool(0)) {
HXLINE( 510)					{
HXLINE( 510)						::Array< int > keys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_468,1);
HXDLIN( 510)						switch((int)(::Control_obj::UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 510)									int state = 1;
HXDLIN( 510)									int _g = 0;
HXDLIN( 510)									while((_g < keys->length)){
HXLINE( 510)										int key = keys->__get(_g);
HXDLIN( 510)										_g = (_g + 1);
HXDLIN( 510)										action->addKey(key,state);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 510)									int state1 = 2;
HXDLIN( 510)									int _g1 = 0;
HXDLIN( 510)									while((_g1 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g1);
HXDLIN( 510)										_g1 = (_g1 + 1);
HXDLIN( 510)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 510)									int state2 = -1;
HXDLIN( 510)									int _g2 = 0;
HXDLIN( 510)									while((_g2 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g2);
HXDLIN( 510)										_g2 = (_g2 + 1);
HXDLIN( 510)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 510)									int state = 1;
HXDLIN( 510)									int _g = 0;
HXDLIN( 510)									while((_g < keys->length)){
HXLINE( 510)										int key = keys->__get(_g);
HXDLIN( 510)										_g = (_g + 1);
HXDLIN( 510)										action->addKey(key,state);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 510)									int state1 = 2;
HXDLIN( 510)									int _g1 = 0;
HXDLIN( 510)									while((_g1 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g1);
HXDLIN( 510)										_g1 = (_g1 + 1);
HXDLIN( 510)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 510)									int state2 = -1;
HXDLIN( 510)									int _g2 = 0;
HXDLIN( 510)									while((_g2 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g2);
HXDLIN( 510)										_g2 = (_g2 + 1);
HXDLIN( 510)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 510)									int state = 1;
HXDLIN( 510)									int _g = 0;
HXDLIN( 510)									while((_g < keys->length)){
HXLINE( 510)										int key = keys->__get(_g);
HXDLIN( 510)										_g = (_g + 1);
HXDLIN( 510)										action->addKey(key,state);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 510)									int state1 = 2;
HXDLIN( 510)									int _g1 = 0;
HXDLIN( 510)									while((_g1 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g1);
HXDLIN( 510)										_g1 = (_g1 + 1);
HXDLIN( 510)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 510)									int state2 = -1;
HXDLIN( 510)									int _g2 = 0;
HXDLIN( 510)									while((_g2 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g2);
HXDLIN( 510)										_g2 = (_g2 + 1);
HXDLIN( 510)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 510)									int state = 1;
HXDLIN( 510)									int _g = 0;
HXDLIN( 510)									while((_g < keys->length)){
HXLINE( 510)										int key = keys->__get(_g);
HXDLIN( 510)										_g = (_g + 1);
HXDLIN( 510)										action->addKey(key,state);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 510)									int state1 = 2;
HXDLIN( 510)									int _g1 = 0;
HXDLIN( 510)									while((_g1 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g1);
HXDLIN( 510)										_g1 = (_g1 + 1);
HXDLIN( 510)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 510)								{
HXLINE( 510)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 510)									int state2 = -1;
HXDLIN( 510)									int _g2 = 0;
HXDLIN( 510)									while((_g2 < keys->length)){
HXLINE( 510)										int key = keys->__get(_g2);
HXDLIN( 510)										_g2 = (_g2 + 1);
HXDLIN( 510)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 510)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 510)								int state = 2;
HXDLIN( 510)								int _g = 0;
HXDLIN( 510)								while((_g < keys->length)){
HXLINE( 510)									int key = keys->__get(_g);
HXDLIN( 510)									_g = (_g + 1);
HXDLIN( 510)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 510)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 510)								int state = 2;
HXDLIN( 510)								int _g = 0;
HXDLIN( 510)								while((_g < keys->length)){
HXLINE( 510)									int key = keys->__get(_g);
HXDLIN( 510)									_g = (_g + 1);
HXDLIN( 510)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 510)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 510)								int state = 2;
HXDLIN( 510)								int _g = 0;
HXDLIN( 510)								while((_g < keys->length)){
HXLINE( 510)									int key = keys->__get(_g);
HXDLIN( 510)									_g = (_g + 1);
HXDLIN( 510)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 510)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 510)								int state = 2;
HXDLIN( 510)								int _g = 0;
HXDLIN( 510)								while((_g < keys->length)){
HXLINE( 510)									int key = keys->__get(_g);
HXDLIN( 510)									_g = (_g + 1);
HXDLIN( 510)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 510)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 510)								int state = 2;
HXDLIN( 510)								int _g = 0;
HXDLIN( 510)								while((_g < keys->length)){
HXLINE( 510)									int key = keys->__get(_g);
HXDLIN( 510)									_g = (_g + 1);
HXDLIN( 510)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 511)					{
HXLINE( 511)						::Array< int > keys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_469,1);
HXDLIN( 511)						switch((int)(::Control_obj::DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 511)									int state = 1;
HXDLIN( 511)									int _g = 0;
HXDLIN( 511)									while((_g < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g);
HXDLIN( 511)										_g = (_g + 1);
HXDLIN( 511)										action->addKey(key,state);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 511)									int state1 = 2;
HXDLIN( 511)									int _g1 = 0;
HXDLIN( 511)									while((_g1 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g1);
HXDLIN( 511)										_g1 = (_g1 + 1);
HXDLIN( 511)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 511)									int state2 = -1;
HXDLIN( 511)									int _g2 = 0;
HXDLIN( 511)									while((_g2 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g2);
HXDLIN( 511)										_g2 = (_g2 + 1);
HXDLIN( 511)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 511)									int state = 1;
HXDLIN( 511)									int _g = 0;
HXDLIN( 511)									while((_g < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g);
HXDLIN( 511)										_g = (_g + 1);
HXDLIN( 511)										action->addKey(key,state);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 511)									int state1 = 2;
HXDLIN( 511)									int _g1 = 0;
HXDLIN( 511)									while((_g1 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g1);
HXDLIN( 511)										_g1 = (_g1 + 1);
HXDLIN( 511)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 511)									int state2 = -1;
HXDLIN( 511)									int _g2 = 0;
HXDLIN( 511)									while((_g2 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g2);
HXDLIN( 511)										_g2 = (_g2 + 1);
HXDLIN( 511)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 511)									int state = 1;
HXDLIN( 511)									int _g = 0;
HXDLIN( 511)									while((_g < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g);
HXDLIN( 511)										_g = (_g + 1);
HXDLIN( 511)										action->addKey(key,state);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 511)									int state1 = 2;
HXDLIN( 511)									int _g1 = 0;
HXDLIN( 511)									while((_g1 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g1);
HXDLIN( 511)										_g1 = (_g1 + 1);
HXDLIN( 511)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 511)									int state2 = -1;
HXDLIN( 511)									int _g2 = 0;
HXDLIN( 511)									while((_g2 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g2);
HXDLIN( 511)										_g2 = (_g2 + 1);
HXDLIN( 511)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 511)									int state = 1;
HXDLIN( 511)									int _g = 0;
HXDLIN( 511)									while((_g < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g);
HXDLIN( 511)										_g = (_g + 1);
HXDLIN( 511)										action->addKey(key,state);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 511)									int state1 = 2;
HXDLIN( 511)									int _g1 = 0;
HXDLIN( 511)									while((_g1 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g1);
HXDLIN( 511)										_g1 = (_g1 + 1);
HXDLIN( 511)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 511)								{
HXLINE( 511)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 511)									int state2 = -1;
HXDLIN( 511)									int _g2 = 0;
HXDLIN( 511)									while((_g2 < keys1->length)){
HXLINE( 511)										int key = keys1->__get(_g2);
HXDLIN( 511)										_g2 = (_g2 + 1);
HXDLIN( 511)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 511)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 511)								int state = 2;
HXDLIN( 511)								int _g = 0;
HXDLIN( 511)								while((_g < keys1->length)){
HXLINE( 511)									int key = keys1->__get(_g);
HXDLIN( 511)									_g = (_g + 1);
HXDLIN( 511)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 511)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 511)								int state = 2;
HXDLIN( 511)								int _g = 0;
HXDLIN( 511)								while((_g < keys1->length)){
HXLINE( 511)									int key = keys1->__get(_g);
HXDLIN( 511)									_g = (_g + 1);
HXDLIN( 511)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 511)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 511)								int state = 2;
HXDLIN( 511)								int _g = 0;
HXDLIN( 511)								while((_g < keys1->length)){
HXLINE( 511)									int key = keys1->__get(_g);
HXDLIN( 511)									_g = (_g + 1);
HXDLIN( 511)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 511)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 511)								int state = 2;
HXDLIN( 511)								int _g = 0;
HXDLIN( 511)								while((_g < keys1->length)){
HXLINE( 511)									int key = keys1->__get(_g);
HXDLIN( 511)									_g = (_g + 1);
HXDLIN( 511)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 511)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 511)								int state = 2;
HXDLIN( 511)								int _g = 0;
HXDLIN( 511)								while((_g < keys1->length)){
HXLINE( 511)									int key = keys1->__get(_g);
HXDLIN( 511)									_g = (_g + 1);
HXDLIN( 511)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 512)					{
HXLINE( 512)						::Array< int > keys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_470,1);
HXDLIN( 512)						switch((int)(::Control_obj::LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 512)									int state = 1;
HXDLIN( 512)									int _g = 0;
HXDLIN( 512)									while((_g < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g);
HXDLIN( 512)										_g = (_g + 1);
HXDLIN( 512)										action->addKey(key,state);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 512)									int state1 = 2;
HXDLIN( 512)									int _g1 = 0;
HXDLIN( 512)									while((_g1 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g1);
HXDLIN( 512)										_g1 = (_g1 + 1);
HXDLIN( 512)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 512)									int state2 = -1;
HXDLIN( 512)									int _g2 = 0;
HXDLIN( 512)									while((_g2 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g2);
HXDLIN( 512)										_g2 = (_g2 + 1);
HXDLIN( 512)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 512)									int state = 1;
HXDLIN( 512)									int _g = 0;
HXDLIN( 512)									while((_g < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g);
HXDLIN( 512)										_g = (_g + 1);
HXDLIN( 512)										action->addKey(key,state);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 512)									int state1 = 2;
HXDLIN( 512)									int _g1 = 0;
HXDLIN( 512)									while((_g1 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g1);
HXDLIN( 512)										_g1 = (_g1 + 1);
HXDLIN( 512)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 512)									int state2 = -1;
HXDLIN( 512)									int _g2 = 0;
HXDLIN( 512)									while((_g2 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g2);
HXDLIN( 512)										_g2 = (_g2 + 1);
HXDLIN( 512)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 512)									int state = 1;
HXDLIN( 512)									int _g = 0;
HXDLIN( 512)									while((_g < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g);
HXDLIN( 512)										_g = (_g + 1);
HXDLIN( 512)										action->addKey(key,state);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 512)									int state1 = 2;
HXDLIN( 512)									int _g1 = 0;
HXDLIN( 512)									while((_g1 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g1);
HXDLIN( 512)										_g1 = (_g1 + 1);
HXDLIN( 512)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 512)									int state2 = -1;
HXDLIN( 512)									int _g2 = 0;
HXDLIN( 512)									while((_g2 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g2);
HXDLIN( 512)										_g2 = (_g2 + 1);
HXDLIN( 512)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 512)									int state = 1;
HXDLIN( 512)									int _g = 0;
HXDLIN( 512)									while((_g < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g);
HXDLIN( 512)										_g = (_g + 1);
HXDLIN( 512)										action->addKey(key,state);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 512)									int state1 = 2;
HXDLIN( 512)									int _g1 = 0;
HXDLIN( 512)									while((_g1 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g1);
HXDLIN( 512)										_g1 = (_g1 + 1);
HXDLIN( 512)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 512)								{
HXLINE( 512)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 512)									int state2 = -1;
HXDLIN( 512)									int _g2 = 0;
HXDLIN( 512)									while((_g2 < keys2->length)){
HXLINE( 512)										int key = keys2->__get(_g2);
HXDLIN( 512)										_g2 = (_g2 + 1);
HXDLIN( 512)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 512)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 512)								int state = 2;
HXDLIN( 512)								int _g = 0;
HXDLIN( 512)								while((_g < keys2->length)){
HXLINE( 512)									int key = keys2->__get(_g);
HXDLIN( 512)									_g = (_g + 1);
HXDLIN( 512)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 512)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 512)								int state = 2;
HXDLIN( 512)								int _g = 0;
HXDLIN( 512)								while((_g < keys2->length)){
HXLINE( 512)									int key = keys2->__get(_g);
HXDLIN( 512)									_g = (_g + 1);
HXDLIN( 512)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 512)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 512)								int state = 2;
HXDLIN( 512)								int _g = 0;
HXDLIN( 512)								while((_g < keys2->length)){
HXLINE( 512)									int key = keys2->__get(_g);
HXDLIN( 512)									_g = (_g + 1);
HXDLIN( 512)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 512)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 512)								int state = 2;
HXDLIN( 512)								int _g = 0;
HXDLIN( 512)								while((_g < keys2->length)){
HXLINE( 512)									int key = keys2->__get(_g);
HXDLIN( 512)									_g = (_g + 1);
HXDLIN( 512)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 512)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 512)								int state = 2;
HXDLIN( 512)								int _g = 0;
HXDLIN( 512)								while((_g < keys2->length)){
HXLINE( 512)									int key = keys2->__get(_g);
HXDLIN( 512)									_g = (_g + 1);
HXDLIN( 512)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 513)					{
HXLINE( 513)						::Array< int > keys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_471,1);
HXDLIN( 513)						switch((int)(::Control_obj::RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 513)									int state = 1;
HXDLIN( 513)									int _g = 0;
HXDLIN( 513)									while((_g < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g);
HXDLIN( 513)										_g = (_g + 1);
HXDLIN( 513)										action->addKey(key,state);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 513)									int state1 = 2;
HXDLIN( 513)									int _g1 = 0;
HXDLIN( 513)									while((_g1 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g1);
HXDLIN( 513)										_g1 = (_g1 + 1);
HXDLIN( 513)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 513)									int state2 = -1;
HXDLIN( 513)									int _g2 = 0;
HXDLIN( 513)									while((_g2 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g2);
HXDLIN( 513)										_g2 = (_g2 + 1);
HXDLIN( 513)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 513)									int state = 1;
HXDLIN( 513)									int _g = 0;
HXDLIN( 513)									while((_g < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g);
HXDLIN( 513)										_g = (_g + 1);
HXDLIN( 513)										action->addKey(key,state);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 513)									int state1 = 2;
HXDLIN( 513)									int _g1 = 0;
HXDLIN( 513)									while((_g1 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g1);
HXDLIN( 513)										_g1 = (_g1 + 1);
HXDLIN( 513)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 513)									int state2 = -1;
HXDLIN( 513)									int _g2 = 0;
HXDLIN( 513)									while((_g2 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g2);
HXDLIN( 513)										_g2 = (_g2 + 1);
HXDLIN( 513)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 513)									int state = 1;
HXDLIN( 513)									int _g = 0;
HXDLIN( 513)									while((_g < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g);
HXDLIN( 513)										_g = (_g + 1);
HXDLIN( 513)										action->addKey(key,state);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 513)									int state1 = 2;
HXDLIN( 513)									int _g1 = 0;
HXDLIN( 513)									while((_g1 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g1);
HXDLIN( 513)										_g1 = (_g1 + 1);
HXDLIN( 513)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 513)									int state2 = -1;
HXDLIN( 513)									int _g2 = 0;
HXDLIN( 513)									while((_g2 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g2);
HXDLIN( 513)										_g2 = (_g2 + 1);
HXDLIN( 513)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 513)									int state = 1;
HXDLIN( 513)									int _g = 0;
HXDLIN( 513)									while((_g < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g);
HXDLIN( 513)										_g = (_g + 1);
HXDLIN( 513)										action->addKey(key,state);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 513)									int state1 = 2;
HXDLIN( 513)									int _g1 = 0;
HXDLIN( 513)									while((_g1 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g1);
HXDLIN( 513)										_g1 = (_g1 + 1);
HXDLIN( 513)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 513)								{
HXLINE( 513)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 513)									int state2 = -1;
HXDLIN( 513)									int _g2 = 0;
HXDLIN( 513)									while((_g2 < keys3->length)){
HXLINE( 513)										int key = keys3->__get(_g2);
HXDLIN( 513)										_g2 = (_g2 + 1);
HXDLIN( 513)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 513)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 513)								int state = 2;
HXDLIN( 513)								int _g = 0;
HXDLIN( 513)								while((_g < keys3->length)){
HXLINE( 513)									int key = keys3->__get(_g);
HXDLIN( 513)									_g = (_g + 1);
HXDLIN( 513)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 513)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 513)								int state = 2;
HXDLIN( 513)								int _g = 0;
HXDLIN( 513)								while((_g < keys3->length)){
HXLINE( 513)									int key = keys3->__get(_g);
HXDLIN( 513)									_g = (_g + 1);
HXDLIN( 513)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 513)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 513)								int state = 2;
HXDLIN( 513)								int _g = 0;
HXDLIN( 513)								while((_g < keys3->length)){
HXLINE( 513)									int key = keys3->__get(_g);
HXDLIN( 513)									_g = (_g + 1);
HXDLIN( 513)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 513)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 513)								int state = 2;
HXDLIN( 513)								int _g = 0;
HXDLIN( 513)								while((_g < keys3->length)){
HXLINE( 513)									int key = keys3->__get(_g);
HXDLIN( 513)									_g = (_g + 1);
HXDLIN( 513)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 513)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 513)								int state = 2;
HXDLIN( 513)								int _g = 0;
HXDLIN( 513)								while((_g < keys3->length)){
HXLINE( 513)									int key = keys3->__get(_g);
HXDLIN( 513)									_g = (_g + 1);
HXDLIN( 513)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 514)					{
HXLINE( 514)						::Array< int > keys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_472,2);
HXDLIN( 514)						switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 514)									int state = 1;
HXDLIN( 514)									int _g = 0;
HXDLIN( 514)									while((_g < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g);
HXDLIN( 514)										_g = (_g + 1);
HXDLIN( 514)										action->addKey(key,state);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 514)									int state1 = 2;
HXDLIN( 514)									int _g1 = 0;
HXDLIN( 514)									while((_g1 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g1);
HXDLIN( 514)										_g1 = (_g1 + 1);
HXDLIN( 514)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 514)									int state2 = -1;
HXDLIN( 514)									int _g2 = 0;
HXDLIN( 514)									while((_g2 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g2);
HXDLIN( 514)										_g2 = (_g2 + 1);
HXDLIN( 514)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 514)									int state = 1;
HXDLIN( 514)									int _g = 0;
HXDLIN( 514)									while((_g < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g);
HXDLIN( 514)										_g = (_g + 1);
HXDLIN( 514)										action->addKey(key,state);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 514)									int state1 = 2;
HXDLIN( 514)									int _g1 = 0;
HXDLIN( 514)									while((_g1 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g1);
HXDLIN( 514)										_g1 = (_g1 + 1);
HXDLIN( 514)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 514)									int state2 = -1;
HXDLIN( 514)									int _g2 = 0;
HXDLIN( 514)									while((_g2 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g2);
HXDLIN( 514)										_g2 = (_g2 + 1);
HXDLIN( 514)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 514)									int state = 1;
HXDLIN( 514)									int _g = 0;
HXDLIN( 514)									while((_g < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g);
HXDLIN( 514)										_g = (_g + 1);
HXDLIN( 514)										action->addKey(key,state);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 514)									int state1 = 2;
HXDLIN( 514)									int _g1 = 0;
HXDLIN( 514)									while((_g1 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g1);
HXDLIN( 514)										_g1 = (_g1 + 1);
HXDLIN( 514)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 514)									int state2 = -1;
HXDLIN( 514)									int _g2 = 0;
HXDLIN( 514)									while((_g2 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g2);
HXDLIN( 514)										_g2 = (_g2 + 1);
HXDLIN( 514)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 514)									int state = 1;
HXDLIN( 514)									int _g = 0;
HXDLIN( 514)									while((_g < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g);
HXDLIN( 514)										_g = (_g + 1);
HXDLIN( 514)										action->addKey(key,state);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 514)									int state1 = 2;
HXDLIN( 514)									int _g1 = 0;
HXDLIN( 514)									while((_g1 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g1);
HXDLIN( 514)										_g1 = (_g1 + 1);
HXDLIN( 514)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 514)								{
HXLINE( 514)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 514)									int state2 = -1;
HXDLIN( 514)									int _g2 = 0;
HXDLIN( 514)									while((_g2 < keys4->length)){
HXLINE( 514)										int key = keys4->__get(_g2);
HXDLIN( 514)										_g2 = (_g2 + 1);
HXDLIN( 514)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 514)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 514)								int state = 2;
HXDLIN( 514)								int _g = 0;
HXDLIN( 514)								while((_g < keys4->length)){
HXLINE( 514)									int key = keys4->__get(_g);
HXDLIN( 514)									_g = (_g + 1);
HXDLIN( 514)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 514)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 514)								int state = 2;
HXDLIN( 514)								int _g = 0;
HXDLIN( 514)								while((_g < keys4->length)){
HXLINE( 514)									int key = keys4->__get(_g);
HXDLIN( 514)									_g = (_g + 1);
HXDLIN( 514)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 514)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 514)								int state = 2;
HXDLIN( 514)								int _g = 0;
HXDLIN( 514)								while((_g < keys4->length)){
HXLINE( 514)									int key = keys4->__get(_g);
HXDLIN( 514)									_g = (_g + 1);
HXDLIN( 514)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 514)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 514)								int state = 2;
HXDLIN( 514)								int _g = 0;
HXDLIN( 514)								while((_g < keys4->length)){
HXLINE( 514)									int key = keys4->__get(_g);
HXDLIN( 514)									_g = (_g + 1);
HXDLIN( 514)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 514)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 514)								int state = 2;
HXDLIN( 514)								int _g = 0;
HXDLIN( 514)								while((_g < keys4->length)){
HXLINE( 514)									int key = keys4->__get(_g);
HXDLIN( 514)									_g = (_g + 1);
HXDLIN( 514)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 515)					{
HXLINE( 515)						::Array< int > keys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_473,2);
HXDLIN( 515)						switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 515)									int state = 1;
HXDLIN( 515)									int _g = 0;
HXDLIN( 515)									while((_g < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g);
HXDLIN( 515)										_g = (_g + 1);
HXDLIN( 515)										action->addKey(key,state);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 515)									int state1 = 2;
HXDLIN( 515)									int _g1 = 0;
HXDLIN( 515)									while((_g1 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g1);
HXDLIN( 515)										_g1 = (_g1 + 1);
HXDLIN( 515)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 515)									int state2 = -1;
HXDLIN( 515)									int _g2 = 0;
HXDLIN( 515)									while((_g2 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g2);
HXDLIN( 515)										_g2 = (_g2 + 1);
HXDLIN( 515)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 515)									int state = 1;
HXDLIN( 515)									int _g = 0;
HXDLIN( 515)									while((_g < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g);
HXDLIN( 515)										_g = (_g + 1);
HXDLIN( 515)										action->addKey(key,state);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 515)									int state1 = 2;
HXDLIN( 515)									int _g1 = 0;
HXDLIN( 515)									while((_g1 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g1);
HXDLIN( 515)										_g1 = (_g1 + 1);
HXDLIN( 515)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 515)									int state2 = -1;
HXDLIN( 515)									int _g2 = 0;
HXDLIN( 515)									while((_g2 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g2);
HXDLIN( 515)										_g2 = (_g2 + 1);
HXDLIN( 515)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 515)									int state = 1;
HXDLIN( 515)									int _g = 0;
HXDLIN( 515)									while((_g < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g);
HXDLIN( 515)										_g = (_g + 1);
HXDLIN( 515)										action->addKey(key,state);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 515)									int state1 = 2;
HXDLIN( 515)									int _g1 = 0;
HXDLIN( 515)									while((_g1 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g1);
HXDLIN( 515)										_g1 = (_g1 + 1);
HXDLIN( 515)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 515)									int state2 = -1;
HXDLIN( 515)									int _g2 = 0;
HXDLIN( 515)									while((_g2 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g2);
HXDLIN( 515)										_g2 = (_g2 + 1);
HXDLIN( 515)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 515)									int state = 1;
HXDLIN( 515)									int _g = 0;
HXDLIN( 515)									while((_g < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g);
HXDLIN( 515)										_g = (_g + 1);
HXDLIN( 515)										action->addKey(key,state);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 515)									int state1 = 2;
HXDLIN( 515)									int _g1 = 0;
HXDLIN( 515)									while((_g1 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g1);
HXDLIN( 515)										_g1 = (_g1 + 1);
HXDLIN( 515)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 515)								{
HXLINE( 515)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 515)									int state2 = -1;
HXDLIN( 515)									int _g2 = 0;
HXDLIN( 515)									while((_g2 < keys5->length)){
HXLINE( 515)										int key = keys5->__get(_g2);
HXDLIN( 515)										_g2 = (_g2 + 1);
HXDLIN( 515)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 515)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 515)								int state = 2;
HXDLIN( 515)								int _g = 0;
HXDLIN( 515)								while((_g < keys5->length)){
HXLINE( 515)									int key = keys5->__get(_g);
HXDLIN( 515)									_g = (_g + 1);
HXDLIN( 515)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 515)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 515)								int state = 2;
HXDLIN( 515)								int _g = 0;
HXDLIN( 515)								while((_g < keys5->length)){
HXLINE( 515)									int key = keys5->__get(_g);
HXDLIN( 515)									_g = (_g + 1);
HXDLIN( 515)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 515)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 515)								int state = 2;
HXDLIN( 515)								int _g = 0;
HXDLIN( 515)								while((_g < keys5->length)){
HXLINE( 515)									int key = keys5->__get(_g);
HXDLIN( 515)									_g = (_g + 1);
HXDLIN( 515)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 515)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 515)								int state = 2;
HXDLIN( 515)								int _g = 0;
HXDLIN( 515)								while((_g < keys5->length)){
HXLINE( 515)									int key = keys5->__get(_g);
HXDLIN( 515)									_g = (_g + 1);
HXDLIN( 515)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 515)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 515)								int state = 2;
HXDLIN( 515)								int _g = 0;
HXDLIN( 515)								while((_g < keys5->length)){
HXLINE( 515)									int key = keys5->__get(_g);
HXDLIN( 515)									_g = (_g + 1);
HXDLIN( 515)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 516)					{
HXLINE( 516)						::Array< int > keys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_474,1);
HXDLIN( 516)						switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 516)									int state = 1;
HXDLIN( 516)									int _g = 0;
HXDLIN( 516)									while((_g < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g);
HXDLIN( 516)										_g = (_g + 1);
HXDLIN( 516)										action->addKey(key,state);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 516)									int state1 = 2;
HXDLIN( 516)									int _g1 = 0;
HXDLIN( 516)									while((_g1 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g1);
HXDLIN( 516)										_g1 = (_g1 + 1);
HXDLIN( 516)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 516)									int state2 = -1;
HXDLIN( 516)									int _g2 = 0;
HXDLIN( 516)									while((_g2 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g2);
HXDLIN( 516)										_g2 = (_g2 + 1);
HXDLIN( 516)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 516)									int state = 1;
HXDLIN( 516)									int _g = 0;
HXDLIN( 516)									while((_g < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g);
HXDLIN( 516)										_g = (_g + 1);
HXDLIN( 516)										action->addKey(key,state);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 516)									int state1 = 2;
HXDLIN( 516)									int _g1 = 0;
HXDLIN( 516)									while((_g1 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g1);
HXDLIN( 516)										_g1 = (_g1 + 1);
HXDLIN( 516)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 516)									int state2 = -1;
HXDLIN( 516)									int _g2 = 0;
HXDLIN( 516)									while((_g2 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g2);
HXDLIN( 516)										_g2 = (_g2 + 1);
HXDLIN( 516)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 516)									int state = 1;
HXDLIN( 516)									int _g = 0;
HXDLIN( 516)									while((_g < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g);
HXDLIN( 516)										_g = (_g + 1);
HXDLIN( 516)										action->addKey(key,state);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 516)									int state1 = 2;
HXDLIN( 516)									int _g1 = 0;
HXDLIN( 516)									while((_g1 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g1);
HXDLIN( 516)										_g1 = (_g1 + 1);
HXDLIN( 516)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 516)									int state2 = -1;
HXDLIN( 516)									int _g2 = 0;
HXDLIN( 516)									while((_g2 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g2);
HXDLIN( 516)										_g2 = (_g2 + 1);
HXDLIN( 516)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 516)									int state = 1;
HXDLIN( 516)									int _g = 0;
HXDLIN( 516)									while((_g < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g);
HXDLIN( 516)										_g = (_g + 1);
HXDLIN( 516)										action->addKey(key,state);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 516)									int state1 = 2;
HXDLIN( 516)									int _g1 = 0;
HXDLIN( 516)									while((_g1 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g1);
HXDLIN( 516)										_g1 = (_g1 + 1);
HXDLIN( 516)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 516)								{
HXLINE( 516)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 516)									int state2 = -1;
HXDLIN( 516)									int _g2 = 0;
HXDLIN( 516)									while((_g2 < keys6->length)){
HXLINE( 516)										int key = keys6->__get(_g2);
HXDLIN( 516)										_g2 = (_g2 + 1);
HXDLIN( 516)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 516)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 516)								int state = 2;
HXDLIN( 516)								int _g = 0;
HXDLIN( 516)								while((_g < keys6->length)){
HXLINE( 516)									int key = keys6->__get(_g);
HXDLIN( 516)									_g = (_g + 1);
HXDLIN( 516)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 516)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 516)								int state = 2;
HXDLIN( 516)								int _g = 0;
HXDLIN( 516)								while((_g < keys6->length)){
HXLINE( 516)									int key = keys6->__get(_g);
HXDLIN( 516)									_g = (_g + 1);
HXDLIN( 516)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 516)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 516)								int state = 2;
HXDLIN( 516)								int _g = 0;
HXDLIN( 516)								while((_g < keys6->length)){
HXLINE( 516)									int key = keys6->__get(_g);
HXDLIN( 516)									_g = (_g + 1);
HXDLIN( 516)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 516)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 516)								int state = 2;
HXDLIN( 516)								int _g = 0;
HXDLIN( 516)								while((_g < keys6->length)){
HXLINE( 516)									int key = keys6->__get(_g);
HXDLIN( 516)									_g = (_g + 1);
HXDLIN( 516)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 516)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 516)								int state = 2;
HXDLIN( 516)								int _g = 0;
HXDLIN( 516)								while((_g < keys6->length)){
HXLINE( 516)									int key = keys6->__get(_g);
HXDLIN( 516)									_g = (_g + 1);
HXDLIN( 516)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 517)					{
HXLINE( 517)						::Array< int > keys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_475,1);
HXDLIN( 517)						switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 517)									int state = 1;
HXDLIN( 517)									int _g = 0;
HXDLIN( 517)									while((_g < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g);
HXDLIN( 517)										_g = (_g + 1);
HXDLIN( 517)										action->addKey(key,state);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 517)									int state1 = 2;
HXDLIN( 517)									int _g1 = 0;
HXDLIN( 517)									while((_g1 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g1);
HXDLIN( 517)										_g1 = (_g1 + 1);
HXDLIN( 517)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 517)									int state2 = -1;
HXDLIN( 517)									int _g2 = 0;
HXDLIN( 517)									while((_g2 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g2);
HXDLIN( 517)										_g2 = (_g2 + 1);
HXDLIN( 517)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 517)									int state = 1;
HXDLIN( 517)									int _g = 0;
HXDLIN( 517)									while((_g < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g);
HXDLIN( 517)										_g = (_g + 1);
HXDLIN( 517)										action->addKey(key,state);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 517)									int state1 = 2;
HXDLIN( 517)									int _g1 = 0;
HXDLIN( 517)									while((_g1 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g1);
HXDLIN( 517)										_g1 = (_g1 + 1);
HXDLIN( 517)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 517)									int state2 = -1;
HXDLIN( 517)									int _g2 = 0;
HXDLIN( 517)									while((_g2 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g2);
HXDLIN( 517)										_g2 = (_g2 + 1);
HXDLIN( 517)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 517)									int state = 1;
HXDLIN( 517)									int _g = 0;
HXDLIN( 517)									while((_g < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g);
HXDLIN( 517)										_g = (_g + 1);
HXDLIN( 517)										action->addKey(key,state);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 517)									int state1 = 2;
HXDLIN( 517)									int _g1 = 0;
HXDLIN( 517)									while((_g1 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g1);
HXDLIN( 517)										_g1 = (_g1 + 1);
HXDLIN( 517)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 517)									int state2 = -1;
HXDLIN( 517)									int _g2 = 0;
HXDLIN( 517)									while((_g2 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g2);
HXDLIN( 517)										_g2 = (_g2 + 1);
HXDLIN( 517)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 517)									int state = 1;
HXDLIN( 517)									int _g = 0;
HXDLIN( 517)									while((_g < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g);
HXDLIN( 517)										_g = (_g + 1);
HXDLIN( 517)										action->addKey(key,state);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 517)									int state1 = 2;
HXDLIN( 517)									int _g1 = 0;
HXDLIN( 517)									while((_g1 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g1);
HXDLIN( 517)										_g1 = (_g1 + 1);
HXDLIN( 517)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 517)								{
HXLINE( 517)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 517)									int state2 = -1;
HXDLIN( 517)									int _g2 = 0;
HXDLIN( 517)									while((_g2 < keys7->length)){
HXLINE( 517)										int key = keys7->__get(_g2);
HXDLIN( 517)										_g2 = (_g2 + 1);
HXDLIN( 517)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 517)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 517)								int state = 2;
HXDLIN( 517)								int _g = 0;
HXDLIN( 517)								while((_g < keys7->length)){
HXLINE( 517)									int key = keys7->__get(_g);
HXDLIN( 517)									_g = (_g + 1);
HXDLIN( 517)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 517)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 517)								int state = 2;
HXDLIN( 517)								int _g = 0;
HXDLIN( 517)								while((_g < keys7->length)){
HXLINE( 517)									int key = keys7->__get(_g);
HXDLIN( 517)									_g = (_g + 1);
HXDLIN( 517)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 517)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 517)								int state = 2;
HXDLIN( 517)								int _g = 0;
HXDLIN( 517)								while((_g < keys7->length)){
HXLINE( 517)									int key = keys7->__get(_g);
HXDLIN( 517)									_g = (_g + 1);
HXDLIN( 517)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 517)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 517)								int state = 2;
HXDLIN( 517)								int _g = 0;
HXDLIN( 517)								while((_g < keys7->length)){
HXLINE( 517)									int key = keys7->__get(_g);
HXDLIN( 517)									_g = (_g + 1);
HXDLIN( 517)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 517)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 517)								int state = 2;
HXDLIN( 517)								int _g = 0;
HXDLIN( 517)								while((_g < keys7->length)){
HXLINE( 517)									int key = keys7->__get(_g);
HXDLIN( 517)									_g = (_g + 1);
HXDLIN( 517)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
            				}
            				else {
HXLINE( 519)					{
HXLINE( 519)						::Array< int > keys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_476,1);
HXDLIN( 519)						switch((int)(::Control_obj::UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 519)									int state = 1;
HXDLIN( 519)									int _g = 0;
HXDLIN( 519)									while((_g < keys->length)){
HXLINE( 519)										int key = keys->__get(_g);
HXDLIN( 519)										_g = (_g + 1);
HXDLIN( 519)										action->addKey(key,state);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 519)									int state1 = 2;
HXDLIN( 519)									int _g1 = 0;
HXDLIN( 519)									while((_g1 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g1);
HXDLIN( 519)										_g1 = (_g1 + 1);
HXDLIN( 519)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 519)									int state2 = -1;
HXDLIN( 519)									int _g2 = 0;
HXDLIN( 519)									while((_g2 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g2);
HXDLIN( 519)										_g2 = (_g2 + 1);
HXDLIN( 519)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 519)									int state = 1;
HXDLIN( 519)									int _g = 0;
HXDLIN( 519)									while((_g < keys->length)){
HXLINE( 519)										int key = keys->__get(_g);
HXDLIN( 519)										_g = (_g + 1);
HXDLIN( 519)										action->addKey(key,state);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 519)									int state1 = 2;
HXDLIN( 519)									int _g1 = 0;
HXDLIN( 519)									while((_g1 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g1);
HXDLIN( 519)										_g1 = (_g1 + 1);
HXDLIN( 519)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 519)									int state2 = -1;
HXDLIN( 519)									int _g2 = 0;
HXDLIN( 519)									while((_g2 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g2);
HXDLIN( 519)										_g2 = (_g2 + 1);
HXDLIN( 519)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 519)									int state = 1;
HXDLIN( 519)									int _g = 0;
HXDLIN( 519)									while((_g < keys->length)){
HXLINE( 519)										int key = keys->__get(_g);
HXDLIN( 519)										_g = (_g + 1);
HXDLIN( 519)										action->addKey(key,state);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 519)									int state1 = 2;
HXDLIN( 519)									int _g1 = 0;
HXDLIN( 519)									while((_g1 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g1);
HXDLIN( 519)										_g1 = (_g1 + 1);
HXDLIN( 519)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 519)									int state2 = -1;
HXDLIN( 519)									int _g2 = 0;
HXDLIN( 519)									while((_g2 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g2);
HXDLIN( 519)										_g2 = (_g2 + 1);
HXDLIN( 519)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 519)									int state = 1;
HXDLIN( 519)									int _g = 0;
HXDLIN( 519)									while((_g < keys->length)){
HXLINE( 519)										int key = keys->__get(_g);
HXDLIN( 519)										_g = (_g + 1);
HXDLIN( 519)										action->addKey(key,state);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 519)									int state1 = 2;
HXDLIN( 519)									int _g1 = 0;
HXDLIN( 519)									while((_g1 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g1);
HXDLIN( 519)										_g1 = (_g1 + 1);
HXDLIN( 519)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 519)								{
HXLINE( 519)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 519)									int state2 = -1;
HXDLIN( 519)									int _g2 = 0;
HXDLIN( 519)									while((_g2 < keys->length)){
HXLINE( 519)										int key = keys->__get(_g2);
HXDLIN( 519)										_g2 = (_g2 + 1);
HXDLIN( 519)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 519)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 519)								int state = 2;
HXDLIN( 519)								int _g = 0;
HXDLIN( 519)								while((_g < keys->length)){
HXLINE( 519)									int key = keys->__get(_g);
HXDLIN( 519)									_g = (_g + 1);
HXDLIN( 519)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 519)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 519)								int state = 2;
HXDLIN( 519)								int _g = 0;
HXDLIN( 519)								while((_g < keys->length)){
HXLINE( 519)									int key = keys->__get(_g);
HXDLIN( 519)									_g = (_g + 1);
HXDLIN( 519)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 519)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 519)								int state = 2;
HXDLIN( 519)								int _g = 0;
HXDLIN( 519)								while((_g < keys->length)){
HXLINE( 519)									int key = keys->__get(_g);
HXDLIN( 519)									_g = (_g + 1);
HXDLIN( 519)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 519)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 519)								int state = 2;
HXDLIN( 519)								int _g = 0;
HXDLIN( 519)								while((_g < keys->length)){
HXLINE( 519)									int key = keys->__get(_g);
HXDLIN( 519)									_g = (_g + 1);
HXDLIN( 519)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 519)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 519)								int state = 2;
HXDLIN( 519)								int _g = 0;
HXDLIN( 519)								while((_g < keys->length)){
HXLINE( 519)									int key = keys->__get(_g);
HXDLIN( 519)									_g = (_g + 1);
HXDLIN( 519)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 520)					{
HXLINE( 520)						::Array< int > keys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_477,1);
HXDLIN( 520)						switch((int)(::Control_obj::DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 520)									int state = 1;
HXDLIN( 520)									int _g = 0;
HXDLIN( 520)									while((_g < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g);
HXDLIN( 520)										_g = (_g + 1);
HXDLIN( 520)										action->addKey(key,state);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 520)									int state1 = 2;
HXDLIN( 520)									int _g1 = 0;
HXDLIN( 520)									while((_g1 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g1);
HXDLIN( 520)										_g1 = (_g1 + 1);
HXDLIN( 520)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 520)									int state2 = -1;
HXDLIN( 520)									int _g2 = 0;
HXDLIN( 520)									while((_g2 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g2);
HXDLIN( 520)										_g2 = (_g2 + 1);
HXDLIN( 520)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 520)									int state = 1;
HXDLIN( 520)									int _g = 0;
HXDLIN( 520)									while((_g < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g);
HXDLIN( 520)										_g = (_g + 1);
HXDLIN( 520)										action->addKey(key,state);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 520)									int state1 = 2;
HXDLIN( 520)									int _g1 = 0;
HXDLIN( 520)									while((_g1 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g1);
HXDLIN( 520)										_g1 = (_g1 + 1);
HXDLIN( 520)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 520)									int state2 = -1;
HXDLIN( 520)									int _g2 = 0;
HXDLIN( 520)									while((_g2 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g2);
HXDLIN( 520)										_g2 = (_g2 + 1);
HXDLIN( 520)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 520)									int state = 1;
HXDLIN( 520)									int _g = 0;
HXDLIN( 520)									while((_g < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g);
HXDLIN( 520)										_g = (_g + 1);
HXDLIN( 520)										action->addKey(key,state);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 520)									int state1 = 2;
HXDLIN( 520)									int _g1 = 0;
HXDLIN( 520)									while((_g1 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g1);
HXDLIN( 520)										_g1 = (_g1 + 1);
HXDLIN( 520)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 520)									int state2 = -1;
HXDLIN( 520)									int _g2 = 0;
HXDLIN( 520)									while((_g2 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g2);
HXDLIN( 520)										_g2 = (_g2 + 1);
HXDLIN( 520)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 520)									int state = 1;
HXDLIN( 520)									int _g = 0;
HXDLIN( 520)									while((_g < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g);
HXDLIN( 520)										_g = (_g + 1);
HXDLIN( 520)										action->addKey(key,state);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 520)									int state1 = 2;
HXDLIN( 520)									int _g1 = 0;
HXDLIN( 520)									while((_g1 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g1);
HXDLIN( 520)										_g1 = (_g1 + 1);
HXDLIN( 520)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 520)								{
HXLINE( 520)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 520)									int state2 = -1;
HXDLIN( 520)									int _g2 = 0;
HXDLIN( 520)									while((_g2 < keys1->length)){
HXLINE( 520)										int key = keys1->__get(_g2);
HXDLIN( 520)										_g2 = (_g2 + 1);
HXDLIN( 520)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 520)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 520)								int state = 2;
HXDLIN( 520)								int _g = 0;
HXDLIN( 520)								while((_g < keys1->length)){
HXLINE( 520)									int key = keys1->__get(_g);
HXDLIN( 520)									_g = (_g + 1);
HXDLIN( 520)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 520)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 520)								int state = 2;
HXDLIN( 520)								int _g = 0;
HXDLIN( 520)								while((_g < keys1->length)){
HXLINE( 520)									int key = keys1->__get(_g);
HXDLIN( 520)									_g = (_g + 1);
HXDLIN( 520)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 520)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 520)								int state = 2;
HXDLIN( 520)								int _g = 0;
HXDLIN( 520)								while((_g < keys1->length)){
HXLINE( 520)									int key = keys1->__get(_g);
HXDLIN( 520)									_g = (_g + 1);
HXDLIN( 520)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 520)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 520)								int state = 2;
HXDLIN( 520)								int _g = 0;
HXDLIN( 520)								while((_g < keys1->length)){
HXLINE( 520)									int key = keys1->__get(_g);
HXDLIN( 520)									_g = (_g + 1);
HXDLIN( 520)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 520)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 520)								int state = 2;
HXDLIN( 520)								int _g = 0;
HXDLIN( 520)								while((_g < keys1->length)){
HXLINE( 520)									int key = keys1->__get(_g);
HXDLIN( 520)									_g = (_g + 1);
HXDLIN( 520)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 521)					{
HXLINE( 521)						::Array< int > keys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_478,1);
HXDLIN( 521)						switch((int)(::Control_obj::LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 521)									int state = 1;
HXDLIN( 521)									int _g = 0;
HXDLIN( 521)									while((_g < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g);
HXDLIN( 521)										_g = (_g + 1);
HXDLIN( 521)										action->addKey(key,state);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 521)									int state1 = 2;
HXDLIN( 521)									int _g1 = 0;
HXDLIN( 521)									while((_g1 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g1);
HXDLIN( 521)										_g1 = (_g1 + 1);
HXDLIN( 521)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 521)									int state2 = -1;
HXDLIN( 521)									int _g2 = 0;
HXDLIN( 521)									while((_g2 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g2);
HXDLIN( 521)										_g2 = (_g2 + 1);
HXDLIN( 521)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 521)									int state = 1;
HXDLIN( 521)									int _g = 0;
HXDLIN( 521)									while((_g < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g);
HXDLIN( 521)										_g = (_g + 1);
HXDLIN( 521)										action->addKey(key,state);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 521)									int state1 = 2;
HXDLIN( 521)									int _g1 = 0;
HXDLIN( 521)									while((_g1 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g1);
HXDLIN( 521)										_g1 = (_g1 + 1);
HXDLIN( 521)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 521)									int state2 = -1;
HXDLIN( 521)									int _g2 = 0;
HXDLIN( 521)									while((_g2 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g2);
HXDLIN( 521)										_g2 = (_g2 + 1);
HXDLIN( 521)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 521)									int state = 1;
HXDLIN( 521)									int _g = 0;
HXDLIN( 521)									while((_g < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g);
HXDLIN( 521)										_g = (_g + 1);
HXDLIN( 521)										action->addKey(key,state);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 521)									int state1 = 2;
HXDLIN( 521)									int _g1 = 0;
HXDLIN( 521)									while((_g1 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g1);
HXDLIN( 521)										_g1 = (_g1 + 1);
HXDLIN( 521)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 521)									int state2 = -1;
HXDLIN( 521)									int _g2 = 0;
HXDLIN( 521)									while((_g2 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g2);
HXDLIN( 521)										_g2 = (_g2 + 1);
HXDLIN( 521)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 521)									int state = 1;
HXDLIN( 521)									int _g = 0;
HXDLIN( 521)									while((_g < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g);
HXDLIN( 521)										_g = (_g + 1);
HXDLIN( 521)										action->addKey(key,state);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 521)									int state1 = 2;
HXDLIN( 521)									int _g1 = 0;
HXDLIN( 521)									while((_g1 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g1);
HXDLIN( 521)										_g1 = (_g1 + 1);
HXDLIN( 521)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 521)								{
HXLINE( 521)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 521)									int state2 = -1;
HXDLIN( 521)									int _g2 = 0;
HXDLIN( 521)									while((_g2 < keys2->length)){
HXLINE( 521)										int key = keys2->__get(_g2);
HXDLIN( 521)										_g2 = (_g2 + 1);
HXDLIN( 521)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 521)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 521)								int state = 2;
HXDLIN( 521)								int _g = 0;
HXDLIN( 521)								while((_g < keys2->length)){
HXLINE( 521)									int key = keys2->__get(_g);
HXDLIN( 521)									_g = (_g + 1);
HXDLIN( 521)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 521)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 521)								int state = 2;
HXDLIN( 521)								int _g = 0;
HXDLIN( 521)								while((_g < keys2->length)){
HXLINE( 521)									int key = keys2->__get(_g);
HXDLIN( 521)									_g = (_g + 1);
HXDLIN( 521)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 521)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 521)								int state = 2;
HXDLIN( 521)								int _g = 0;
HXDLIN( 521)								while((_g < keys2->length)){
HXLINE( 521)									int key = keys2->__get(_g);
HXDLIN( 521)									_g = (_g + 1);
HXDLIN( 521)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 521)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 521)								int state = 2;
HXDLIN( 521)								int _g = 0;
HXDLIN( 521)								while((_g < keys2->length)){
HXLINE( 521)									int key = keys2->__get(_g);
HXDLIN( 521)									_g = (_g + 1);
HXDLIN( 521)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 521)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 521)								int state = 2;
HXDLIN( 521)								int _g = 0;
HXDLIN( 521)								while((_g < keys2->length)){
HXLINE( 521)									int key = keys2->__get(_g);
HXDLIN( 521)									_g = (_g + 1);
HXDLIN( 521)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 522)					{
HXLINE( 522)						::Array< int > keys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_479,1);
HXDLIN( 522)						switch((int)(::Control_obj::RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 522)									int state = 1;
HXDLIN( 522)									int _g = 0;
HXDLIN( 522)									while((_g < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g);
HXDLIN( 522)										_g = (_g + 1);
HXDLIN( 522)										action->addKey(key,state);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 522)									int state1 = 2;
HXDLIN( 522)									int _g1 = 0;
HXDLIN( 522)									while((_g1 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g1);
HXDLIN( 522)										_g1 = (_g1 + 1);
HXDLIN( 522)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 522)									int state2 = -1;
HXDLIN( 522)									int _g2 = 0;
HXDLIN( 522)									while((_g2 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g2);
HXDLIN( 522)										_g2 = (_g2 + 1);
HXDLIN( 522)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 522)									int state = 1;
HXDLIN( 522)									int _g = 0;
HXDLIN( 522)									while((_g < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g);
HXDLIN( 522)										_g = (_g + 1);
HXDLIN( 522)										action->addKey(key,state);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 522)									int state1 = 2;
HXDLIN( 522)									int _g1 = 0;
HXDLIN( 522)									while((_g1 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g1);
HXDLIN( 522)										_g1 = (_g1 + 1);
HXDLIN( 522)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 522)									int state2 = -1;
HXDLIN( 522)									int _g2 = 0;
HXDLIN( 522)									while((_g2 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g2);
HXDLIN( 522)										_g2 = (_g2 + 1);
HXDLIN( 522)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 522)									int state = 1;
HXDLIN( 522)									int _g = 0;
HXDLIN( 522)									while((_g < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g);
HXDLIN( 522)										_g = (_g + 1);
HXDLIN( 522)										action->addKey(key,state);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 522)									int state1 = 2;
HXDLIN( 522)									int _g1 = 0;
HXDLIN( 522)									while((_g1 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g1);
HXDLIN( 522)										_g1 = (_g1 + 1);
HXDLIN( 522)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 522)									int state2 = -1;
HXDLIN( 522)									int _g2 = 0;
HXDLIN( 522)									while((_g2 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g2);
HXDLIN( 522)										_g2 = (_g2 + 1);
HXDLIN( 522)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 522)									int state = 1;
HXDLIN( 522)									int _g = 0;
HXDLIN( 522)									while((_g < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g);
HXDLIN( 522)										_g = (_g + 1);
HXDLIN( 522)										action->addKey(key,state);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 522)									int state1 = 2;
HXDLIN( 522)									int _g1 = 0;
HXDLIN( 522)									while((_g1 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g1);
HXDLIN( 522)										_g1 = (_g1 + 1);
HXDLIN( 522)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 522)								{
HXLINE( 522)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 522)									int state2 = -1;
HXDLIN( 522)									int _g2 = 0;
HXDLIN( 522)									while((_g2 < keys3->length)){
HXLINE( 522)										int key = keys3->__get(_g2);
HXDLIN( 522)										_g2 = (_g2 + 1);
HXDLIN( 522)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 522)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 522)								int state = 2;
HXDLIN( 522)								int _g = 0;
HXDLIN( 522)								while((_g < keys3->length)){
HXLINE( 522)									int key = keys3->__get(_g);
HXDLIN( 522)									_g = (_g + 1);
HXDLIN( 522)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 522)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 522)								int state = 2;
HXDLIN( 522)								int _g = 0;
HXDLIN( 522)								while((_g < keys3->length)){
HXLINE( 522)									int key = keys3->__get(_g);
HXDLIN( 522)									_g = (_g + 1);
HXDLIN( 522)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 522)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 522)								int state = 2;
HXDLIN( 522)								int _g = 0;
HXDLIN( 522)								while((_g < keys3->length)){
HXLINE( 522)									int key = keys3->__get(_g);
HXDLIN( 522)									_g = (_g + 1);
HXDLIN( 522)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 522)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 522)								int state = 2;
HXDLIN( 522)								int _g = 0;
HXDLIN( 522)								while((_g < keys3->length)){
HXLINE( 522)									int key = keys3->__get(_g);
HXDLIN( 522)									_g = (_g + 1);
HXDLIN( 522)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 522)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 522)								int state = 2;
HXDLIN( 522)								int _g = 0;
HXDLIN( 522)								while((_g < keys3->length)){
HXLINE( 522)									int key = keys3->__get(_g);
HXDLIN( 522)									_g = (_g + 1);
HXDLIN( 522)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 523)					{
HXLINE( 523)						::Array< int > keys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_480,1);
HXDLIN( 523)						switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 523)									int state = 1;
HXDLIN( 523)									int _g = 0;
HXDLIN( 523)									while((_g < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g);
HXDLIN( 523)										_g = (_g + 1);
HXDLIN( 523)										action->addKey(key,state);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 523)									int state1 = 2;
HXDLIN( 523)									int _g1 = 0;
HXDLIN( 523)									while((_g1 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g1);
HXDLIN( 523)										_g1 = (_g1 + 1);
HXDLIN( 523)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 523)									int state2 = -1;
HXDLIN( 523)									int _g2 = 0;
HXDLIN( 523)									while((_g2 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g2);
HXDLIN( 523)										_g2 = (_g2 + 1);
HXDLIN( 523)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 523)									int state = 1;
HXDLIN( 523)									int _g = 0;
HXDLIN( 523)									while((_g < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g);
HXDLIN( 523)										_g = (_g + 1);
HXDLIN( 523)										action->addKey(key,state);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 523)									int state1 = 2;
HXDLIN( 523)									int _g1 = 0;
HXDLIN( 523)									while((_g1 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g1);
HXDLIN( 523)										_g1 = (_g1 + 1);
HXDLIN( 523)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 523)									int state2 = -1;
HXDLIN( 523)									int _g2 = 0;
HXDLIN( 523)									while((_g2 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g2);
HXDLIN( 523)										_g2 = (_g2 + 1);
HXDLIN( 523)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 523)									int state = 1;
HXDLIN( 523)									int _g = 0;
HXDLIN( 523)									while((_g < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g);
HXDLIN( 523)										_g = (_g + 1);
HXDLIN( 523)										action->addKey(key,state);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 523)									int state1 = 2;
HXDLIN( 523)									int _g1 = 0;
HXDLIN( 523)									while((_g1 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g1);
HXDLIN( 523)										_g1 = (_g1 + 1);
HXDLIN( 523)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 523)									int state2 = -1;
HXDLIN( 523)									int _g2 = 0;
HXDLIN( 523)									while((_g2 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g2);
HXDLIN( 523)										_g2 = (_g2 + 1);
HXDLIN( 523)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 523)									int state = 1;
HXDLIN( 523)									int _g = 0;
HXDLIN( 523)									while((_g < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g);
HXDLIN( 523)										_g = (_g + 1);
HXDLIN( 523)										action->addKey(key,state);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 523)									int state1 = 2;
HXDLIN( 523)									int _g1 = 0;
HXDLIN( 523)									while((_g1 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g1);
HXDLIN( 523)										_g1 = (_g1 + 1);
HXDLIN( 523)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 523)								{
HXLINE( 523)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 523)									int state2 = -1;
HXDLIN( 523)									int _g2 = 0;
HXDLIN( 523)									while((_g2 < keys4->length)){
HXLINE( 523)										int key = keys4->__get(_g2);
HXDLIN( 523)										_g2 = (_g2 + 1);
HXDLIN( 523)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 523)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 523)								int state = 2;
HXDLIN( 523)								int _g = 0;
HXDLIN( 523)								while((_g < keys4->length)){
HXLINE( 523)									int key = keys4->__get(_g);
HXDLIN( 523)									_g = (_g + 1);
HXDLIN( 523)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 523)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 523)								int state = 2;
HXDLIN( 523)								int _g = 0;
HXDLIN( 523)								while((_g < keys4->length)){
HXLINE( 523)									int key = keys4->__get(_g);
HXDLIN( 523)									_g = (_g + 1);
HXDLIN( 523)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 523)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 523)								int state = 2;
HXDLIN( 523)								int _g = 0;
HXDLIN( 523)								while((_g < keys4->length)){
HXLINE( 523)									int key = keys4->__get(_g);
HXDLIN( 523)									_g = (_g + 1);
HXDLIN( 523)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 523)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 523)								int state = 2;
HXDLIN( 523)								int _g = 0;
HXDLIN( 523)								while((_g < keys4->length)){
HXLINE( 523)									int key = keys4->__get(_g);
HXDLIN( 523)									_g = (_g + 1);
HXDLIN( 523)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 523)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 523)								int state = 2;
HXDLIN( 523)								int _g = 0;
HXDLIN( 523)								while((_g < keys4->length)){
HXLINE( 523)									int key = keys4->__get(_g);
HXDLIN( 523)									_g = (_g + 1);
HXDLIN( 523)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 524)					{
HXLINE( 524)						::Array< int > keys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_481,1);
HXDLIN( 524)						switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 524)									int state = 1;
HXDLIN( 524)									int _g = 0;
HXDLIN( 524)									while((_g < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g);
HXDLIN( 524)										_g = (_g + 1);
HXDLIN( 524)										action->addKey(key,state);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 524)									int state1 = 2;
HXDLIN( 524)									int _g1 = 0;
HXDLIN( 524)									while((_g1 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g1);
HXDLIN( 524)										_g1 = (_g1 + 1);
HXDLIN( 524)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 524)									int state2 = -1;
HXDLIN( 524)									int _g2 = 0;
HXDLIN( 524)									while((_g2 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g2);
HXDLIN( 524)										_g2 = (_g2 + 1);
HXDLIN( 524)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 524)									int state = 1;
HXDLIN( 524)									int _g = 0;
HXDLIN( 524)									while((_g < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g);
HXDLIN( 524)										_g = (_g + 1);
HXDLIN( 524)										action->addKey(key,state);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 524)									int state1 = 2;
HXDLIN( 524)									int _g1 = 0;
HXDLIN( 524)									while((_g1 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g1);
HXDLIN( 524)										_g1 = (_g1 + 1);
HXDLIN( 524)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 524)									int state2 = -1;
HXDLIN( 524)									int _g2 = 0;
HXDLIN( 524)									while((_g2 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g2);
HXDLIN( 524)										_g2 = (_g2 + 1);
HXDLIN( 524)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 524)									int state = 1;
HXDLIN( 524)									int _g = 0;
HXDLIN( 524)									while((_g < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g);
HXDLIN( 524)										_g = (_g + 1);
HXDLIN( 524)										action->addKey(key,state);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 524)									int state1 = 2;
HXDLIN( 524)									int _g1 = 0;
HXDLIN( 524)									while((_g1 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g1);
HXDLIN( 524)										_g1 = (_g1 + 1);
HXDLIN( 524)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 524)									int state2 = -1;
HXDLIN( 524)									int _g2 = 0;
HXDLIN( 524)									while((_g2 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g2);
HXDLIN( 524)										_g2 = (_g2 + 1);
HXDLIN( 524)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 524)									int state = 1;
HXDLIN( 524)									int _g = 0;
HXDLIN( 524)									while((_g < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g);
HXDLIN( 524)										_g = (_g + 1);
HXDLIN( 524)										action->addKey(key,state);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 524)									int state1 = 2;
HXDLIN( 524)									int _g1 = 0;
HXDLIN( 524)									while((_g1 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g1);
HXDLIN( 524)										_g1 = (_g1 + 1);
HXDLIN( 524)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 524)								{
HXLINE( 524)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 524)									int state2 = -1;
HXDLIN( 524)									int _g2 = 0;
HXDLIN( 524)									while((_g2 < keys5->length)){
HXLINE( 524)										int key = keys5->__get(_g2);
HXDLIN( 524)										_g2 = (_g2 + 1);
HXDLIN( 524)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 524)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 524)								int state = 2;
HXDLIN( 524)								int _g = 0;
HXDLIN( 524)								while((_g < keys5->length)){
HXLINE( 524)									int key = keys5->__get(_g);
HXDLIN( 524)									_g = (_g + 1);
HXDLIN( 524)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 524)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 524)								int state = 2;
HXDLIN( 524)								int _g = 0;
HXDLIN( 524)								while((_g < keys5->length)){
HXLINE( 524)									int key = keys5->__get(_g);
HXDLIN( 524)									_g = (_g + 1);
HXDLIN( 524)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 524)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 524)								int state = 2;
HXDLIN( 524)								int _g = 0;
HXDLIN( 524)								while((_g < keys5->length)){
HXLINE( 524)									int key = keys5->__get(_g);
HXDLIN( 524)									_g = (_g + 1);
HXDLIN( 524)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 524)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 524)								int state = 2;
HXDLIN( 524)								int _g = 0;
HXDLIN( 524)								while((_g < keys5->length)){
HXLINE( 524)									int key = keys5->__get(_g);
HXDLIN( 524)									_g = (_g + 1);
HXDLIN( 524)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 524)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 524)								int state = 2;
HXDLIN( 524)								int _g = 0;
HXDLIN( 524)								while((_g < keys5->length)){
HXLINE( 524)									int key = keys5->__get(_g);
HXDLIN( 524)									_g = (_g + 1);
HXDLIN( 524)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 525)					{
HXLINE( 525)						::Array< int > keys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_482,1);
HXDLIN( 525)						switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 525)									int state = 1;
HXDLIN( 525)									int _g = 0;
HXDLIN( 525)									while((_g < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g);
HXDLIN( 525)										_g = (_g + 1);
HXDLIN( 525)										action->addKey(key,state);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 525)									int state1 = 2;
HXDLIN( 525)									int _g1 = 0;
HXDLIN( 525)									while((_g1 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g1);
HXDLIN( 525)										_g1 = (_g1 + 1);
HXDLIN( 525)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 525)									int state2 = -1;
HXDLIN( 525)									int _g2 = 0;
HXDLIN( 525)									while((_g2 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g2);
HXDLIN( 525)										_g2 = (_g2 + 1);
HXDLIN( 525)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 525)									int state = 1;
HXDLIN( 525)									int _g = 0;
HXDLIN( 525)									while((_g < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g);
HXDLIN( 525)										_g = (_g + 1);
HXDLIN( 525)										action->addKey(key,state);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 525)									int state1 = 2;
HXDLIN( 525)									int _g1 = 0;
HXDLIN( 525)									while((_g1 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g1);
HXDLIN( 525)										_g1 = (_g1 + 1);
HXDLIN( 525)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 525)									int state2 = -1;
HXDLIN( 525)									int _g2 = 0;
HXDLIN( 525)									while((_g2 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g2);
HXDLIN( 525)										_g2 = (_g2 + 1);
HXDLIN( 525)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 525)									int state = 1;
HXDLIN( 525)									int _g = 0;
HXDLIN( 525)									while((_g < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g);
HXDLIN( 525)										_g = (_g + 1);
HXDLIN( 525)										action->addKey(key,state);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 525)									int state1 = 2;
HXDLIN( 525)									int _g1 = 0;
HXDLIN( 525)									while((_g1 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g1);
HXDLIN( 525)										_g1 = (_g1 + 1);
HXDLIN( 525)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 525)									int state2 = -1;
HXDLIN( 525)									int _g2 = 0;
HXDLIN( 525)									while((_g2 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g2);
HXDLIN( 525)										_g2 = (_g2 + 1);
HXDLIN( 525)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 525)									int state = 1;
HXDLIN( 525)									int _g = 0;
HXDLIN( 525)									while((_g < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g);
HXDLIN( 525)										_g = (_g + 1);
HXDLIN( 525)										action->addKey(key,state);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 525)									int state1 = 2;
HXDLIN( 525)									int _g1 = 0;
HXDLIN( 525)									while((_g1 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g1);
HXDLIN( 525)										_g1 = (_g1 + 1);
HXDLIN( 525)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 525)								{
HXLINE( 525)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 525)									int state2 = -1;
HXDLIN( 525)									int _g2 = 0;
HXDLIN( 525)									while((_g2 < keys6->length)){
HXLINE( 525)										int key = keys6->__get(_g2);
HXDLIN( 525)										_g2 = (_g2 + 1);
HXDLIN( 525)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 525)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 525)								int state = 2;
HXDLIN( 525)								int _g = 0;
HXDLIN( 525)								while((_g < keys6->length)){
HXLINE( 525)									int key = keys6->__get(_g);
HXDLIN( 525)									_g = (_g + 1);
HXDLIN( 525)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 525)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 525)								int state = 2;
HXDLIN( 525)								int _g = 0;
HXDLIN( 525)								while((_g < keys6->length)){
HXLINE( 525)									int key = keys6->__get(_g);
HXDLIN( 525)									_g = (_g + 1);
HXDLIN( 525)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 525)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 525)								int state = 2;
HXDLIN( 525)								int _g = 0;
HXDLIN( 525)								while((_g < keys6->length)){
HXLINE( 525)									int key = keys6->__get(_g);
HXDLIN( 525)									_g = (_g + 1);
HXDLIN( 525)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 525)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 525)								int state = 2;
HXDLIN( 525)								int _g = 0;
HXDLIN( 525)								while((_g < keys6->length)){
HXLINE( 525)									int key = keys6->__get(_g);
HXDLIN( 525)									_g = (_g + 1);
HXDLIN( 525)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 525)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 525)								int state = 2;
HXDLIN( 525)								int _g = 0;
HXDLIN( 525)								while((_g < keys6->length)){
HXLINE( 525)									int key = keys6->__get(_g);
HXDLIN( 525)									_g = (_g + 1);
HXDLIN( 525)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
HXLINE( 526)					{
HXLINE( 526)						::Array< int > keys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_483,1);
HXDLIN( 526)						switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 526)									int state = 1;
HXDLIN( 526)									int _g = 0;
HXDLIN( 526)									while((_g < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g);
HXDLIN( 526)										_g = (_g + 1);
HXDLIN( 526)										action->addKey(key,state);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 526)									int state1 = 2;
HXDLIN( 526)									int _g1 = 0;
HXDLIN( 526)									while((_g1 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g1);
HXDLIN( 526)										_g1 = (_g1 + 1);
HXDLIN( 526)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 526)									int state2 = -1;
HXDLIN( 526)									int _g2 = 0;
HXDLIN( 526)									while((_g2 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g2);
HXDLIN( 526)										_g2 = (_g2 + 1);
HXDLIN( 526)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 526)									int state = 1;
HXDLIN( 526)									int _g = 0;
HXDLIN( 526)									while((_g < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g);
HXDLIN( 526)										_g = (_g + 1);
HXDLIN( 526)										action->addKey(key,state);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 526)									int state1 = 2;
HXDLIN( 526)									int _g1 = 0;
HXDLIN( 526)									while((_g1 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g1);
HXDLIN( 526)										_g1 = (_g1 + 1);
HXDLIN( 526)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 526)									int state2 = -1;
HXDLIN( 526)									int _g2 = 0;
HXDLIN( 526)									while((_g2 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g2);
HXDLIN( 526)										_g2 = (_g2 + 1);
HXDLIN( 526)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 526)									int state = 1;
HXDLIN( 526)									int _g = 0;
HXDLIN( 526)									while((_g < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g);
HXDLIN( 526)										_g = (_g + 1);
HXDLIN( 526)										action->addKey(key,state);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 526)									int state1 = 2;
HXDLIN( 526)									int _g1 = 0;
HXDLIN( 526)									while((_g1 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g1);
HXDLIN( 526)										_g1 = (_g1 + 1);
HXDLIN( 526)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 526)									int state2 = -1;
HXDLIN( 526)									int _g2 = 0;
HXDLIN( 526)									while((_g2 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g2);
HXDLIN( 526)										_g2 = (_g2 + 1);
HXDLIN( 526)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 526)									int state = 1;
HXDLIN( 526)									int _g = 0;
HXDLIN( 526)									while((_g < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g);
HXDLIN( 526)										_g = (_g + 1);
HXDLIN( 526)										action->addKey(key,state);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 526)									int state1 = 2;
HXDLIN( 526)									int _g1 = 0;
HXDLIN( 526)									while((_g1 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g1);
HXDLIN( 526)										_g1 = (_g1 + 1);
HXDLIN( 526)										action1->addKey(key,state1);
            									}
            								}
HXDLIN( 526)								{
HXLINE( 526)									 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 526)									int state2 = -1;
HXDLIN( 526)									int _g2 = 0;
HXDLIN( 526)									while((_g2 < keys7->length)){
HXLINE( 526)										int key = keys7->__get(_g2);
HXDLIN( 526)										_g2 = (_g2 + 1);
HXDLIN( 526)										action2->addKey(key,state2);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 526)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 526)								int state = 2;
HXDLIN( 526)								int _g = 0;
HXDLIN( 526)								while((_g < keys7->length)){
HXLINE( 526)									int key = keys7->__get(_g);
HXDLIN( 526)									_g = (_g + 1);
HXDLIN( 526)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 526)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 526)								int state = 2;
HXDLIN( 526)								int _g = 0;
HXDLIN( 526)								while((_g < keys7->length)){
HXLINE( 526)									int key = keys7->__get(_g);
HXDLIN( 526)									_g = (_g + 1);
HXDLIN( 526)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 526)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 526)								int state = 2;
HXDLIN( 526)								int _g = 0;
HXDLIN( 526)								while((_g < keys7->length)){
HXLINE( 526)									int key = keys7->__get(_g);
HXDLIN( 526)									_g = (_g + 1);
HXDLIN( 526)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 526)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 526)								int state = 2;
HXDLIN( 526)								int _g = 0;
HXDLIN( 526)								while((_g < keys7->length)){
HXLINE( 526)									int key = keys7->__get(_g);
HXDLIN( 526)									_g = (_g + 1);
HXDLIN( 526)									action->addKey(key,state);
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 526)								 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 526)								int state = 2;
HXDLIN( 526)								int _g = 0;
HXDLIN( 526)								while((_g < keys7->length)){
HXLINE( 526)									int key = keys7->__get(_g);
HXDLIN( 526)									_g = (_g + 1);
HXDLIN( 526)									action->addKey(key,state);
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			case (int)3: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,setKeyboardScheme,(void))

void Controls_obj::removeKeyboard(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_568_removeKeyboard)
HXDLIN( 568)		int _g = 0;
HXDLIN( 568)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 568)		while((_g < _g1->length)){
HXDLIN( 568)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 568)			_g = (_g + 1);
HXLINE( 570)			int i = action->inputs->length;
HXLINE( 571)			while(true){
HXLINE( 571)				i = (i - 1);
HXDLIN( 571)				if (!(((i + 1) > 0))) {
HXLINE( 571)					goto _hx_goto_485;
            				}
HXLINE( 573)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 574)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 575)					action->remove(input,null());
            				}
            			}
            			_hx_goto_485:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,removeKeyboard,(void))

void Controls_obj::addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_581_addGamepad)
HXLINE( 582)		this->gamepadsAdded->push(id);
HXLINE( 585)		{
HXLINE( 585)			::Dynamic map = buttonMap;
HXDLIN( 585)			::Dynamic _g_map = map;
HXDLIN( 585)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 585)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 585)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 585)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 585)				 ::Control _g1_key = key;
HXDLIN( 585)				 ::Control control = _g1_key;
HXDLIN( 585)				::Array< int > buttons = _g1_value;
HXLINE( 586)				{
HXLINE( 586)					int id1 = id;
HXDLIN( 586)					::Array< int > buttons1 = buttons;
HXDLIN( 586)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 586)								int state = 1;
HXDLIN( 586)								int _g = 0;
HXDLIN( 586)								while((_g < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g);
HXDLIN( 586)									_g = (_g + 1);
HXDLIN( 586)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 586)								int state1 = 2;
HXDLIN( 586)								int _g1 = 0;
HXDLIN( 586)								while((_g1 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g1);
HXDLIN( 586)									_g1 = (_g1 + 1);
HXDLIN( 586)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 586)								int state2 = -1;
HXDLIN( 586)								int _g2 = 0;
HXDLIN( 586)								while((_g2 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g2);
HXDLIN( 586)									_g2 = (_g2 + 1);
HXDLIN( 586)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 586)								int state = 1;
HXDLIN( 586)								int _g = 0;
HXDLIN( 586)								while((_g < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g);
HXDLIN( 586)									_g = (_g + 1);
HXDLIN( 586)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 586)								int state1 = 2;
HXDLIN( 586)								int _g1 = 0;
HXDLIN( 586)								while((_g1 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g1);
HXDLIN( 586)									_g1 = (_g1 + 1);
HXDLIN( 586)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 586)								int state2 = -1;
HXDLIN( 586)								int _g2 = 0;
HXDLIN( 586)								while((_g2 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g2);
HXDLIN( 586)									_g2 = (_g2 + 1);
HXDLIN( 586)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 586)								int state = 1;
HXDLIN( 586)								int _g = 0;
HXDLIN( 586)								while((_g < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g);
HXDLIN( 586)									_g = (_g + 1);
HXDLIN( 586)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 586)								int state1 = 2;
HXDLIN( 586)								int _g1 = 0;
HXDLIN( 586)								while((_g1 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g1);
HXDLIN( 586)									_g1 = (_g1 + 1);
HXDLIN( 586)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 586)								int state2 = -1;
HXDLIN( 586)								int _g2 = 0;
HXDLIN( 586)								while((_g2 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g2);
HXDLIN( 586)									_g2 = (_g2 + 1);
HXDLIN( 586)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 586)								int state = 1;
HXDLIN( 586)								int _g = 0;
HXDLIN( 586)								while((_g < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g);
HXDLIN( 586)									_g = (_g + 1);
HXDLIN( 586)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 586)								int state1 = 2;
HXDLIN( 586)								int _g1 = 0;
HXDLIN( 586)								while((_g1 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g1);
HXDLIN( 586)									_g1 = (_g1 + 1);
HXDLIN( 586)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 586)							{
HXLINE( 586)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 586)								int state2 = -1;
HXDLIN( 586)								int _g2 = 0;
HXDLIN( 586)								while((_g2 < buttons1->length)){
HXLINE( 586)									int button = buttons1->__get(_g2);
HXDLIN( 586)									_g2 = (_g2 + 1);
HXDLIN( 586)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 586)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 586)							int state = 2;
HXDLIN( 586)							int _g = 0;
HXDLIN( 586)							while((_g < buttons1->length)){
HXLINE( 586)								int button = buttons1->__get(_g);
HXDLIN( 586)								_g = (_g + 1);
HXDLIN( 586)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 586)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 586)							int state = 2;
HXDLIN( 586)							int _g = 0;
HXDLIN( 586)							while((_g < buttons1->length)){
HXLINE( 586)								int button = buttons1->__get(_g);
HXDLIN( 586)								_g = (_g + 1);
HXDLIN( 586)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 586)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 586)							int state = 2;
HXDLIN( 586)							int _g = 0;
HXDLIN( 586)							while((_g < buttons1->length)){
HXLINE( 586)								int button = buttons1->__get(_g);
HXDLIN( 586)								_g = (_g + 1);
HXDLIN( 586)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 586)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 586)							int state = 2;
HXDLIN( 586)							int _g = 0;
HXDLIN( 586)							while((_g < buttons1->length)){
HXLINE( 586)								int button = buttons1->__get(_g);
HXDLIN( 586)								_g = (_g + 1);
HXDLIN( 586)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 586)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 586)							int state = 2;
HXDLIN( 586)							int _g = 0;
HXDLIN( 586)							while((_g < buttons1->length)){
HXLINE( 586)								int button = buttons1->__get(_g);
HXDLIN( 586)								_g = (_g + 1);
HXDLIN( 586)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepad,(void))

void Controls_obj::addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_594_addGamepadLiteral)
HXLINE( 595)		this->gamepadsAdded->push(id);
HXLINE( 598)		{
HXLINE( 598)			::Dynamic map = buttonMap;
HXDLIN( 598)			::Dynamic _g_map = map;
HXDLIN( 598)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 598)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 598)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 598)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 598)				 ::Control _g1_key = key;
HXDLIN( 598)				 ::Control control = _g1_key;
HXDLIN( 598)				::Array< int > buttons = _g1_value;
HXLINE( 599)				{
HXLINE( 599)					int id1 = id;
HXDLIN( 599)					::Array< int > buttons1 = buttons;
HXDLIN( 599)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 599)								int state = 1;
HXDLIN( 599)								int _g = 0;
HXDLIN( 599)								while((_g < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g);
HXDLIN( 599)									_g = (_g + 1);
HXDLIN( 599)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 599)								int state1 = 2;
HXDLIN( 599)								int _g1 = 0;
HXDLIN( 599)								while((_g1 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g1);
HXDLIN( 599)									_g1 = (_g1 + 1);
HXDLIN( 599)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 599)								int state2 = -1;
HXDLIN( 599)								int _g2 = 0;
HXDLIN( 599)								while((_g2 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g2);
HXDLIN( 599)									_g2 = (_g2 + 1);
HXDLIN( 599)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 599)								int state = 1;
HXDLIN( 599)								int _g = 0;
HXDLIN( 599)								while((_g < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g);
HXDLIN( 599)									_g = (_g + 1);
HXDLIN( 599)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 599)								int state1 = 2;
HXDLIN( 599)								int _g1 = 0;
HXDLIN( 599)								while((_g1 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g1);
HXDLIN( 599)									_g1 = (_g1 + 1);
HXDLIN( 599)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 599)								int state2 = -1;
HXDLIN( 599)								int _g2 = 0;
HXDLIN( 599)								while((_g2 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g2);
HXDLIN( 599)									_g2 = (_g2 + 1);
HXDLIN( 599)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 599)								int state = 1;
HXDLIN( 599)								int _g = 0;
HXDLIN( 599)								while((_g < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g);
HXDLIN( 599)									_g = (_g + 1);
HXDLIN( 599)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 599)								int state1 = 2;
HXDLIN( 599)								int _g1 = 0;
HXDLIN( 599)								while((_g1 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g1);
HXDLIN( 599)									_g1 = (_g1 + 1);
HXDLIN( 599)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 599)								int state2 = -1;
HXDLIN( 599)								int _g2 = 0;
HXDLIN( 599)								while((_g2 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g2);
HXDLIN( 599)									_g2 = (_g2 + 1);
HXDLIN( 599)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 599)								int state = 1;
HXDLIN( 599)								int _g = 0;
HXDLIN( 599)								while((_g < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g);
HXDLIN( 599)									_g = (_g + 1);
HXDLIN( 599)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 599)								int state1 = 2;
HXDLIN( 599)								int _g1 = 0;
HXDLIN( 599)								while((_g1 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g1);
HXDLIN( 599)									_g1 = (_g1 + 1);
HXDLIN( 599)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 599)							{
HXLINE( 599)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 599)								int state2 = -1;
HXDLIN( 599)								int _g2 = 0;
HXDLIN( 599)								while((_g2 < buttons1->length)){
HXLINE( 599)									int button = buttons1->__get(_g2);
HXDLIN( 599)									_g2 = (_g2 + 1);
HXDLIN( 599)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 599)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 599)							int state = 2;
HXDLIN( 599)							int _g = 0;
HXDLIN( 599)							while((_g < buttons1->length)){
HXLINE( 599)								int button = buttons1->__get(_g);
HXDLIN( 599)								_g = (_g + 1);
HXDLIN( 599)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 599)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 599)							int state = 2;
HXDLIN( 599)							int _g = 0;
HXDLIN( 599)							while((_g < buttons1->length)){
HXLINE( 599)								int button = buttons1->__get(_g);
HXDLIN( 599)								_g = (_g + 1);
HXDLIN( 599)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 599)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 599)							int state = 2;
HXDLIN( 599)							int _g = 0;
HXDLIN( 599)							while((_g < buttons1->length)){
HXLINE( 599)								int button = buttons1->__get(_g);
HXDLIN( 599)								_g = (_g + 1);
HXDLIN( 599)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 599)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 599)							int state = 2;
HXDLIN( 599)							int _g = 0;
HXDLIN( 599)							while((_g < buttons1->length)){
HXLINE( 599)								int button = buttons1->__get(_g);
HXDLIN( 599)								_g = (_g + 1);
HXDLIN( 599)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 599)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 599)							int state = 2;
HXDLIN( 599)							int _g = 0;
HXDLIN( 599)							while((_g < buttons1->length)){
HXLINE( 599)								int button = buttons1->__get(_g);
HXDLIN( 599)								_g = (_g + 1);
HXDLIN( 599)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepadLiteral,(void))

void Controls_obj::removeGamepad(::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_607_removeGamepad)
HXLINE( 608)		{
HXLINE( 608)			int _g = 0;
HXDLIN( 608)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 608)			while((_g < _g1->length)){
HXLINE( 608)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 608)				_g = (_g + 1);
HXLINE( 610)				int i = action->inputs->length;
HXLINE( 611)				while(true){
HXLINE( 611)					i = (i - 1);
HXDLIN( 611)					if (!(((i + 1) > 0))) {
HXLINE( 611)						goto _hx_goto_526;
            					}
HXLINE( 613)					 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 614)					bool _hx_tmp;
HXDLIN( 614)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 614)						if ((deviceID != -1)) {
HXLINE( 614)							_hx_tmp = (input->deviceID == deviceID);
            						}
            						else {
HXLINE( 614)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 614)						_hx_tmp = false;
            					}
HXDLIN( 614)					if (_hx_tmp) {
HXLINE( 615)						action->remove(input,null());
            					}
            				}
            				_hx_goto_526:;
            			}
            		}
HXLINE( 619)		this->gamepadsAdded->remove(deviceID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeGamepad,(void))

void Controls_obj::addDefaultGamepad(int id){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_625_addDefaultGamepad)
HXDLIN( 625)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 625)		_g->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_547,1));
HXDLIN( 625)		_g->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_548,1));
HXDLIN( 625)		_g->set(::Control_obj::UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_549,2));
HXDLIN( 625)		_g->set(::Control_obj::DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_550,2));
HXDLIN( 625)		_g->set(::Control_obj::LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_551,2));
HXDLIN( 625)		_g->set(::Control_obj::RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_552,2));
HXDLIN( 625)		_g->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_553,1));
HXDLIN( 625)		_g->set(::Control_obj::RESET_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_554,1));
HXDLIN( 625)		this->gamepadsAdded->push(id);
HXDLIN( 625)		{
HXDLIN( 625)			::Dynamic map = _g;
HXDLIN( 625)			::Dynamic _g_map = map;
HXDLIN( 625)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 625)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 625)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 625)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 625)				 ::Control _g1_key = key;
HXDLIN( 625)				 ::Control control = _g1_key;
HXDLIN( 625)				::Array< int > buttons = _g1_value;
HXDLIN( 625)				{
HXDLIN( 625)					int id1 = id;
HXDLIN( 625)					::Array< int > buttons1 = buttons;
HXDLIN( 625)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 625)								int state = 1;
HXDLIN( 625)								int _g = 0;
HXDLIN( 625)								while((_g < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g);
HXDLIN( 625)									_g = (_g + 1);
HXDLIN( 625)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 625)								int state1 = 2;
HXDLIN( 625)								int _g1 = 0;
HXDLIN( 625)								while((_g1 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g1);
HXDLIN( 625)									_g1 = (_g1 + 1);
HXDLIN( 625)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 625)								int state2 = -1;
HXDLIN( 625)								int _g2 = 0;
HXDLIN( 625)								while((_g2 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g2);
HXDLIN( 625)									_g2 = (_g2 + 1);
HXDLIN( 625)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 625)								int state = 1;
HXDLIN( 625)								int _g = 0;
HXDLIN( 625)								while((_g < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g);
HXDLIN( 625)									_g = (_g + 1);
HXDLIN( 625)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 625)								int state1 = 2;
HXDLIN( 625)								int _g1 = 0;
HXDLIN( 625)								while((_g1 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g1);
HXDLIN( 625)									_g1 = (_g1 + 1);
HXDLIN( 625)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 625)								int state2 = -1;
HXDLIN( 625)								int _g2 = 0;
HXDLIN( 625)								while((_g2 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g2);
HXDLIN( 625)									_g2 = (_g2 + 1);
HXDLIN( 625)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 625)								int state = 1;
HXDLIN( 625)								int _g = 0;
HXDLIN( 625)								while((_g < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g);
HXDLIN( 625)									_g = (_g + 1);
HXDLIN( 625)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 625)								int state1 = 2;
HXDLIN( 625)								int _g1 = 0;
HXDLIN( 625)								while((_g1 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g1);
HXDLIN( 625)									_g1 = (_g1 + 1);
HXDLIN( 625)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 625)								int state2 = -1;
HXDLIN( 625)								int _g2 = 0;
HXDLIN( 625)								while((_g2 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g2);
HXDLIN( 625)									_g2 = (_g2 + 1);
HXDLIN( 625)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 625)								int state = 1;
HXDLIN( 625)								int _g = 0;
HXDLIN( 625)								while((_g < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g);
HXDLIN( 625)									_g = (_g + 1);
HXDLIN( 625)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 625)								int state1 = 2;
HXDLIN( 625)								int _g1 = 0;
HXDLIN( 625)								while((_g1 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g1);
HXDLIN( 625)									_g1 = (_g1 + 1);
HXDLIN( 625)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 625)							{
HXDLIN( 625)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 625)								int state2 = -1;
HXDLIN( 625)								int _g2 = 0;
HXDLIN( 625)								while((_g2 < buttons1->length)){
HXDLIN( 625)									int button = buttons1->__get(_g2);
HXDLIN( 625)									_g2 = (_g2 + 1);
HXDLIN( 625)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXDLIN( 625)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 625)							int state = 2;
HXDLIN( 625)							int _g = 0;
HXDLIN( 625)							while((_g < buttons1->length)){
HXDLIN( 625)								int button = buttons1->__get(_g);
HXDLIN( 625)								_g = (_g + 1);
HXDLIN( 625)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXDLIN( 625)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 625)							int state = 2;
HXDLIN( 625)							int _g = 0;
HXDLIN( 625)							while((_g < buttons1->length)){
HXDLIN( 625)								int button = buttons1->__get(_g);
HXDLIN( 625)								_g = (_g + 1);
HXDLIN( 625)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXDLIN( 625)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 625)							int state = 2;
HXDLIN( 625)							int _g = 0;
HXDLIN( 625)							while((_g < buttons1->length)){
HXDLIN( 625)								int button = buttons1->__get(_g);
HXDLIN( 625)								_g = (_g + 1);
HXDLIN( 625)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXDLIN( 625)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 625)							int state = 2;
HXDLIN( 625)							int _g = 0;
HXDLIN( 625)							while((_g < buttons1->length)){
HXDLIN( 625)								int button = buttons1->__get(_g);
HXDLIN( 625)								_g = (_g + 1);
HXDLIN( 625)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXDLIN( 625)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 625)							int state = 2;
HXDLIN( 625)							int _g = 0;
HXDLIN( 625)							while((_g < buttons1->length)){
HXDLIN( 625)								int button = buttons1->__get(_g);
HXDLIN( 625)								_g = (_g + 1);
HXDLIN( 625)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,addDefaultGamepad,(void))

void Controls_obj::bindButtons( ::Control control,int id,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_659_bindButtons)
HXDLIN( 659)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 659)					int state = 1;
HXDLIN( 659)					int _g = 0;
HXDLIN( 659)					while((_g < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g);
HXDLIN( 659)						_g = (_g + 1);
HXDLIN( 659)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 659)					int state1 = 2;
HXDLIN( 659)					int _g1 = 0;
HXDLIN( 659)					while((_g1 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g1);
HXDLIN( 659)						_g1 = (_g1 + 1);
HXDLIN( 659)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 659)					int state2 = -1;
HXDLIN( 659)					int _g2 = 0;
HXDLIN( 659)					while((_g2 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g2);
HXDLIN( 659)						_g2 = (_g2 + 1);
HXDLIN( 659)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 659)					int state = 1;
HXDLIN( 659)					int _g = 0;
HXDLIN( 659)					while((_g < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g);
HXDLIN( 659)						_g = (_g + 1);
HXDLIN( 659)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 659)					int state1 = 2;
HXDLIN( 659)					int _g1 = 0;
HXDLIN( 659)					while((_g1 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g1);
HXDLIN( 659)						_g1 = (_g1 + 1);
HXDLIN( 659)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 659)					int state2 = -1;
HXDLIN( 659)					int _g2 = 0;
HXDLIN( 659)					while((_g2 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g2);
HXDLIN( 659)						_g2 = (_g2 + 1);
HXDLIN( 659)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 659)					int state = 1;
HXDLIN( 659)					int _g = 0;
HXDLIN( 659)					while((_g < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g);
HXDLIN( 659)						_g = (_g + 1);
HXDLIN( 659)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 659)					int state1 = 2;
HXDLIN( 659)					int _g1 = 0;
HXDLIN( 659)					while((_g1 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g1);
HXDLIN( 659)						_g1 = (_g1 + 1);
HXDLIN( 659)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 659)					int state2 = -1;
HXDLIN( 659)					int _g2 = 0;
HXDLIN( 659)					while((_g2 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g2);
HXDLIN( 659)						_g2 = (_g2 + 1);
HXDLIN( 659)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 659)					int state = 1;
HXDLIN( 659)					int _g = 0;
HXDLIN( 659)					while((_g < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g);
HXDLIN( 659)						_g = (_g + 1);
HXDLIN( 659)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 659)					int state1 = 2;
HXDLIN( 659)					int _g1 = 0;
HXDLIN( 659)					while((_g1 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g1);
HXDLIN( 659)						_g1 = (_g1 + 1);
HXDLIN( 659)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 659)				{
HXDLIN( 659)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 659)					int state2 = -1;
HXDLIN( 659)					int _g2 = 0;
HXDLIN( 659)					while((_g2 < buttons->length)){
HXDLIN( 659)						int button = buttons->__get(_g2);
HXDLIN( 659)						_g2 = (_g2 + 1);
HXDLIN( 659)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 659)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 659)				int state = 2;
HXDLIN( 659)				int _g = 0;
HXDLIN( 659)				while((_g < buttons->length)){
HXDLIN( 659)					int button = buttons->__get(_g);
HXDLIN( 659)					_g = (_g + 1);
HXDLIN( 659)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 659)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 659)				int state = 2;
HXDLIN( 659)				int _g = 0;
HXDLIN( 659)				while((_g < buttons->length)){
HXDLIN( 659)					int button = buttons->__get(_g);
HXDLIN( 659)					_g = (_g + 1);
HXDLIN( 659)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 659)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 659)				int state = 2;
HXDLIN( 659)				int _g = 0;
HXDLIN( 659)				while((_g < buttons->length)){
HXDLIN( 659)					int button = buttons->__get(_g);
HXDLIN( 659)					_g = (_g + 1);
HXDLIN( 659)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 659)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 659)				int state = 2;
HXDLIN( 659)				int _g = 0;
HXDLIN( 659)				while((_g < buttons->length)){
HXDLIN( 659)					int button = buttons->__get(_g);
HXDLIN( 659)					_g = (_g + 1);
HXDLIN( 659)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 659)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 659)				int state = 2;
HXDLIN( 659)				int _g = 0;
HXDLIN( 659)				while((_g < buttons->length)){
HXDLIN( 659)					int button = buttons->__get(_g);
HXDLIN( 659)					_g = (_g + 1);
HXDLIN( 659)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,bindButtons,(void))

void Controls_obj::unbindButtons( ::Control control,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_672_unbindButtons)
HXDLIN( 672)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_up,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_upP,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)1: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_left,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_leftP,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)2: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_right,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_rightP,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)3: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_down,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_downP,gamepadID,buttons);
HXDLIN( 672)				::Controls_obj::removeButtons(this->_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)4: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_reset,gamepadID,buttons);
            			}
            			break;
            			case (int)5: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_accept,gamepadID,buttons);
            			}
            			break;
            			case (int)6: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_back,gamepadID,buttons);
            			}
            			break;
            			case (int)7: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_pause,gamepadID,buttons);
            			}
            			break;
            			case (int)8: {
HXDLIN( 672)				::Controls_obj::removeButtons(this->_cheat,gamepadID,buttons);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,unbindButtons,(void))

::Array< int > Controls_obj::getInputsFor( ::Control control, ::Device device,::Array< int > list){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_696_getInputsFor)
HXLINE( 697)		if (::hx::IsNull( list )) {
HXLINE( 698)			list = ::Array_obj< int >::__new(0);
            		}
HXLINE( 700)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 703)				int _g = 0;
HXDLIN( 703)				::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 703)				while((_g < _g1->length)){
HXLINE( 703)					 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 703)					_g = (_g + 1);
HXLINE( 705)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 706)						list->push(input->inputID);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 708)				int id = device->_hx_getInt(0);
HXLINE( 709)				{
HXLINE( 709)					int _g = 0;
HXDLIN( 709)					::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 709)					while((_g < _g1->length)){
HXLINE( 709)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 709)						_g = (_g + 1);
HXLINE( 711)						if ((input->deviceID == id)) {
HXLINE( 712)							list->push(input->inputID);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE( 715)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,getInputsFor,return )

void Controls_obj::removeDevice( ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_720_removeDevice)
HXDLIN( 720)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 723)				this->setKeyboardScheme(::KeyboardScheme_obj::None_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 724)				int id = device->_hx_getInt(0);
HXLINE( 725)				this->removeGamepad(id);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeDevice,(void))

void Controls_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_317_init)
HXLINE( 318)		 ::flixel::input::actions::FlxActionManager actions =  ::flixel::input::actions::FlxActionManager_obj::__alloc( HX_CTX );
HXLINE( 319)		::flixel::FlxG_obj::inputs->add_flixel_input_actions_FlxActionManager(actions);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,init,(void))

void Controls_obj::addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_475_addKeys)
HXDLIN( 475)		int _g = 0;
HXDLIN( 475)		while((_g < keys->length)){
HXDLIN( 475)			int key = keys->__get(_g);
HXDLIN( 475)			_g = (_g + 1);
HXLINE( 476)			action->addKey(key,state);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addKeys,(void))

void Controls_obj::removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_480_removeKeys)
HXLINE( 481)		int i = action->inputs->length;
HXLINE( 482)		while(true){
HXLINE( 482)			i = (i - 1);
HXDLIN( 482)			if (!(((i + 1) > 0))) {
HXLINE( 482)				goto _hx_goto_581;
            			}
HXLINE( 484)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 485)			bool _hx_tmp;
HXDLIN( 485)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 485)				_hx_tmp = (keys->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 485)				_hx_tmp = false;
            			}
HXDLIN( 485)			if (_hx_tmp) {
HXLINE( 486)				action->remove(input,null());
            			}
            		}
            		_hx_goto_581:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,removeKeys,(void))

void Controls_obj::addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_680_addButtons)
HXDLIN( 680)		int _g = 0;
HXDLIN( 680)		while((_g < buttons->length)){
HXDLIN( 680)			int button = buttons->__get(_g);
HXDLIN( 680)			_g = (_g + 1);
HXLINE( 681)			action->addGamepad(button,state,id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,addButtons,(void))

void Controls_obj::removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_685_removeButtons)
HXLINE( 686)		int i = action->inputs->length;
HXLINE( 687)		while(true){
HXLINE( 687)			i = (i - 1);
HXDLIN( 687)			if (!(((i + 1) > 0))) {
HXLINE( 687)				goto _hx_goto_585;
            			}
HXLINE( 689)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 690)			bool _hx_tmp;
HXDLIN( 690)			bool _hx_tmp1;
HXDLIN( 690)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 690)				if ((gamepadID != -1)) {
HXLINE( 690)					_hx_tmp1 = (input->deviceID == gamepadID);
            				}
            				else {
HXLINE( 690)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 690)				_hx_tmp1 = false;
            			}
HXDLIN( 690)			if (_hx_tmp1) {
HXLINE( 690)				_hx_tmp = (buttons->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 690)				_hx_tmp = false;
            			}
HXDLIN( 690)			if (_hx_tmp) {
HXLINE( 691)				action->remove(input,null());
            			}
            		}
            		_hx_goto_585:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,removeButtons,(void))

bool Controls_obj::isDevice( ::flixel::input::actions::FlxActionInput input, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_731_isDevice)
HXDLIN( 731)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 733)				return ::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() );
            			}
            			break;
            			case (int)1: {
HXLINE( 734)				int id = device->_hx_getInt(0);
HXDLIN( 734)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 734)					if ((id != -1)) {
HXLINE( 734)						return (input->deviceID == id);
            					}
            					else {
HXLINE( 734)						return true;
            					}
            				}
            				else {
HXLINE( 734)					return false;
            				}
            			}
            			break;
            		}
HXLINE( 731)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isDevice,return )

bool Controls_obj::isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_740_isGamepad)
HXDLIN( 740)		if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXDLIN( 740)			if ((deviceID != -1)) {
HXDLIN( 740)				return (input->deviceID == deviceID);
            			}
            			else {
HXDLIN( 740)				return true;
            			}
            		}
            		else {
HXDLIN( 740)			return false;
            		}
HXDLIN( 740)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isGamepad,return )


::hx::ObjectPtr< Controls_obj > Controls_obj::__new(::String name, ::KeyboardScheme __o_scheme) {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct(name,__o_scheme);
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::KeyboardScheme __o_scheme) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct(name,__o_scheme);
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_upP,"_upP");
	HX_MARK_MEMBER_NAME(_leftP,"_leftP");
	HX_MARK_MEMBER_NAME(_rightP,"_rightP");
	HX_MARK_MEMBER_NAME(_downP,"_downP");
	HX_MARK_MEMBER_NAME(_upR,"_upR");
	HX_MARK_MEMBER_NAME(_leftR,"_leftR");
	HX_MARK_MEMBER_NAME(_rightR,"_rightR");
	HX_MARK_MEMBER_NAME(_downR,"_downR");
	HX_MARK_MEMBER_NAME(_accept,"_accept");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(_cheat,"_cheat");
	HX_MARK_MEMBER_NAME(byName,"byName");
	HX_MARK_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_MARK_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_upP,"_upP");
	HX_VISIT_MEMBER_NAME(_leftP,"_leftP");
	HX_VISIT_MEMBER_NAME(_rightP,"_rightP");
	HX_VISIT_MEMBER_NAME(_downP,"_downP");
	HX_VISIT_MEMBER_NAME(_upR,"_upR");
	HX_VISIT_MEMBER_NAME(_leftR,"_leftR");
	HX_VISIT_MEMBER_NAME(_rightR,"_rightR");
	HX_VISIT_MEMBER_NAME(_downR,"_downR");
	HX_VISIT_MEMBER_NAME(_accept,"_accept");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(_cheat,"_cheat");
	HX_VISIT_MEMBER_NAME(byName,"byName");
	HX_VISIT_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_VISIT_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return ::hx::Val( _up ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { return ::hx::Val( _upP ); }
		if (HX_FIELD_EQ(inName,"_upR") ) { return ::hx::Val( _upR ); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT() ); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_R() ); }
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		if (HX_FIELD_EQ(inName,"CHEAT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_CHEAT() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return ::hx::Val( _right ); }
		if (HX_FIELD_EQ(inName,"_leftP") ) { return ::hx::Val( _leftP ); }
		if (HX_FIELD_EQ(inName,"_downP") ) { return ::hx::Val( _downP ); }
		if (HX_FIELD_EQ(inName,"_leftR") ) { return ::hx::Val( _leftR ); }
		if (HX_FIELD_EQ(inName,"_downR") ) { return ::hx::Val( _downR ); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return ::hx::Val( _reset ); }
		if (HX_FIELD_EQ(inName,"_cheat") ) { return ::hx::Val( _cheat ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName ); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return ::hx::Val( get_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { return ::hx::Val( _rightP ); }
		if (HX_FIELD_EQ(inName,"_rightR") ) { return ::hx::Val( _rightR ); }
		if (HX_FIELD_EQ(inName,"_accept") ) { return ::hx::Val( _accept ); }
		if (HX_FIELD_EQ(inName,"RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_R() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return ::hx::Val( get_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return ::hx::Val( get_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_P") ) { return ::hx::Val( get_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_R") ) { return ::hx::Val( get_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindKeys") ) { return ::hx::Val( bindKeys_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return ::hx::Val( get_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_CHEAT") ) { return ::hx::Val( get_CHEAT_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_LEFT_P") ) { return ::hx::Val( get_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_P") ) { return ::hx::Val( get_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_R") ) { return ::hx::Val( get_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_R") ) { return ::hx::Val( get_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindKeys") ) { return ::hx::Val( unbindKeys_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_RIGHT_P") ) { return ::hx::Val( get_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_R") ) { return ::hx::Val( get_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkByName") ) { return ::hx::Val( checkByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindButtons") ) { return ::hx::Val( bindButtons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"forEachBound") ) { return ::hx::Val( forEachBound_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputsFor") ) { return ::hx::Val( getInputsFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeDevice") ) { return ::hx::Val( removeDevice_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { return ::hx::Val( gamepadsAdded ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindButtons") ) { return ::hx::Val( unbindButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { return ::hx::Val( keyboardScheme ); }
		if (HX_FIELD_EQ(inName,"replaceBinding") ) { return ::hx::Val( replaceBinding_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKeyboard") ) { return ::hx::Val( removeKeyboard_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getDialogueName") ) { return ::hx::Val( getDialogueName_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepadLiteral") ) { return ::hx::Val( addGamepadLiteral_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDefaultGamepad") ) { return ::hx::Val( addDefaultGamepad_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeKeyboardScheme") ) { return ::hx::Val( mergeKeyboardScheme_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getActionFromControl") ) { return ::hx::Val( getActionFromControl_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDialogueNameFromToken") ) { return ::hx::Val( getDialogueNameFromToken_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { outValue = addKeys_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDevice") ) { outValue = isDevice_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGamepad") ) { outValue = isGamepad_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeKeys") ) { outValue = removeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addButtons") ) { outValue = addButtons_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeButtons") ) { outValue = removeButtons_dyn(); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { _upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upR") ) { _upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftP") ) { _leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downP") ) { _downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftR") ) { _leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downR") ) { _downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cheat") ) { _cheat=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byName") ) { byName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { _rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightR") ) { _rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accept") ) { _accept=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { gamepadsAdded=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { keyboardScheme=inValue.Cast<  ::KeyboardScheme >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_up",7a,7c,48,00));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("_right",1d,53,4b,e5));
	outFields->push(HX_("_down",41,14,7f,f5));
	outFields->push(HX_("_upP",96,6e,24,3f));
	outFields->push(HX_("_leftP",aa,45,3e,6e));
	outFields->push(HX_("_rightP",93,66,9d,bc));
	outFields->push(HX_("_downP",ef,a4,b2,d9));
	outFields->push(HX_("_upR",98,6e,24,3f));
	outFields->push(HX_("_leftR",ac,45,3e,6e));
	outFields->push(HX_("_rightR",95,66,9d,bc));
	outFields->push(HX_("_downR",f1,a4,b2,d9));
	outFields->push(HX_("_accept",a7,a4,7d,79));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_reset",10,91,af,e2));
	outFields->push(HX_("_cheat",54,de,9d,41));
	outFields->push(HX_("byName",c2,2b,4e,0e));
	outFields->push(HX_("gamepadsAdded",ae,52,a9,94));
	outFields->push(HX_("keyboardScheme",2c,c8,f4,c5));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("UP_P",2c,2a,6c,38));
	outFields->push(HX_("LEFT_P",d8,72,4a,4c));
	outFields->push(HX_("RIGHT_P",cd,fd,37,93));
	outFields->push(HX_("DOWN_P",f3,6f,a9,e6));
	outFields->push(HX_("UP_R",2e,2a,6c,38));
	outFields->push(HX_("LEFT_R",da,72,4a,4c));
	outFields->push(HX_("RIGHT_R",cf,fd,37,93));
	outFields->push(HX_("DOWN_R",f5,6f,a9,e6));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	outFields->push(HX_("CHEAT",f3,ce,a4,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_up),HX_("_up",7a,7c,48,00)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_right),HX_("_right",1d,53,4b,e5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_down),HX_("_down",41,14,7f,f5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upP),HX_("_upP",96,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftP),HX_("_leftP",aa,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightP),HX_("_rightP",93,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downP),HX_("_downP",ef,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upR),HX_("_upR",98,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftR),HX_("_leftR",ac,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightR),HX_("_rightR",95,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downR),HX_("_downR",f1,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_accept),HX_("_accept",a7,a4,7d,79)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_reset),HX_("_reset",10,91,af,e2)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_cheat),HX_("_cheat",54,de,9d,41)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,byName),HX_("byName",c2,2b,4e,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Controls_obj,gamepadsAdded),HX_("gamepadsAdded",ae,52,a9,94)},
	{::hx::fsObject /*  ::KeyboardScheme */ ,(int)offsetof(Controls_obj,keyboardScheme),HX_("keyboardScheme",2c,c8,f4,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Controls_obj_sStaticStorageInfo = 0;
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("_up",7a,7c,48,00),
	HX_("_left",e6,23,c1,fa),
	HX_("_right",1d,53,4b,e5),
	HX_("_down",41,14,7f,f5),
	HX_("_upP",96,6e,24,3f),
	HX_("_leftP",aa,45,3e,6e),
	HX_("_rightP",93,66,9d,bc),
	HX_("_downP",ef,a4,b2,d9),
	HX_("_upR",98,6e,24,3f),
	HX_("_leftR",ac,45,3e,6e),
	HX_("_rightR",95,66,9d,bc),
	HX_("_downR",f1,a4,b2,d9),
	HX_("_accept",a7,a4,7d,79),
	HX_("_back",06,f6,21,f4),
	HX_("_pause",37,1e,3f,b9),
	HX_("_reset",10,91,af,e2),
	HX_("_cheat",54,de,9d,41),
	HX_("byName",c2,2b,4e,0e),
	HX_("gamepadsAdded",ae,52,a9,94),
	HX_("keyboardScheme",2c,c8,f4,c5),
	HX_("get_UP",a4,e1,2f,a3),
	HX_("get_LEFT",90,8b,2b,b2),
	HX_("get_RIGHT",13,a0,fb,aa),
	HX_("get_DOWN",eb,7b,e9,ac),
	HX_("get_UP_P",b5,e5,26,b8),
	HX_("get_LEFT_P",a1,e2,d1,3c),
	HX_("get_RIGHT_P",e4,5d,32,19),
	HX_("get_DOWN_P",bc,df,30,d7),
	HX_("get_UP_R",b7,e5,26,b8),
	HX_("get_LEFT_R",a3,e2,d1,3c),
	HX_("get_RIGHT_R",e6,5d,32,19),
	HX_("get_DOWN_R",be,df,30,d7),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("get_CHEAT",4a,2b,4e,07),
	HX_("update",09,86,05,87),
	HX_("checkByName",aa,fe,5f,f0),
	HX_("getDialogueName",39,8d,0f,32),
	HX_("getDialogueNameFromToken",b6,d0,32,d3),
	HX_("getActionFromControl",87,31,3f,3d),
	HX_("forEachBound",34,ae,22,2f),
	HX_("replaceBinding",71,99,ae,a4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("mergeKeyboardScheme",04,51,83,14),
	HX_("bindKeys",51,26,d1,b4),
	HX_("unbindKeys",aa,0d,95,3a),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	HX_("removeKeyboard",0b,f9,7f,32),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addGamepadLiteral",cf,54,ef,a8),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("addDefaultGamepad",e1,d7,98,02),
	HX_("bindButtons",04,66,e6,c6),
	HX_("unbindButtons",4b,dc,20,e8),
	HX_("getInputsFor",ea,35,e1,37),
	HX_("removeDevice",fa,77,a5,e0),
	::String(null()) };

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("addKeys",b5,24,44,83),
	HX_("removeKeys",58,1c,26,c4),
	HX_("addButtons",20,7e,ff,31),
	HX_("removeButtons",5d,ae,2f,a3),
	HX_("isDevice",20,78,e1,c9),
	HX_("isGamepad",d7,5d,84,8d),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

