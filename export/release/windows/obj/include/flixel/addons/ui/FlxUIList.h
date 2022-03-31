#ifndef INCLUDED_flixel_addons_ui_FlxUIList
#define INCLUDED_flixel_addons_ui_FlxUIList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIList)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIList_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIList_obj OBJ_;
		FlxUIList_obj();

	public:
		enum { _hx_ClassId = 0x7ebfc95d };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> Widgets,::hx::Null< Float >  __o_W,::hx::Null< Float >  __o_H,::String __o_MoreString, ::Dynamic __o_Stacking, ::Dynamic __o_Spacing, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIList"); }
		static ::hx::ObjectPtr< FlxUIList_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> Widgets,::hx::Null< Float >  __o_W,::hx::Null< Float >  __o_H,::String __o_MoreString, ::Dynamic __o_Stacking, ::Dynamic __o_Spacing, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton);
		static ::hx::ObjectPtr< FlxUIList_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> Widgets,::hx::Null< Float >  __o_W,::hx::Null< Float >  __o_H,::String __o_MoreString, ::Dynamic __o_Stacking, ::Dynamic __o_Spacing, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxUIList",a4,d2,7c,84); }

		static void __boot();
		static int STACK_HORIZONTAL;
		static int STACK_VERTICAL;
		int scrollIndex;
		int set_scrollIndex(int i);
		::Dynamic set_scrollIndex_dyn();

		int stacking;
		int set_stacking(int Stacking);
		::Dynamic set_stacking_dyn();

		Float spacing;
		Float set_spacing(Float Spacing);
		::Dynamic set_spacing_dyn();

		 ::flixel::math::FlxPoint prevButtonOffset;
		 ::flixel::math::FlxPoint nextButtonOffset;
		::Dynamic prevButton;
		::Dynamic nextButton;
		::String moreString;
		::String set_moreString(::String str);
		::Dynamic set_moreString_dyn();

		int amountPrevious;
		int amountNext;
		void destroy();

		void setSize(Float W,Float H);

		 ::Dynamic add( ::Dynamic _tmp_Object);

		 ::flixel::FlxSprite safeAdd( ::flixel::FlxSprite Object);
		::Dynamic safeAdd_dyn();

		bool _skipRefresh;
		::String getMoreString(int i);
		::Dynamic getMoreString_dyn();

		bool set_visible(bool Value);

		void onClick(int i);
		::Dynamic onClick_dyn();

		void refreshList();
		::Dynamic refreshList_dyn();

		Float get_width();

		Float get_height();

		Float set_width(Float W);

		Float set_height(Float H);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIList */ 
