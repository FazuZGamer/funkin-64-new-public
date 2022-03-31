#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_debug
#define INCLUDED_lime_graphics_opengl_ext_KHR_debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e7ead9e1a8712dad_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,KHR_debug)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES KHR_debug_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KHR_debug_obj OBJ_;
		KHR_debug_obj();

	public:
		enum { _hx_ClassId = 0x2275abff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.KHR_debug")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.KHR_debug"); }

		inline static ::hx::ObjectPtr< KHR_debug_obj > __new() {
			::hx::ObjectPtr< KHR_debug_obj > __this = new KHR_debug_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< KHR_debug_obj > __alloc(::hx::Ctx *_hx_ctx) {
			KHR_debug_obj *__this = (KHR_debug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KHR_debug_obj), false, "lime.graphics.opengl.ext.KHR_debug"));
			*(void **)__this = KHR_debug_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e7ead9e1a8712dad_4_new)
HXLINE(  43)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->STACK_UNDERFLOW = 1284;
HXLINE(  42)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->STACK_OVERFLOW = 1283;
HXLINE(  41)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->CONTEXT_FLAG_DEBUG_BIT = 2;
HXLINE(  40)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_OUTPUT = 37600;
HXLINE(  39)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SEVERITY_LOW = 37192;
HXLINE(  38)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SEVERITY_MEDIUM = 37191;
HXLINE(  37)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SEVERITY_HIGH = 37190;
HXLINE(  36)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_LOGGED_MESSAGES = 37189;
HXLINE(  35)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->MAX_DEBUG_LOGGED_MESSAGES = 37188;
HXLINE(  34)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->MAX_DEBUG_MESSAGE_LENGTH = 37187;
HXLINE(  33)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->MAX_LABEL_LENGTH = 33512;
HXLINE(  32)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->SAMPLER = 33510;
HXLINE(  31)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->QUERY = 33507;
HXLINE(  30)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->PROGRAM = 33506;
HXLINE(  29)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->SHADER = 33505;
HXLINE(  28)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->BUFFER = 33504;
HXLINE(  27)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_GROUP_STACK_DEPTH = 33389;
HXLINE(  26)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->MAX_DEBUG_GROUP_STACK_DEPTH = 33388;
HXLINE(  25)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SEVERITY_NOTIFICATION = 33387;
HXLINE(  24)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_POP_GROUP = 33386;
HXLINE(  23)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_PUSH_GROUP = 33385;
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_MARKER = 33384;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_OTHER = 33361;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_PERFORMANCE = 33360;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_PORTABILITY = 33359;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_UNDEFINED_BEHAVIOR = 33358;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_DEPRECATED_BEHAVIOR = 33357;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_TYPE_ERROR = 33356;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SOURCE_OTHER = 33355;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SOURCE_APPLICATION = 33354;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SOURCE_THIRD_PARTY = 33353;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SOURCE_SHADER_COMPILER = 33352;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SOURCE_WINDOW_SYSTEM = 33351;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_SOURCE_API = 33350;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_CALLBACK_USER_PARAM = 33349;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_CALLBACK_FUNCTION = 33348;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 33347;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::KHR_debug)(__this) )->DEBUG_OUTPUT_SYNCHRONOUS = 33346;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KHR_debug_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KHR_debug",69,7f,d0,07); }

		int DEBUG_OUTPUT_SYNCHRONOUS;
		int DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
		int DEBUG_CALLBACK_FUNCTION;
		int DEBUG_CALLBACK_USER_PARAM;
		int DEBUG_SOURCE_API;
		int DEBUG_SOURCE_WINDOW_SYSTEM;
		int DEBUG_SOURCE_SHADER_COMPILER;
		int DEBUG_SOURCE_THIRD_PARTY;
		int DEBUG_SOURCE_APPLICATION;
		int DEBUG_SOURCE_OTHER;
		int DEBUG_TYPE_ERROR;
		int DEBUG_TYPE_DEPRECATED_BEHAVIOR;
		int DEBUG_TYPE_UNDEFINED_BEHAVIOR;
		int DEBUG_TYPE_PORTABILITY;
		int DEBUG_TYPE_PERFORMANCE;
		int DEBUG_TYPE_OTHER;
		int DEBUG_TYPE_MARKER;
		int DEBUG_TYPE_PUSH_GROUP;
		int DEBUG_TYPE_POP_GROUP;
		int DEBUG_SEVERITY_NOTIFICATION;
		int MAX_DEBUG_GROUP_STACK_DEPTH;
		int DEBUG_GROUP_STACK_DEPTH;
		int BUFFER;
		int SHADER;
		int PROGRAM;
		int QUERY;
		int SAMPLER;
		int MAX_LABEL_LENGTH;
		int MAX_DEBUG_MESSAGE_LENGTH;
		int MAX_DEBUG_LOGGED_MESSAGES;
		int DEBUG_LOGGED_MESSAGES;
		int DEBUG_SEVERITY_HIGH;
		int DEBUG_SEVERITY_MEDIUM;
		int DEBUG_SEVERITY_LOW;
		int DEBUG_OUTPUT;
		int CONTEXT_FLAG_DEBUG_BIT;
		int STACK_OVERFLOW;
		int STACK_UNDERFLOW;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_KHR_debug */ 
