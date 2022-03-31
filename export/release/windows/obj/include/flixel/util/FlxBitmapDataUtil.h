#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#define INCLUDED_flixel_util_FlxBitmapDataUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxBitmapDataUtil)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxBitmapDataUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBitmapDataUtil_obj OBJ_;
		FlxBitmapDataUtil_obj();

	public:
		enum { _hx_ClassId = 0x0ce7d88b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxBitmapDataUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxBitmapDataUtil"); }

		inline static ::hx::ObjectPtr< FlxBitmapDataUtil_obj > __new() {
			::hx::ObjectPtr< FlxBitmapDataUtil_obj > __this = new FlxBitmapDataUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxBitmapDataUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxBitmapDataUtil_obj *__this = (FlxBitmapDataUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBitmapDataUtil_obj), false, "flixel.util.FlxBitmapDataUtil"));
			*(void **)__this = FlxBitmapDataUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBitmapDataUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBitmapDataUtil",4d,46,ad,af); }

		static void __boot();
		static  ::flixel::math::FlxMatrix matrix;
		static void merge( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::display::BitmapData destBitmapData, ::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static ::Dynamic merge_dyn();

		static int mergeColorComponent(int source,int dest,int multiplier);
		static ::Dynamic mergeColorComponent_dyn();

		static  ::Dynamic compare( ::openfl::display::BitmapData Bitmap1, ::openfl::display::BitmapData Bitmap2);
		static ::Dynamic compare_dyn();

		static int getDiff(int value1,int value2);
		static ::Dynamic getDiff_dyn();

		static Float getMemorySize( ::openfl::display::BitmapData bitmapData);
		static ::Dynamic getMemorySize_dyn();

		static ::Array< ::Dynamic> replaceColor( ::openfl::display::BitmapData bitmapData,int color,int newColor,::hx::Null< bool >  fetchPositions, ::flixel::math::FlxRect rect);
		static ::Dynamic replaceColor_dyn();

		static  ::openfl::display::BitmapData addSpacesAndBorders( ::openfl::display::BitmapData bitmapData, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border, ::flixel::math::FlxRect region);
		static ::Dynamic addSpacesAndBorders_dyn();

		static  ::openfl::display::BitmapData copyBorderPixels( ::openfl::display::BitmapData bitmapData,int frameWidth,int frameHeight,int spaceX,int spaceY,int borderX,int borderY,int horizontalFrames,int verticalFrames);
		static ::Dynamic copyBorderPixels_dyn();

		static  ::openfl::display::BitmapData generateRotations( ::openfl::display::BitmapData brush,::hx::Null< int >  rotations,::hx::Null< bool >  antiAliasing,::hx::Null< bool >  autoBuffer);
		static ::Dynamic generateRotations_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapDataUtil */ 
