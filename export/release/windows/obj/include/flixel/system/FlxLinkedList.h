#ifndef INCLUDED_flixel_system_FlxLinkedList
#define INCLUDED_flixel_system_FlxLinkedList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxLinkedList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxLinkedList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxLinkedList_obj OBJ_;
		FlxLinkedList_obj();

	public:
		enum { _hx_ClassId = 0x7f1bcf5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxLinkedList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.FlxLinkedList"); }
		static ::hx::ObjectPtr< FlxLinkedList_obj > __new();
		static ::hx::ObjectPtr< FlxLinkedList_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxLinkedList_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxLinkedList",c9,e6,95,f0); }

		static void __boot();
		static int _NUM_CACHED_FLX_LIST;
		static  ::flixel::_hx_system::FlxLinkedList _cachedListsHead;
		static  ::flixel::_hx_system::FlxLinkedList recycle();
		static ::Dynamic recycle_dyn();

		static void clearCache();
		static ::Dynamic clearCache_dyn();

		 ::flixel::FlxObject object;
		 ::flixel::_hx_system::FlxLinkedList next;
		bool exists;
		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxLinkedList */ 
