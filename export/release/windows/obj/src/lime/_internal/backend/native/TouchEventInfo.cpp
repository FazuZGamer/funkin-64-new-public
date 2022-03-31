#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_TouchEventInfo
#include <lime/_internal/backend/native/TouchEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc6fd8f0bbdab31a_893_new,"lime._internal.backend.native.TouchEventInfo","new",0xc006dded,"lime._internal.backend.native.TouchEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",893,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_dc6fd8f0bbdab31a_906_clone,"lime._internal.backend.native.TouchEventInfo","clone",0xa51e5e2a,"lime._internal.backend.native.TouchEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",906,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void TouchEventInfo_obj::__construct( ::Dynamic type,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_pressure,::hx::Null< int >  __o_device){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		int id = __o_id.Default(0);
            		Float dx = __o_dx.Default(0);
            		Float dy = __o_dy.Default(0);
            		Float pressure = __o_pressure.Default(0);
            		int device = __o_device.Default(0);
            	HX_STACKFRAME(&_hx_pos_dc6fd8f0bbdab31a_893_new)
HXLINE( 894)		this->type = ( (int)(type) );
HXLINE( 895)		this->x = x;
HXLINE( 896)		this->y = y;
HXLINE( 897)		this->id = id;
HXLINE( 898)		this->dx = dx;
HXLINE( 899)		this->dy = dy;
HXLINE( 900)		this->pressure = pressure;
HXLINE( 901)		this->device = device;
            	}

Dynamic TouchEventInfo_obj::__CreateEmpty() { return new TouchEventInfo_obj; }

void *TouchEventInfo_obj::_hx_vtable = 0;

Dynamic TouchEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TouchEventInfo_obj > _hx_result = new TouchEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool TouchEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5438f135;
}

 ::lime::_internal::backend::native::TouchEventInfo TouchEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_dc6fd8f0bbdab31a_906_clone)
HXDLIN( 906)		return  ::lime::_internal::backend::native::TouchEventInfo_obj::__alloc( HX_CTX ,this->type,this->x,this->y,this->id,this->dx,this->dy,this->pressure,this->device);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TouchEventInfo_obj,clone,return )


TouchEventInfo_obj::TouchEventInfo_obj()
{
}

::hx::Val TouchEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return ::hx::Val( pressure ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TouchEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("pressure",c5,ab,1d,70));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TouchEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TouchEventInfo_obj,device),HX_("device",96,dc,77,71)},
	{::hx::fsFloat,(int)offsetof(TouchEventInfo_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsFloat,(int)offsetof(TouchEventInfo_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsInt,(int)offsetof(TouchEventInfo_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(TouchEventInfo_obj,pressure),HX_("pressure",c5,ab,1d,70)},
	{::hx::fsInt,(int)offsetof(TouchEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(TouchEventInfo_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TouchEventInfo_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TouchEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String TouchEventInfo_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("id",db,5b,00,00),
	HX_("pressure",c5,ab,1d,70),
	HX_("type",ba,f2,08,4d),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class TouchEventInfo_obj::__mClass;

void TouchEventInfo_obj::__register()
{
	TouchEventInfo_obj _hx_dummy;
	TouchEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.TouchEventInfo",7b,63,94,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TouchEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TouchEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
