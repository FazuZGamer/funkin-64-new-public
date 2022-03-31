#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICursor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltipManager)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IFlxUIState_obj {
	public:
		typedef  ::flixel::addons::ui::interfaces::IEventGetter_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_getEvent)(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params); 
		static inline void getEvent( ::Dynamic _hx_,::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIState_obj *>(_hx_.mPtr->_hx_getInterface(0x0bdac137)))->_hx_getEvent)(name,sender,data,params);
		}
		 ::Dynamic (::hx::Object :: *_hx_getRequest)(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params); 
		static inline  ::Dynamic getRequest( ::Dynamic _hx_,::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIState_obj *>(_hx_.mPtr->_hx_getInterface(0x0bdac137)))->_hx_getRequest)(name,sender,data,params);
		}
		void (::hx::Object :: *_hx_forceFocus)(bool b,::Dynamic thing); 
		static inline void forceFocus( ::Dynamic _hx_,bool b,::Dynamic thing) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIState_obj *>(_hx_.mPtr->_hx_getInterface(0x0bdac137)))->_hx_forceFocus)(b,thing);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIState */ 
