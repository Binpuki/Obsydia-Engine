#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_16_difficultyString,"CoolUtil","difficultyString",0x7da345af,"CoolUtil.difficultyString","CoolUtil.hx",16,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_20_coolTextFile,"CoolUtil","coolTextFile",0xa6086875,"CoolUtil.coolTextFile","CoolUtil.hx",20,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_32_numberArray,"CoolUtil","numberArray",0x9e0008ad,"CoolUtil.numberArray","CoolUtil.hx",32,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_42_fromKeyCodeToFlxKey,"CoolUtil","fromKeyCodeToFlxKey",0xa2fc7c07,"CoolUtil.fromKeyCodeToFlxKey","CoolUtil.hx",42,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_145_fromKeyModifierToFlxKey,"CoolUtil","fromKeyModifierToFlxKey",0x78ba1131,"CoolUtil.fromKeyModifierToFlxKey","CoolUtil.hx",145,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_12_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",12,0x9f143813)
static const ::String _hx_array_data_c96d938b_8[] = {
	HX_("EASY",02,54,cd,2d),HX_("NORMAL",27,1e,ec,e2),HX_("HARD",eb,f6,c8,2f),
};

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24fe864b;
}

::Array< ::String > CoolUtil_obj::difficultyArray;

::String CoolUtil_obj::difficultyString(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_16_difficultyString)
HXDLIN(  16)		return ::CoolUtil_obj::difficultyArray->__get(::PlayState_obj::storyDifficulty);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,difficultyString,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_20_coolTextFile)
HXLINE(  21)		::Array< ::String > daList = ::StringTools_obj::trim(::lime::utils::Assets_obj::getText(path)).split(HX_("\n",0a,00,00,00));
HXLINE(  23)		{
HXLINE(  23)			int _g = 0;
HXDLIN(  23)			int _g1 = daList->length;
HXDLIN(  23)			while((_g < _g1)){
HXLINE(  23)				_g = (_g + 1);
HXDLIN(  23)				int i = (_g - 1);
HXLINE(  25)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  28)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_32_numberArray)
HXLINE(  33)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE(  34)		{
HXLINE(  34)			int _g = ( (int)(min) );
HXDLIN(  34)			int _g1 = max;
HXDLIN(  34)			while((_g < _g1)){
HXLINE(  34)				_g = (_g + 1);
HXDLIN(  34)				int i = (_g - 1);
HXLINE(  36)				dumbArray->push(i);
            			}
            		}
HXLINE(  38)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

