#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#define INCLUDED_flixel_addons_ui_interfaces_IEventGetter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IEventGetter_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_getEvent)(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params); 
		static inline void getEvent( ::Dynamic _hx_,::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IEventGetter_obj *>(_hx_.mPtr->_hx_getInterface(0xdcf9e4f9)))->_hx_getEvent)(name,sender,data,params);
		}
		 ::Dynamic (::hx::Object :: *_hx_getRequest)(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params); 
		static inline  ::Dynamic getRequest( ::Dynamic _hx_,::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IEventGetter_obj *>(_hx_.mPtr->_hx_getInterface(0xdcf9e4f9)))->_hx_getRequest)(name,sender,data,params);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IEventGetter */ 
