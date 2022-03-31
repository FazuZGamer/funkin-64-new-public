#ifndef INCLUDED_lime_ui_Joystick
#define INCLUDED_lime_ui_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Float_Float_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Float_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_lime_ui_JoystickHatPosition_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_Joystick_Void)
HX_DECLARE_CLASS2(lime,ui,Joystick)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Joystick_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();

	public:
		enum { _hx_ClassId = 0x08824e45 };

		void __construct(int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.ui.Joystick")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.ui.Joystick"); }
		static ::hx::ObjectPtr< Joystick_obj > __new(int id);
		static ::hx::ObjectPtr< Joystick_obj > __alloc(::hx::Ctx *_hx_ctx,int id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Joystick_obj();

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
		::String __ToString() const { return HX_("Joystick",dc,9c,a3,75); }

		static void __boot();
		static  ::haxe::ds::IntMap devices;
		static  ::lime::app::_Event_lime_ui_Joystick_Void onConnect;
		static void _hx___connect(int id);
		static ::Dynamic _hx___connect_dyn();

		static void _hx___disconnect(int id);
		static ::Dynamic _hx___disconnect_dyn();

		bool connected;
		int id;
		 ::lime::app::_Event_Int_Float_Void onAxisMove;
		 ::lime::app::_Event_Int_Void onButtonDown;
		 ::lime::app::_Event_Int_Void onButtonUp;
		 ::lime::app::_Event_Void_Void onDisconnect;
		 ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void onHatMove;
		 ::lime::app::_Event_Int_Float_Float_Void onTrackballMove;
		::String get_guid();
		::Dynamic get_guid_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		int get_numAxes();
		::Dynamic get_numAxes_dyn();

		int get_numButtons();
		::Dynamic get_numButtons_dyn();

		int get_numHats();
		::Dynamic get_numHats_dyn();

		int get_numTrackballs();
		::Dynamic get_numTrackballs_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Joystick */ 
