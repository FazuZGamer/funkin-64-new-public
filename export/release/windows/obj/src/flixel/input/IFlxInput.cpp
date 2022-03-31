#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif

namespace flixel{
namespace input{


static ::String IFlxInput_obj_sMemberFields[] = {
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_justPressed",6d,c5,88,b3),
	::String(null()) };

::hx::Class IFlxInput_obj::__mClass;

void IFlxInput_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.IFlxInput",2b,5c,36,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x52baf533 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