int CoolUtil_obj::fromKeyCodeToFlxKey(int key,int poop){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_42_fromKeyCodeToFlxKey)
HXLINE(  43)		int daKey = -1;
HXLINE(  45)		switch((int)(key)){
            			case (int)0: {
HXLINE(  47)				daKey = -1;
            			}
            			break;
            			case (int)8: {
HXLINE(  93)				daKey = 8;
            			}
            			break;
            			case (int)9: {
HXLINE( 110)				daKey = 9;
            			}
            			break;
            			case (int)13: {
HXLINE( 100)				daKey = 13;
            			}
            			break;
            			case (int)27: {
HXLINE(  89)				daKey = 27;
            			}
            			break;
            			case (int)32: {
HXLINE( 105)				daKey = 32;
            			}
            			break;
            			case (int)34: {
HXLINE(  99)				daKey = 222;
            			}
            			break;
            			case (int)43: {
HXLINE(  91)				daKey = 187;
            			}
            			break;
            			case (int)44: {
HXLINE( 101)				daKey = 188;
            			}
            			break;
            			case (int)45: {
HXLINE(  90)				daKey = 189;
            			}
            			break;
            			case (int)46: {
HXLINE( 102)				daKey = 190;
            			}
            			break;
            			case (int)47: {
HXLINE( 103)				daKey = 191;
            			}
            			break;
            			case (int)48: {
HXLINE(  74)				daKey = 48;
            			}
            			break;
            			case (int)49: {
HXLINE(  75)				daKey = 49;
            			}
            			break;
            			case (int)50: {
HXLINE(  76)				daKey = 50;
            			}
            			break;
            			case (int)51: {
HXLINE(  77)				daKey = 51;
            			}
            			break;
            			case (int)52: {
HXLINE(  78)				daKey = 52;
            			}
            			break;
            			case (int)53: {
HXLINE(  79)				daKey = 53;
            			}
            			break;
            			case (int)54: {
HXLINE(  80)				daKey = 54;
            			}
            			break;
            			case (int)55: {
HXLINE(  81)				daKey = 55;
            			}
            			break;
            			case (int)56: {
HXLINE(  82)				daKey = 56;
            			}
            			break;
            			case (int)57: {
HXLINE(  83)				daKey = 57;
            			}
            			break;
            			case (int)59: {
HXLINE(  98)				daKey = 186;
            			}
            			break;
            			case (int)91: {
HXLINE(  94)				daKey = 219;
            			}
            			break;
            			case (int)92: {
HXLINE(  96)				daKey = 220;
            			}
            			break;
            			case (int)93: {
HXLINE(  95)				daKey = 221;
            			}
            			break;
            			case (int)96: {
HXLINE( 104)				daKey = 192;
            			}
            			break;
            			case (int)97: {
HXLINE(  48)				daKey = 65;
            			}
            			break;
            			case (int)98: {
HXLINE(  49)				daKey = 66;
            			}
            			break;
            			case (int)99: {
HXLINE(  50)				daKey = 67;
            			}
            			break;
            			case (int)100: {
HXLINE(  51)				daKey = 68;
            			}
            			break;
            			case (int)101: {
HXLINE(  52)				daKey = 69;
            			}
            			break;
            			case (int)102: {
HXLINE(  53)				daKey = 70;
            			}
            			break;
            			case (int)103: {
HXLINE(  54)				daKey = 71;
            			}
            			break;
            			case (int)104: {
HXLINE(  55)				daKey = 72;
            			}
            			break;
            			case (int)105: {
HXLINE(  56)				daKey = 73;
            			}
            			break;
            			case (int)106: {
HXLINE(  57)				daKey = 74;
            			}
            			break;
            			case (int)107: {
HXLINE(  58)				daKey = 75;
            			}
            			break;
            			case (int)108: {
HXLINE(  59)				daKey = 76;
            			}
            			break;
            			case (int)109: {
HXLINE(  60)				daKey = 77;
            			}
            			break;
            			case (int)110: {
HXLINE(  61)				daKey = 78;
            			}
            			break;
            			case (int)111: {
HXLINE(  62)				daKey = 79;
            			}
            			break;
            			case (int)112: {
HXLINE(  63)				daKey = 80;
            			}
            			break;
            			case (int)113: {
HXLINE(  64)				daKey = 81;
            			}
            			break;
            			case (int)114: {
HXLINE(  65)				daKey = 82;
            			}
            			break;
            			case (int)115: {
HXLINE(  66)				daKey = 83;
            			}
            			break;
            			case (int)116: {
HXLINE(  67)				daKey = 84;
            			}
            			break;
            			case (int)117: {
HXLINE(  68)				daKey = 85;
            			}
            			break;
            			case (int)118: {
HXLINE(  69)				daKey = 86;
            			}
            			break;
            			case (int)119: {
HXLINE(  70)				daKey = 87;
            			}
            			break;
            			case (int)120: {
HXLINE(  71)				daKey = 88;
            			}
            			break;
            			case (int)121: {
HXLINE(  72)				daKey = 89;
            			}
            			break;
            			case (int)122: {
HXLINE(  73)				daKey = 90;
            			}
            			break;
            			case (int)127: {
HXLINE(  92)				daKey = 46;
            			}
            			break;
            			case (int)1073741881: {
HXLINE(  97)				daKey = 20;
            			}
            			break;
            			case (int)1073741882: {
HXLINE( 112)				daKey = 112;
            			}
            			break;
            			case (int)1073741883: {
HXLINE( 113)				daKey = 113;
            			}
            			break;
            			case (int)1073741884: {
HXLINE( 114)				daKey = 114;
            			}
            			break;
            			case (int)1073741885: {
HXLINE( 115)				daKey = 115;
            			}
            			break;
            			case (int)1073741886: {
HXLINE( 116)				daKey = 116;
            			}
            			break;
            			case (int)1073741887: {
HXLINE( 117)				daKey = 117;
            			}
            			break;
            			case (int)1073741888: {
HXLINE( 118)				daKey = 118;
            			}
            			break;
            			case (int)1073741889: {
HXLINE( 119)				daKey = 119;
            			}
            			break;
            			case (int)1073741890: {
HXLINE( 120)				daKey = 120;
            			}
            			break;
            			case (int)1073741891: {
HXLINE( 121)				daKey = 121;
            			}
            			break;
            			case (int)1073741892: {
HXLINE( 122)				daKey = 122;
            			}
            			break;
            			case (int)1073741893: {
HXLINE( 123)				daKey = 123;
            			}
            			break;
            			case (int)1073741894: {
HXLINE( 111)				daKey = 301;
            			}
            			break;
            			case (int)1073741897: {
HXLINE(  88)				daKey = 45;
            			}
            			break;
            			case (int)1073741898: {
HXLINE(  86)				daKey = 36;
            			}
            			break;
            			case (int)1073741899: {
HXLINE(  84)				daKey = 33;
            			}
            			break;
            			case (int)1073741901: {
HXLINE(  87)				daKey = 35;
            			}
            			break;
            			case (int)1073741902: {
HXLINE(  85)				daKey = 34;
            			}
            			break;
            			case (int)1073741903: {
HXLINE( 109)				daKey = 39;
            			}
            			break;
            			case (int)1073741904: {
HXLINE( 108)				daKey = 37;
            			}
            			break;
            			case (int)1073741905: {
HXLINE( 107)				daKey = 40;
            			}
            			break;
            			case (int)1073741906: {
HXLINE( 106)				daKey = 38;
            			}
            			break;
            			case (int)1073741909: {
HXLINE( 137)				daKey = 106;
            			}
            			break;
            			case (int)1073741910: {
HXLINE( 134)				daKey = 109;
            			}
            			break;
            			case (int)1073741911: {
HXLINE( 135)				daKey = 107;
            			}
            			break;
            			case (int)1073741913: {
HXLINE( 125)				daKey = 97;
            			}
            			break;
            			case (int)1073741914: {
HXLINE( 126)				daKey = 98;
            			}
            			break;
            			case (int)1073741915: {
HXLINE( 127)				daKey = 99;
            			}
            			break;
            			case (int)1073741916: {
HXLINE( 128)				daKey = 100;
            			}
            			break;
            			case (int)1073741917: {
HXLINE( 129)				daKey = 101;
            			}
            			break;
            			case (int)1073741918: {
HXLINE( 130)				daKey = 102;
            			}
            			break;
            			case (int)1073741919: {
HXLINE( 131)				daKey = 103;
            			}
            			break;
            			case (int)1073741920: {
HXLINE( 132)				daKey = 104;
            			}
            			break;
            			case (int)1073741921: {
HXLINE( 133)				daKey = 105;
            			}
            			break;
            			case (int)1073741922: {
HXLINE( 124)				daKey = 96;
            			}
            			break;
            			case (int)1073741923: {
HXLINE( 136)				daKey = 110;
            			}
            			break;
            			default:{
HXLINE( 138)				daKey = ::CoolUtil_obj::fromKeyModifierToFlxKey(poop);
            			}
            		}
HXLINE( 141)		return daKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,fromKeyCodeToFlxKey,return )

int CoolUtil_obj::fromKeyModifierToFlxKey(int poop){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_145_fromKeyModifierToFlxKey)
HXLINE( 146)		if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(poop)) {
HXLINE( 146)			return 16;
            		}
HXLINE( 147)		if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(poop)) {
HXLINE( 147)			return 17;
            		}
HXLINE( 148)		if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(poop)) {
HXLINE( 148)			return 18;
            		}
HXLINE( 150)		return -1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,fromKeyModifierToFlxKey,return )


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"difficultyArray") ) { outValue = ( difficultyArray ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"difficultyString") ) { outValue = difficultyString_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromKeyCodeToFlxKey") ) { outValue = fromKeyCodeToFlxKey_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"fromKeyModifierToFlxKey") ) { outValue = fromKeyModifierToFlxKey_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"difficultyArray") ) { difficultyArray=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::difficultyArray,HX_("difficultyArray",5e,19,a2,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::difficultyArray,"difficultyArray");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::difficultyArray,"difficultyArray");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("difficultyArray",5e,19,a2,bb),
	HX_("difficultyString",6c,c9,73,cb),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("numberArray",10,1e,18,ad),
	HX_("fromKeyCodeToFlxKey",6a,2c,0d,eb),
	HX_("fromKeyModifierToFlxKey",14,2f,8e,8f),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtil",8b,93,6d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_12_boot)
HXDLIN(  12)		difficultyArray = ::Array_obj< ::String >::fromData( _hx_array_data_c96d938b_8,3);
            	}
}

