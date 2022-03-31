#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_27__new,"lime.math._Matrix4.Matrix4_Impl_","_new",0x84b003e9,"lime.math._Matrix4.Matrix4_Impl_._new","lime/math/Matrix4.hx",27,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_44_append,"lime.math._Matrix4.Matrix4_Impl_","append",0x0e638262,"lime.math._Matrix4.Matrix4_Impl_.append","lime/math/Matrix4.hx",44,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_106_appendRotation,"lime.math._Matrix4.Matrix4_Impl_","appendRotation",0xe357adc0,"lime.math._Matrix4.Matrix4_Impl_.appendRotation","lime/math/Matrix4.hx",106,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_126_appendScale,"lime.math._Matrix4.Matrix4_Impl_","appendScale",0x8a9ad8c8,"lime.math._Matrix4.Matrix4_Impl_.appendScale","lime/math/Matrix4.hx",126,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_138_appendTranslation,"lime.math._Matrix4.Matrix4_Impl_","appendTranslation",0xe6447daf,"lime.math._Matrix4.Matrix4_Impl_.appendTranslation","lime/math/Matrix4.hx",138,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_150_clone,"lime.math._Matrix4.Matrix4_Impl_","clone",0xe1a2dbd5,"lime.math._Matrix4.Matrix4_Impl_.clone","lime/math/Matrix4.hx",150,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_160_copyColumnFrom,"lime.math._Matrix4.Matrix4_Impl_","copyColumnFrom",0x5224fffd,"lime.math._Matrix4.Matrix4_Impl_.copyColumnFrom","lime/math/Matrix4.hx",160,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_198_copyColumnTo,"lime.math._Matrix4.Matrix4_Impl_","copyColumnTo",0xcc64e54e,"lime.math._Matrix4.Matrix4_Impl_.copyColumnTo","lime/math/Matrix4.hx",198,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_235_copyFrom,"lime.math._Matrix4.Matrix4_Impl_","copyFrom",0xc27fde47,"lime.math._Matrix4.Matrix4_Impl_.copyFrom","lime/math/Matrix4.hx",235,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_245_copyRowFrom,"lime.math._Matrix4.Matrix4_Impl_","copyRowFrom",0xc4e0b7e7,"lime.math._Matrix4.Matrix4_Impl_.copyRowFrom","lime/math/Matrix4.hx",245,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_283_copyRowTo,"lime.math._Matrix4.Matrix4_Impl_","copyRowTo",0x543beeb8,"lime.math._Matrix4.Matrix4_Impl_.copyRowTo","lime/math/Matrix4.hx",283,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_324_create2D,"lime.math._Matrix4.Matrix4_Impl_","create2D",0x26131c56,"lime.math._Matrix4.Matrix4_Impl_.create2D","lime/math/Matrix4.hx",324,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_356_createOrtho,"lime.math._Matrix4.Matrix4_Impl_","createOrtho",0x33fdc114,"lime.math._Matrix4.Matrix4_Impl_.createOrtho","lime/math/Matrix4.hx",356,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_486_deltaTransformVector,"lime.math._Matrix4.Matrix4_Impl_","deltaTransformVector",0x66f080bf,"lime.math._Matrix4.Matrix4_Impl_.deltaTransformVector","lime/math/Matrix4.hx",486,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_496_fromMatrix3,"lime.math._Matrix4.Matrix4_Impl_","fromMatrix3",0x00fd1900,"lime.math._Matrix4.Matrix4_Impl_.fromMatrix3","lime/math/Matrix4.hx",496,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_506_identity,"lime.math._Matrix4.Matrix4_Impl_","identity",0xb34e17c6,"lime.math._Matrix4.Matrix4_Impl_.identity","lime/math/Matrix4.hx",506,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_534_interpolate,"lime.math._Matrix4.Matrix4_Impl_","interpolate",0xf4884739,"lime.math._Matrix4.Matrix4_Impl_.interpolate","lime/math/Matrix4.hx",534,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_552_interpolateTo,"lime.math._Matrix4.Matrix4_Impl_","interpolateTo",0x5c939114,"lime.math._Matrix4.Matrix4_Impl_.interpolateTo","lime/math/Matrix4.hx",552,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_563_invert,"lime.math._Matrix4.Matrix4_Impl_","invert",0x1e68879e,"lime.math._Matrix4.Matrix4_Impl_.invert","lime/math/Matrix4.hx",563,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_616_pointAt,"lime.math._Matrix4.Matrix4_Impl_","pointAt",0x903e77db,"lime.math._Matrix4.Matrix4_Impl_.pointAt","lime/math/Matrix4.hx",616,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_683_prepend,"lime.math._Matrix4.Matrix4_Impl_","prepend",0x76fd6d86,"lime.math._Matrix4.Matrix4_Impl_.prepend","lime/math/Matrix4.hx",683,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_745_prependRotation,"lime.math._Matrix4.Matrix4_Impl_","prependRotation",0x52475ce4,"lime.math._Matrix4.Matrix4_Impl_.prependRotation","lime/math/Matrix4.hx",745,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_765_prependScale,"lime.math._Matrix4.Matrix4_Impl_","prependScale",0x9a060b24,"lime.math._Matrix4.Matrix4_Impl_.prependScale","lime/math/Matrix4.hx",765,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_777_prependTranslation,"lime.math._Matrix4.Matrix4_Impl_","prependTranslation",0xfad7dd0b,"lime.math._Matrix4.Matrix4_Impl_.prependTranslation","lime/math/Matrix4.hx",777,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_871_transformVector,"lime.math._Matrix4.Matrix4_Impl_","transformVector",0x3cbf39c7,"lime.math._Matrix4.Matrix4_Impl_.transformVector","lime/math/Matrix4.hx",871,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_887_transformVectors,"lime.math._Matrix4.Matrix4_Impl_","transformVectors",0xea9354cc,"lime.math._Matrix4.Matrix4_Impl_.transformVectors","lime/math/Matrix4.hx",887,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_909_transpose,"lime.math._Matrix4.Matrix4_Impl_","transpose",0x2d08b4f1,"lime.math._Matrix4.Matrix4_Impl_.transpose","lime/math/Matrix4.hx",909,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_919___getAxisRotation,"lime.math._Matrix4.Matrix4_Impl_","__getAxisRotation",0x8b4b420d,"lime.math._Matrix4.Matrix4_Impl_.__getAxisRotation","lime/math/Matrix4.hx",919,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_949___swap,"lime.math._Matrix4.Matrix4_Impl_","__swap",0x79e62e3b,"lime.math._Matrix4.Matrix4_Impl_.__swap","lime/math/Matrix4.hx",949,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_958_get_determinant,"lime.math._Matrix4.Matrix4_Impl_","get_determinant",0x5d0323a4,"lime.math._Matrix4.Matrix4_Impl_.get_determinant","lime/math/Matrix4.hx",958,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_968_get_position,"lime.math._Matrix4.Matrix4_Impl_","get_position",0x55830b3a,"lime.math._Matrix4.Matrix4_Impl_.get_position","lime/math/Matrix4.hx",968,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_972_set_position,"lime.math._Matrix4.Matrix4_Impl_","set_position",0x6a7c2eae,"lime.math._Matrix4.Matrix4_Impl_.set_position","lime/math/Matrix4.hx",972,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_981_get,"lime.math._Matrix4.Matrix4_Impl_","get",0x10b0bb0e,"lime.math._Matrix4.Matrix4_Impl_.get","lime/math/Matrix4.hx",981,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_985_set,"lime.math._Matrix4.Matrix4_Impl_","set",0x10b9d61a,"lime.math._Matrix4.Matrix4_Impl_.set","lime/math/Matrix4.hx",985,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_11_boot,"lime.math._Matrix4.Matrix4_Impl_","boot",0x86ac72ba,"lime.math._Matrix4.Matrix4_Impl_.boot","lime/math/Matrix4.hx",11,0xeb65dbd8)
static const Float _hx_array_data_cbf9fee6_38[] = {
	1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,
};
namespace lime{
namespace math{
namespace _Matrix4{

void Matrix4_Impl__obj::__construct() { }

Dynamic Matrix4_Impl__obj::__CreateEmpty() { return new Matrix4_Impl__obj; }

void *Matrix4_Impl__obj::_hx_vtable = 0;

Dynamic Matrix4_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix4_Impl__obj > _hx_result = new Matrix4_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Matrix4_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x329b7ea2;
}

::Array< Float > Matrix4_Impl__obj::_hx___identity;

 ::lime::utils::ArrayBufferView Matrix4_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_27__new)
HXDLIN(  27)		 ::lime::utils::ArrayBufferView this1;
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (::hx::IsNotNull( data )) {
HXLINE(  29)			_hx_tmp = (data->length == 16);
            		}
            		else {
HXLINE(  29)			_hx_tmp = false;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  31)			this1 = data;
            		}
            		else {
HXLINE(  35)			 ::Dynamic elements = null();
HXDLIN(  35)			 ::haxe::io::Bytes buffer = null();
HXDLIN(  35)			::cpp::VirtualArray array = ::lime::math::_Matrix4::Matrix4_Impl__obj::_hx___identity;
HXDLIN(  35)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN(  35)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  35)			 ::Dynamic len = null();
HXDLIN(  35)			 ::lime::utils::ArrayBufferView this2;
HXDLIN(  35)			if (::hx::IsNotNull( elements )) {
HXLINE(  35)				this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            			}
            			else {
HXLINE(  35)				if (::hx::IsNotNull( array )) {
HXLINE(  35)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)					_this->byteOffset = 0;
HXDLIN(  35)					_this->length = array->get_length();
HXDLIN(  35)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  35)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  35)					_this->buffer = this1;
HXDLIN(  35)					_this->copyFromArray(array,null());
HXDLIN(  35)					this2 = _this;
            				}
            				else {
HXLINE(  35)					if (::hx::IsNotNull( vector )) {
HXLINE(  35)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  35)						_this->byteOffset = 0;
HXDLIN(  35)						_this->length = array->get_length();
HXDLIN(  35)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  35)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  35)						_this->buffer = this1;
HXDLIN(  35)						_this->copyFromArray(array,null());
HXDLIN(  35)						this2 = _this;
            					}
            					else {
HXLINE(  35)						if (::hx::IsNotNull( view )) {
HXLINE(  35)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  35)							int srcLength = view->length;
HXDLIN(  35)							int srcByteOffset = view->byteOffset;
HXDLIN(  35)							int srcElementSize = view->bytesPerElement;
HXDLIN(  35)							int elementSize = _this->bytesPerElement;
HXDLIN(  35)							if ((view->type == _this->type)) {
HXLINE(  35)								int srcLength = srcData->length;
HXDLIN(  35)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  35)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  35)								_this->buffer = this1;
HXDLIN(  35)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE(  35)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN(  35)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  35)							_this->byteOffset = 0;
HXDLIN(  35)							_this->length = srcLength;
HXDLIN(  35)							this2 = _this;
            						}
            						else {
HXLINE(  35)							if (::hx::IsNotNull( buffer )) {
HXLINE(  35)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)								int in_byteOffset = 0;
HXDLIN(  35)								if ((in_byteOffset < 0)) {
HXLINE(  35)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  35)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  35)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  35)								int bufferByteLength = buffer->length;
HXDLIN(  35)								int elementSize = _this->bytesPerElement;
HXDLIN(  35)								int newByteLength = bufferByteLength;
HXDLIN(  35)								if (::hx::IsNull( len )) {
HXLINE(  35)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  35)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  35)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN(  35)									if ((newByteLength < 0)) {
HXLINE(  35)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE(  35)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  35)									int newRange = (in_byteOffset + newByteLength);
HXDLIN(  35)									if ((newRange > bufferByteLength)) {
HXLINE(  35)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN(  35)								_this->buffer = buffer;
HXDLIN(  35)								_this->byteOffset = in_byteOffset;
HXDLIN(  35)								_this->byteLength = newByteLength;
HXDLIN(  35)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  35)								this2 = _this;
            							}
            							else {
HXLINE(  35)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN(  35)			this1 = this2;
            		}
HXLINE(  27)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,_new,return )

void Matrix4_Impl__obj::append( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView lhs){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_44_append)
HXLINE(  45)		Float m111 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN(  45)		Float m121 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN(  45)		Float m131 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN(  45)		Float m141 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN(  45)		Float m112 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN(  45)		Float m122 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20));
HXDLIN(  45)		Float m132 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXDLIN(  45)		Float m142 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXDLIN(  45)		Float m113 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN(  45)		Float m123 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN(  45)		Float m133 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXDLIN(  45)		Float m143 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXDLIN(  45)		Float m114 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN(  45)		Float m124 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN(  45)		Float m134 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
HXDLIN(  45)		Float m144 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60));
HXDLIN(  45)		Float m211 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,0);
HXDLIN(  45)		Float m221 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,4);
HXDLIN(  45)		Float m231 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,8);
HXDLIN(  45)		Float m241 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,12);
HXDLIN(  45)		Float m212 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,1);
HXDLIN(  45)		Float m222 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,5);
HXDLIN(  45)		Float m232 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,9);
HXDLIN(  45)		Float m242 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,13);
HXDLIN(  45)		Float m213 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,2);
HXDLIN(  45)		Float m223 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,6);
HXDLIN(  45)		Float m233 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,10);
HXDLIN(  45)		Float m243 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,14);
HXDLIN(  45)		Float m214 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,3);
HXDLIN(  45)		Float m224 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,7);
HXDLIN(  45)		Float m234 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,11);
HXDLIN(  45)		Float m244 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,15);
HXLINE(  78)		{
HXLINE(  78)			Float val = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
HXDLIN(  78)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE(  79)		{
HXLINE(  79)			Float val1 = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
HXDLIN(  79)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val1);
            		}
HXLINE(  80)		{
HXLINE(  80)			Float val2 = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
HXDLIN(  80)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val2);
            		}
HXLINE(  81)		{
HXLINE(  81)			Float val3 = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
HXDLIN(  81)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val3);
            		}
HXLINE(  83)		{
HXLINE(  83)			Float val4 = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
HXDLIN(  83)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val4);
            		}
HXLINE(  84)		{
HXLINE(  84)			Float val5 = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
HXDLIN(  84)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val5);
            		}
HXLINE(  85)		{
HXLINE(  85)			Float val6 = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
HXDLIN(  85)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val6);
            		}
HXLINE(  86)		{
HXLINE(  86)			Float val7 = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
HXDLIN(  86)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val7);
            		}
HXLINE(  88)		{
HXLINE(  88)			Float val8 = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
HXDLIN(  88)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val8);
            		}
HXLINE(  89)		{
HXLINE(  89)			Float val9 = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
HXDLIN(  89)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val9);
            		}
HXLINE(  90)		{
HXLINE(  90)			Float val10 = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
HXDLIN(  90)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val10);
            		}
HXLINE(  91)		{
HXLINE(  91)			Float val11 = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
HXDLIN(  91)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val11);
            		}
HXLINE(  93)		{
HXLINE(  93)			Float val12 = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
HXDLIN(  93)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val12);
            		}
HXLINE(  94)		{
HXLINE(  94)			Float val13 = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
HXDLIN(  94)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val13);
            		}
HXLINE(  95)		{
HXLINE(  95)			Float val14 = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
HXDLIN(  95)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val14);
            		}
HXLINE(  96)		{
HXLINE(  96)			Float val15 = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
HXDLIN(  96)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),val15);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,append,(void))

void Matrix4_Impl__obj::appendRotation( ::lime::utils::ArrayBufferView this1,Float degrees, ::lime::math::Vector4 axis, ::lime::math::Vector4 pivotPoint){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_106_appendRotation)
HXLINE( 107)		 ::lime::utils::ArrayBufferView m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_hx___getAxisRotation(this1,axis->x,axis->y,axis->z,degrees);
HXLINE( 109)		if (::hx::IsNotNull( pivotPoint )) {
HXLINE( 111)			 ::lime::math::Vector4 p = pivotPoint;
HXLINE( 112)			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(m,p->x,p->y,p->z);
            		}
HXLINE( 115)		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this1,m);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendRotation,(void))

void Matrix4_Impl__obj::appendScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_126_appendScale)
HXDLIN( 126)		 ::Dynamic elements = null();
HXDLIN( 126)		 ::haxe::io::Bytes buffer = null();
HXDLIN( 126)		::cpp::VirtualArray array = ::Array_obj< Float >::__new(16)->init(0,xScale)->init(1,((Float)0.0))->init(2,((Float)0.0))->init(3,((Float)0.0))->init(4,((Float)0.0))->init(5,yScale)->init(6,((Float)0.0))->init(7,((Float)0.0))->init(8,((Float)0.0))->init(9,((Float)0.0))->init(10,zScale)->init(11,((Float)0.0))->init(12,((Float)0.0))->init(13,((Float)0.0))->init(14,((Float)0.0))->init(15,((Float)1.0));
HXDLIN( 126)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 126)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 126)		 ::Dynamic len = null();
HXDLIN( 126)		 ::lime::utils::ArrayBufferView this2;
HXDLIN( 126)		if (::hx::IsNotNull( elements )) {
HXDLIN( 126)			this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXDLIN( 126)			if (::hx::IsNotNull( array )) {
HXDLIN( 126)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 126)				_this->byteOffset = 0;
HXDLIN( 126)				_this->length = array->get_length();
HXDLIN( 126)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 126)				 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 126)				_this->buffer = this1;
HXDLIN( 126)				_this->copyFromArray(array,null());
HXDLIN( 126)				this2 = _this;
            			}
            			else {
HXDLIN( 126)				if (::hx::IsNotNull( vector )) {
HXDLIN( 126)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 126)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 126)					_this->byteOffset = 0;
HXDLIN( 126)					_this->length = array->get_length();
HXDLIN( 126)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 126)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 126)					_this->buffer = this1;
HXDLIN( 126)					_this->copyFromArray(array,null());
HXDLIN( 126)					this2 = _this;
            				}
            				else {
HXDLIN( 126)					if (::hx::IsNotNull( view )) {
HXDLIN( 126)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 126)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 126)						int srcLength = view->length;
HXDLIN( 126)						int srcByteOffset = view->byteOffset;
HXDLIN( 126)						int srcElementSize = view->bytesPerElement;
HXDLIN( 126)						int elementSize = _this->bytesPerElement;
HXDLIN( 126)						if ((view->type == _this->type)) {
HXDLIN( 126)							int srcLength = srcData->length;
HXDLIN( 126)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 126)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 126)							_this->buffer = this1;
HXDLIN( 126)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 126)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 126)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 126)						_this->byteOffset = 0;
HXDLIN( 126)						_this->length = srcLength;
HXDLIN( 126)						this2 = _this;
            					}
            					else {
HXDLIN( 126)						if (::hx::IsNotNull( buffer )) {
HXDLIN( 126)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 126)							int in_byteOffset = 0;
HXDLIN( 126)							if ((in_byteOffset < 0)) {
HXDLIN( 126)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 126)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 126)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 126)							int bufferByteLength = buffer->length;
HXDLIN( 126)							int elementSize = _this->bytesPerElement;
HXDLIN( 126)							int newByteLength = bufferByteLength;
HXDLIN( 126)							if (::hx::IsNull( len )) {
HXDLIN( 126)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 126)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 126)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 126)								if ((newByteLength < 0)) {
HXDLIN( 126)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 126)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 126)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 126)								if ((newRange > bufferByteLength)) {
HXDLIN( 126)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 126)							_this->buffer = buffer;
HXDLIN( 126)							_this->byteOffset = in_byteOffset;
HXDLIN( 126)							_this->byteLength = newByteLength;
HXDLIN( 126)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 126)							this2 = _this;
            						}
            						else {
HXDLIN( 126)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 126)		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this1,::lime::math::_Matrix4::Matrix4_Impl__obj::_new(this2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendScale,(void))

void Matrix4_Impl__obj::appendTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_138_appendTranslation)
HXLINE( 139)		{
HXLINE( 139)			Float val = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48)) + x);
HXDLIN( 139)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val);
            		}
HXLINE( 140)		{
HXLINE( 140)			Float val1 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52)) + y);
HXDLIN( 140)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val1);
            		}
HXLINE( 141)		{
HXLINE( 141)			Float val2 = ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)) + z);
HXDLIN( 141)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val2);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendTranslation,(void))

 ::lime::utils::ArrayBufferView Matrix4_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_150_clone)
HXDLIN( 150)		 ::Dynamic elements = null();
HXDLIN( 150)		 ::haxe::io::Bytes buffer = null();
HXDLIN( 150)		::cpp::VirtualArray array = null();
HXDLIN( 150)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 150)		 ::Dynamic len = null();
HXDLIN( 150)		 ::lime::utils::ArrayBufferView this2;
HXDLIN( 150)		if (::hx::IsNotNull( elements )) {
HXDLIN( 150)			this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXDLIN( 150)			if (::hx::IsNotNull( array )) {
HXDLIN( 150)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 150)				_this->byteOffset = 0;
HXDLIN( 150)				_this->length = array->get_length();
HXDLIN( 150)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 150)				 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 150)				_this->buffer = this1;
HXDLIN( 150)				_this->copyFromArray(array,null());
HXDLIN( 150)				this2 = _this;
            			}
            			else {
HXDLIN( 150)				if (::hx::IsNotNull( vector )) {
HXDLIN( 150)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 150)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 150)					_this->byteOffset = 0;
HXDLIN( 150)					_this->length = array->get_length();
HXDLIN( 150)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 150)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 150)					_this->buffer = this1;
HXDLIN( 150)					_this->copyFromArray(array,null());
HXDLIN( 150)					this2 = _this;
            				}
            				else {
HXDLIN( 150)					if (::hx::IsNotNull( this1 )) {
HXDLIN( 150)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 150)						 ::haxe::io::Bytes srcData = this1->buffer;
HXDLIN( 150)						int srcLength = this1->length;
HXDLIN( 150)						int srcByteOffset = this1->byteOffset;
HXDLIN( 150)						int srcElementSize = this1->bytesPerElement;
HXDLIN( 150)						int elementSize = _this->bytesPerElement;
HXDLIN( 150)						if ((this1->type == _this->type)) {
HXDLIN( 150)							int srcLength = srcData->length;
HXDLIN( 150)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 150)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 150)							_this->buffer = this1;
HXDLIN( 150)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 150)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 150)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 150)						_this->byteOffset = 0;
HXDLIN( 150)						_this->length = srcLength;
HXDLIN( 150)						this2 = _this;
            					}
            					else {
HXDLIN( 150)						if (::hx::IsNotNull( buffer )) {
HXDLIN( 150)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 150)							int in_byteOffset = 0;
HXDLIN( 150)							if ((in_byteOffset < 0)) {
HXDLIN( 150)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 150)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 150)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 150)							int bufferByteLength = buffer->length;
HXDLIN( 150)							int elementSize = _this->bytesPerElement;
HXDLIN( 150)							int newByteLength = bufferByteLength;
HXDLIN( 150)							if (::hx::IsNull( len )) {
HXDLIN( 150)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 150)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 150)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 150)								if ((newByteLength < 0)) {
HXDLIN( 150)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 150)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 150)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 150)								if ((newRange > bufferByteLength)) {
HXDLIN( 150)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 150)							_this->buffer = buffer;
HXDLIN( 150)							_this->byteOffset = in_byteOffset;
HXDLIN( 150)							_this->byteLength = newByteLength;
HXDLIN( 150)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 150)							this2 = _this;
            						}
            						else {
HXDLIN( 150)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 150)		return ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(this2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,clone,return )

void Matrix4_Impl__obj::copyColumnFrom( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_160_copyColumnFrom)
HXDLIN( 160)		switch((int)(column)){
            			case (int)0: {
HXLINE( 163)				{
HXLINE( 163)					Float val = vector->x;
HXDLIN( 163)					 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            				}
HXLINE( 164)				{
HXLINE( 164)					Float val1 = vector->y;
HXDLIN( 164)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val1);
            				}
HXLINE( 165)				{
HXLINE( 165)					Float val2 = vector->z;
HXDLIN( 165)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val2);
            				}
HXLINE( 166)				{
HXLINE( 166)					Float val3 = vector->w;
HXDLIN( 166)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val3);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 169)				{
HXLINE( 169)					Float val = vector->x;
HXDLIN( 169)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val);
            				}
HXLINE( 170)				{
HXLINE( 170)					Float val1 = vector->y;
HXDLIN( 170)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val1);
            				}
HXLINE( 171)				{
HXLINE( 171)					Float val2 = vector->z;
HXDLIN( 171)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val2);
            				}
HXLINE( 172)				{
HXLINE( 172)					Float val3 = vector->w;
HXDLIN( 172)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val3);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 175)				{
HXLINE( 175)					Float val = vector->x;
HXDLIN( 175)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val);
            				}
HXLINE( 176)				{
HXLINE( 176)					Float val1 = vector->y;
HXDLIN( 176)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val1);
            				}
HXLINE( 177)				{
HXLINE( 177)					Float val2 = vector->z;
HXDLIN( 177)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val2);
            				}
HXLINE( 178)				{
HXLINE( 178)					Float val3 = vector->w;
HXDLIN( 178)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val3);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 181)				{
HXLINE( 181)					Float val = vector->x;
HXDLIN( 181)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val);
            				}
HXLINE( 182)				{
HXLINE( 182)					Float val1 = vector->y;
HXDLIN( 182)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val1);
            				}
HXLINE( 183)				{
HXLINE( 183)					Float val2 = vector->z;
HXDLIN( 183)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val2);
            				}
HXLINE( 184)				{
HXLINE( 184)					Float val3 = vector->w;
HXDLIN( 184)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),val3);
            				}
            			}
            			break;
            			default:{
HXLINE( 187)				::lime::utils::Log_obj::error(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds [0, ..., 3]",2f,8b,46,17)),::hx::SourceInfo(HX_("lime/math/Matrix4.hx",d8,db,65,eb),187,HX_("lime.math._Matrix4.Matrix4_Impl_",e6,fe,f9,cb),HX_("copyColumnFrom",75,97,b5,3a)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnFrom,(void))

void Matrix4_Impl__obj::copyColumnTo( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_198_copyColumnTo)
HXDLIN( 198)		switch((int)(column)){
            			case (int)0: {
HXLINE( 201)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXLINE( 202)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXLINE( 203)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXLINE( 204)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
            			}
            			break;
            			case (int)1: {
HXLINE( 207)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXLINE( 208)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20));
HXLINE( 209)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXLINE( 210)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
            			}
            			break;
            			case (int)2: {
HXLINE( 213)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXLINE( 214)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXLINE( 215)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXLINE( 216)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
            			}
            			break;
            			case (int)3: {
HXLINE( 219)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXLINE( 220)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXLINE( 221)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXLINE( 222)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60));
            			}
            			break;
            			default:{
HXLINE( 225)				::lime::utils::Log_obj::error(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds [0, ..., 3]",2f,8b,46,17)),::hx::SourceInfo(HX_("lime/math/Matrix4.hx",d8,db,65,eb),225,HX_("lime.math._Matrix4.Matrix4_Impl_",e6,fe,f9,cb),HX_("copyColumnTo",c6,2e,f6,f6)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnTo,(void))

void Matrix4_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView other){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_235_copyFrom)
HXDLIN( 235)		 ::lime::utils::ArrayBufferView view = other;
HXDLIN( 235)		::cpp::VirtualArray array = null();
HXDLIN( 235)		int offset = 0;
HXDLIN( 235)		bool _hx_tmp;
HXDLIN( 235)		if (::hx::IsNotNull( view )) {
HXDLIN( 235)			_hx_tmp = ::hx::IsNull( array );
            		}
            		else {
HXDLIN( 235)			_hx_tmp = false;
            		}
HXDLIN( 235)		if (_hx_tmp) {
HXDLIN( 235)			this1->buffer->blit((offset * this1->bytesPerElement),view->buffer,view->byteOffset,view->byteLength);
            		}
            		else {
HXDLIN( 235)			bool _hx_tmp;
HXDLIN( 235)			if (::hx::IsNotNull( array )) {
HXDLIN( 235)				_hx_tmp = ::hx::IsNull( view );
            			}
            			else {
HXDLIN( 235)				_hx_tmp = false;
            			}
HXDLIN( 235)			if (_hx_tmp) {
HXDLIN( 235)				this1->copyFromArray(array,offset);
            			}
            			else {
HXDLIN( 235)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyFrom,(void))

void Matrix4_Impl__obj::copyRowFrom( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_245_copyRowFrom)
HXDLIN( 245)		switch((int)(row)){
            			case (int)0: {
HXLINE( 248)				{
HXLINE( 248)					Float val = vector->x;
HXDLIN( 248)					 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            				}
HXLINE( 249)				{
HXLINE( 249)					Float val1 = vector->y;
HXDLIN( 249)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val1);
            				}
HXLINE( 250)				{
HXLINE( 250)					Float val2 = vector->z;
HXDLIN( 250)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val2);
            				}
HXLINE( 251)				{
HXLINE( 251)					Float val3 = vector->w;
HXDLIN( 251)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val3);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 254)				{
HXLINE( 254)					Float val = vector->x;
HXDLIN( 254)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val);
            				}
HXLINE( 255)				{
HXLINE( 255)					Float val1 = vector->y;
HXDLIN( 255)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val1);
            				}
HXLINE( 256)				{
HXLINE( 256)					Float val2 = vector->z;
HXDLIN( 256)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val2);
            				}
HXLINE( 257)				{
HXLINE( 257)					Float val3 = vector->w;
HXDLIN( 257)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val3);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 260)				{
HXLINE( 260)					Float val = vector->x;
HXDLIN( 260)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val);
            				}
HXLINE( 261)				{
HXLINE( 261)					Float val1 = vector->y;
HXDLIN( 261)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val1);
            				}
HXLINE( 262)				{
HXLINE( 262)					Float val2 = vector->z;
HXDLIN( 262)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val2);
            				}
HXLINE( 263)				{
HXLINE( 263)					Float val3 = vector->w;
HXDLIN( 263)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val3);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 266)				{
HXLINE( 266)					Float val = vector->x;
HXDLIN( 266)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val);
            				}
HXLINE( 267)				{
HXLINE( 267)					Float val1 = vector->y;
HXDLIN( 267)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val1);
            				}
HXLINE( 268)				{
HXLINE( 268)					Float val2 = vector->z;
HXDLIN( 268)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val2);
            				}
HXLINE( 269)				{
HXLINE( 269)					Float val3 = vector->w;
HXDLIN( 269)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),val3);
            				}
            			}
            			break;
            			default:{
HXLINE( 272)				::lime::utils::Log_obj::error(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds [0, ..., 3]",2f,8b,46,17)),::hx::SourceInfo(HX_("lime/math/Matrix4.hx",d8,db,65,eb),272,HX_("lime.math._Matrix4.Matrix4_Impl_",e6,fe,f9,cb),HX_("copyRowFrom",6f,45,8b,ef)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowFrom,(void))

void Matrix4_Impl__obj::copyRowTo( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_283_copyRowTo)
HXDLIN( 283)		switch((int)(row)){
            			case (int)0: {
HXLINE( 286)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXLINE( 287)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXLINE( 288)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXLINE( 289)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
            			}
            			break;
            			case (int)1: {
HXLINE( 292)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXLINE( 293)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20));
HXLINE( 294)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXLINE( 295)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
            			}
            			break;
            			case (int)2: {
HXLINE( 298)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXLINE( 299)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXLINE( 300)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXLINE( 301)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
            			}
            			break;
            			case (int)3: {
HXLINE( 304)				vector->x =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXLINE( 305)				vector->y =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXLINE( 306)				vector->z =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
HXLINE( 307)				vector->w =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60));
            			}
            			break;
            			default:{
HXLINE( 310)				::lime::utils::Log_obj::error(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds [0, ..., 3]",2f,8b,46,17)),::hx::SourceInfo(HX_("lime/math/Matrix4.hx",d8,db,65,eb),310,HX_("lime.math._Matrix4.Matrix4_Impl_",e6,fe,f9,cb),HX_("copyRowTo",40,8a,62,73)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowTo,(void))

void Matrix4_Impl__obj::create2D( ::lime::utils::ArrayBufferView this1,Float a,Float b,Float c,Float d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_324_create2D)
HXLINE( 325)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,a);
HXLINE( 326)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),b);
HXLINE( 327)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),0);
HXLINE( 328)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 330)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),c);
HXLINE( 331)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),d);
HXLINE( 332)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 333)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
HXLINE( 335)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),0);
HXLINE( 336)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),0);
HXLINE( 337)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),1);
HXLINE( 338)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),0);
HXLINE( 340)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),tx);
HXLINE( 341)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),ty);
HXLINE( 342)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),0);
HXLINE( 343)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_Impl__obj,create2D,(void))

void Matrix4_Impl__obj::createOrtho( ::lime::utils::ArrayBufferView this1,Float left,Float right,Float bottom,Float top,Float zNear,Float zFar){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_356_createOrtho)
HXLINE( 357)		Float sx = (((Float)1.0) / (right - left));
HXLINE( 358)		Float sy = (((Float)1.0) / (top - bottom));
HXLINE( 359)		Float sz = (((Float)1.0) / (zFar - zNear));
HXLINE( 361)		{
HXLINE( 361)			Float val = (( (Float)(2) ) * sx);
HXDLIN( 361)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE( 362)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 363)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),0);
HXLINE( 364)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 366)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),0);
HXLINE( 367)		{
HXLINE( 367)			Float val1 = (( (Float)(2) ) * sy);
HXDLIN( 367)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val1);
            		}
HXLINE( 368)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 369)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
HXLINE( 371)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),0);
HXLINE( 372)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),0);
HXLINE( 373)		{
HXLINE( 373)			Float val2 = (( (Float)(-2) ) * sz);
HXDLIN( 373)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val2);
            		}
HXLINE( 374)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),0);
HXLINE( 376)		{
HXLINE( 376)			Float val3 = (-((left + right)) * sx);
HXDLIN( 376)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val3);
            		}
HXLINE( 377)		{
HXLINE( 377)			Float val4 = (-((bottom + top)) * sy);
HXDLIN( 377)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val4);
            		}
HXLINE( 378)		{
HXLINE( 378)			Float val5 = (-((zNear + zFar)) * sz);
HXDLIN( 378)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val5);
            		}
HXLINE( 379)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_Impl__obj,createOrtho,(void))

 ::lime::math::Vector4 Matrix4_Impl__obj::deltaTransformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 v, ::lime::math::Vector4 result){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_486_deltaTransformVector)
HXLINE( 487)		if (::hx::IsNull( result )) {
HXLINE( 487)			result =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 488)		Float x = v->x;
HXDLIN( 488)		Float y = v->y;
HXDLIN( 488)		Float z = v->z;
HXLINE( 489)		Float _hx_tmp = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 489)		Float _hx_tmp1 = (_hx_tmp + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16))));
HXDLIN( 489)		Float _hx_tmp2 = (_hx_tmp1 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32))));
HXDLIN( 489)		result->x = (_hx_tmp2 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)));
HXLINE( 490)		Float _hx_tmp3 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)));
HXDLIN( 490)		Float _hx_tmp4 = (_hx_tmp3 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20))));
HXDLIN( 490)		Float _hx_tmp5 = (_hx_tmp4 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36))));
HXDLIN( 490)		result->y = (_hx_tmp5 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)));
HXLINE( 491)		Float _hx_tmp6 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8)));
HXDLIN( 491)		Float _hx_tmp7 = (_hx_tmp6 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24))));
HXDLIN( 491)		Float _hx_tmp8 = (_hx_tmp7 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40))));
HXDLIN( 491)		result->z = (_hx_tmp8 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44)));
HXLINE( 492)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,deltaTransformVector,return )

 ::lime::utils::ArrayBufferView Matrix4_Impl__obj::fromMatrix3( ::lime::math::Matrix3 matrix3){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_496_fromMatrix3)
HXLINE( 497)		 ::lime::utils::ArrayBufferView mat = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
HXLINE( 498)		::lime::math::_Matrix4::Matrix4_Impl__obj::create2D(mat,matrix3->a,matrix3->b,matrix3->c,matrix3->d,matrix3->tx,matrix3->ty);
HXLINE( 499)		return mat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,fromMatrix3,return )

void Matrix4_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_506_identity)
HXLINE( 507)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,1);
HXLINE( 508)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 509)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),0);
HXLINE( 510)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 511)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),0);
HXLINE( 512)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),1);
HXLINE( 513)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 514)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
HXLINE( 515)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),0);
HXLINE( 516)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),0);
HXLINE( 517)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),1);
HXLINE( 518)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),0);
HXLINE( 519)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),0);
HXLINE( 520)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),0);
HXLINE( 521)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),0);
HXLINE( 522)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,identity,(void))

 ::lime::utils::ArrayBufferView Matrix4_Impl__obj::interpolate( ::lime::utils::ArrayBufferView thisMat, ::lime::utils::ArrayBufferView toMat,Float percent, ::lime::utils::ArrayBufferView result){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_534_interpolate)
HXLINE( 535)		if (::hx::IsNull( result )) {
HXLINE( 535)			result = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
            		}
HXLINE( 537)		{
HXLINE( 537)			int _g = 0;
HXDLIN( 537)			while((_g < 16)){
HXLINE( 537)				_g = (_g + 1);
HXDLIN( 537)				int i = (_g - 1);
HXLINE( 539)				Float _hx_tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(thisMat,i);
HXDLIN( 539)				Float _hx_tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(toMat,i);
HXDLIN( 539)				::lime::math::_Matrix4::Matrix4_Impl__obj::set(result,i,(_hx_tmp + ((_hx_tmp1 - ::lime::math::_Matrix4::Matrix4_Impl__obj::get(thisMat,i)) * percent)));
            			}
            		}
HXLINE( 542)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,interpolate,return )

void Matrix4_Impl__obj::interpolateTo( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView toMat,Float percent){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_552_interpolateTo)
HXDLIN( 552)		int _g = 0;
HXDLIN( 552)		while((_g < 16)){
HXDLIN( 552)			_g = (_g + 1);
HXDLIN( 552)			int i = (_g - 1);
HXLINE( 554)			{
HXLINE( 554)				Float val =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (i * 4)));
HXDLIN( 554)				Float val1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(toMat,i);
HXDLIN( 554)				Float val2 = (val + ((val1 -  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (i * 4)))) * percent));
HXDLIN( 554)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * 4)),val2);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolateTo,(void))

bool Matrix4_Impl__obj::invert( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_563_invert)
HXLINE( 564)		Float d = ::lime::math::_Matrix4::Matrix4_Impl__obj::get_determinant(this1);
HXLINE( 565)		bool invertable = (::Math_obj::abs(d) > ((Float)0.00000000001));
HXLINE( 567)		if (invertable) {
HXLINE( 569)			d = (( (Float)(1) ) / d);
HXLINE( 571)			Float m11 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXLINE( 572)			Float m21 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXLINE( 573)			Float m31 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXLINE( 574)			Float m41 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXLINE( 575)			Float m12 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXLINE( 576)			Float m22 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20));
HXLINE( 577)			Float m32 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXLINE( 578)			Float m42 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXLINE( 579)			Float m13 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXLINE( 580)			Float m23 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXLINE( 581)			Float m33 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXLINE( 582)			Float m43 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXLINE( 583)			Float m14 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXLINE( 584)			Float m24 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXLINE( 585)			Float m34 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
HXLINE( 586)			Float m44 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60));
HXLINE( 588)			{
HXLINE( 588)				Float val = (d * (((m22 * ((m33 * m44) - (m43 * m34))) - (m32 * ((m23 * m44) - (m43 * m24)))) + (m42 * ((m23 * m34) - (m33 * m24)))));
HXDLIN( 588)				 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            			}
HXLINE( 589)			{
HXLINE( 589)				Float val1 = (-(d) * (((m12 * ((m33 * m44) - (m43 * m34))) - (m32 * ((m13 * m44) - (m43 * m14)))) + (m42 * ((m13 * m34) - (m33 * m14)))));
HXDLIN( 589)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val1);
            			}
HXLINE( 590)			{
HXLINE( 590)				Float val2 = (d * (((m12 * ((m23 * m44) - (m43 * m24))) - (m22 * ((m13 * m44) - (m43 * m14)))) + (m42 * ((m13 * m24) - (m23 * m14)))));
HXDLIN( 590)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val2);
            			}
HXLINE( 591)			{
HXLINE( 591)				Float val3 = (-(d) * (((m12 * ((m23 * m34) - (m33 * m24))) - (m22 * ((m13 * m34) - (m33 * m14)))) + (m32 * ((m13 * m24) - (m23 * m14)))));
HXDLIN( 591)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val3);
            			}
HXLINE( 592)			{
HXLINE( 592)				Float val4 = (-(d) * (((m21 * ((m33 * m44) - (m43 * m34))) - (m31 * ((m23 * m44) - (m43 * m24)))) + (m41 * ((m23 * m34) - (m33 * m24)))));
HXDLIN( 592)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val4);
            			}
HXLINE( 593)			{
HXLINE( 593)				Float val5 = (d * (((m11 * ((m33 * m44) - (m43 * m34))) - (m31 * ((m13 * m44) - (m43 * m14)))) + (m41 * ((m13 * m34) - (m33 * m14)))));
HXDLIN( 593)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val5);
            			}
HXLINE( 594)			{
HXLINE( 594)				Float val6 = (-(d) * (((m11 * ((m23 * m44) - (m43 * m24))) - (m21 * ((m13 * m44) - (m43 * m14)))) + (m41 * ((m13 * m24) - (m23 * m14)))));
HXDLIN( 594)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val6);
            			}
HXLINE( 595)			{
HXLINE( 595)				Float val7 = (d * (((m11 * ((m23 * m34) - (m33 * m24))) - (m21 * ((m13 * m34) - (m33 * m14)))) + (m31 * ((m13 * m24) - (m23 * m14)))));
HXDLIN( 595)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val7);
            			}
HXLINE( 596)			{
HXLINE( 596)				Float val8 = (d * (((m21 * ((m32 * m44) - (m42 * m34))) - (m31 * ((m22 * m44) - (m42 * m24)))) + (m41 * ((m22 * m34) - (m32 * m24)))));
HXDLIN( 596)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val8);
            			}
HXLINE( 597)			{
HXLINE( 597)				Float val9 = (-(d) * (((m11 * ((m32 * m44) - (m42 * m34))) - (m31 * ((m12 * m44) - (m42 * m14)))) + (m41 * ((m12 * m34) - (m32 * m14)))));
HXDLIN( 597)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val9);
            			}
HXLINE( 598)			{
HXLINE( 598)				Float val10 = (d * (((m11 * ((m22 * m44) - (m42 * m24))) - (m21 * ((m12 * m44) - (m42 * m14)))) + (m41 * ((m12 * m24) - (m22 * m14)))));
HXDLIN( 598)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val10);
            			}
HXLINE( 599)			{
HXLINE( 599)				Float val11 = (-(d) * (((m11 * ((m22 * m34) - (m32 * m24))) - (m21 * ((m12 * m34) - (m32 * m14)))) + (m31 * ((m12 * m24) - (m22 * m14)))));
HXDLIN( 599)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val11);
            			}
HXLINE( 600)			{
HXLINE( 600)				Float val12 = (-(d) * (((m21 * ((m32 * m43) - (m42 * m33))) - (m31 * ((m22 * m43) - (m42 * m23)))) + (m41 * ((m22 * m33) - (m32 * m23)))));
HXDLIN( 600)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val12);
            			}
HXLINE( 601)			{
HXLINE( 601)				Float val13 = (d * (((m11 * ((m32 * m43) - (m42 * m33))) - (m31 * ((m12 * m43) - (m42 * m13)))) + (m41 * ((m12 * m33) - (m32 * m13)))));
HXDLIN( 601)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val13);
            			}
HXLINE( 602)			{
HXLINE( 602)				Float val14 = (-(d) * (((m11 * ((m22 * m43) - (m42 * m23))) - (m21 * ((m12 * m43) - (m42 * m13)))) + (m41 * ((m12 * m23) - (m22 * m13)))));
HXDLIN( 602)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val14);
            			}
HXLINE( 603)			{
HXLINE( 603)				Float val15 = (d * (((m11 * ((m22 * m33) - (m32 * m23))) - (m21 * ((m12 * m33) - (m32 * m13)))) + (m31 * ((m12 * m23) - (m22 * m13)))));
HXDLIN( 603)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),val15);
            			}
            		}
HXLINE( 606)		return invertable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,invert,return )

void Matrix4_Impl__obj::pointAt( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 pos, ::lime::math::Vector4 at, ::lime::math::Vector4 up){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_616_pointAt)
HXLINE( 619)		if (::hx::IsNull( at )) {
HXLINE( 621)			at =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,0,0,1,null());
            		}
HXLINE( 624)		if (::hx::IsNull( up )) {
HXLINE( 626)			up =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,0,1,0,null());
            		}
HXLINE( 629)		 ::lime::math::Vector4 result = null();
HXDLIN( 629)		if (::hx::IsNull( result )) {
HXLINE( 629)			result =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXDLIN( 629)		{
HXLINE( 629)			result->x = (pos->x - at->x);
HXDLIN( 629)			result->y = (pos->y - at->y);
HXDLIN( 629)			result->z = (pos->z - at->z);
            		}
HXDLIN( 629)		 ::lime::math::Vector4 dir = result;
HXLINE( 630)		 ::lime::math::Vector4 vup =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,up->x,up->y,up->z,up->w);
HXLINE( 633)		{
HXLINE( 633)			Float l = ::Math_obj::sqrt((((dir->x * dir->x) + (dir->y * dir->y)) + (dir->z * dir->z)));
HXDLIN( 633)			if ((l != 0)) {
HXLINE( 633)				 ::lime::math::Vector4 dir1 = dir;
HXDLIN( 633)				dir1->x = (dir1->x / l);
HXDLIN( 633)				 ::lime::math::Vector4 dir2 = dir;
HXDLIN( 633)				dir2->y = (dir2->y / l);
HXDLIN( 633)				 ::lime::math::Vector4 dir3 = dir;
HXDLIN( 633)				dir3->z = (dir3->z / l);
            			}
            		}
HXLINE( 634)		{
HXLINE( 634)			Float l1 = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));
HXDLIN( 634)			if ((l1 != 0)) {
HXLINE( 634)				 ::lime::math::Vector4 vup1 = vup;
HXDLIN( 634)				vup1->x = (vup1->x / l1);
HXDLIN( 634)				 ::lime::math::Vector4 vup2 = vup;
HXDLIN( 634)				vup2->y = (vup2->y / l1);
HXDLIN( 634)				 ::lime::math::Vector4 vup3 = vup;
HXDLIN( 634)				vup3->z = (vup3->z / l1);
            			}
            		}
HXLINE( 636)		 ::lime::math::Vector4 dir2 =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,dir->x,dir->y,dir->z,dir->w);
HXLINE( 637)		{
HXLINE( 637)			Float s = (((vup->x * dir->x) + (vup->y * dir->y)) + (vup->z * dir->z));
HXDLIN( 637)			 ::lime::math::Vector4 dir21 = dir2;
HXDLIN( 637)			dir21->x = (dir21->x * s);
HXDLIN( 637)			 ::lime::math::Vector4 dir22 = dir2;
HXDLIN( 637)			dir22->y = (dir22->y * s);
HXDLIN( 637)			 ::lime::math::Vector4 dir23 = dir2;
HXDLIN( 637)			dir23->z = (dir23->z * s);
            		}
HXLINE( 639)		 ::lime::math::Vector4 result1 = null();
HXDLIN( 639)		if (::hx::IsNull( result1 )) {
HXLINE( 639)			result1 =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXDLIN( 639)		{
HXLINE( 639)			result1->x = (vup->x - dir2->x);
HXDLIN( 639)			result1->y = (vup->y - dir2->y);
HXDLIN( 639)			result1->z = (vup->z - dir2->z);
            		}
HXDLIN( 639)		vup = result1;
HXLINE( 641)		if ((::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z))) > 0)) {
HXLINE( 643)			Float l = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));
HXDLIN( 643)			if ((l != 0)) {
HXLINE( 643)				 ::lime::math::Vector4 vup1 = vup;
HXDLIN( 643)				vup1->x = (vup1->x / l);
HXDLIN( 643)				 ::lime::math::Vector4 vup2 = vup;
HXDLIN( 643)				vup2->y = (vup2->y / l);
HXDLIN( 643)				 ::lime::math::Vector4 vup3 = vup;
HXDLIN( 643)				vup3->z = (vup3->z / l);
            			}
            		}
            		else {
HXLINE( 647)			if ((dir->x != 0)) {
HXLINE( 649)				vup =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,-(dir->y),dir->x,0,null());
            			}
            			else {
HXLINE( 653)				vup =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,1,0,0,null());
            			}
            		}
HXLINE( 657)		 ::lime::math::Vector4 result2 = null();
HXDLIN( 657)		if (::hx::IsNull( result2 )) {
HXLINE( 657)			result2 =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXDLIN( 657)		{
HXLINE( 657)			Float ya = ((vup->z * dir->x) - (vup->x * dir->z));
HXDLIN( 657)			Float za = ((vup->x * dir->y) - (vup->y * dir->x));
HXDLIN( 657)			result2->x = ((vup->y * dir->z) - (vup->z * dir->y));
HXDLIN( 657)			result2->y = ya;
HXDLIN( 657)			result2->z = za;
            		}
HXDLIN( 657)		result2->w = ( (Float)(1) );
HXLINE( 631)		 ::lime::math::Vector4 right = result2;
HXLINE( 658)		{
HXLINE( 658)			Float l2 = ::Math_obj::sqrt((((right->x * right->x) + (right->y * right->y)) + (right->z * right->z)));
HXDLIN( 658)			if ((l2 != 0)) {
HXLINE( 658)				 ::lime::math::Vector4 right1 = right;
HXDLIN( 658)				right1->x = (right1->x / l2);
HXDLIN( 658)				 ::lime::math::Vector4 right2 = right;
HXDLIN( 658)				right2->y = (right2->y / l2);
HXDLIN( 658)				 ::lime::math::Vector4 right3 = right;
HXDLIN( 658)				right3->z = (right3->z / l2);
            			}
            		}
HXLINE( 660)		{
HXLINE( 660)			Float val = right->x;
HXDLIN( 660)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE( 661)		{
HXLINE( 661)			Float val1 = right->y;
HXDLIN( 661)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val1);
            		}
HXLINE( 662)		{
HXLINE( 662)			Float val2 = right->z;
HXDLIN( 662)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val2);
            		}
HXLINE( 663)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),((Float)0.0));
HXLINE( 664)		{
HXLINE( 664)			Float val3 = vup->x;
HXDLIN( 664)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val3);
            		}
HXLINE( 665)		{
HXLINE( 665)			Float val4 = vup->y;
HXDLIN( 665)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val4);
            		}
HXLINE( 666)		{
HXLINE( 666)			Float val5 = vup->z;
HXDLIN( 666)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val5);
            		}
HXLINE( 667)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),((Float)0.0));
HXLINE( 668)		{
HXLINE( 668)			Float val6 = dir->x;
HXDLIN( 668)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val6);
            		}
HXLINE( 669)		{
HXLINE( 669)			Float val7 = dir->y;
HXDLIN( 669)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val7);
            		}
HXLINE( 670)		{
HXLINE( 670)			Float val8 = dir->z;
HXDLIN( 670)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val8);
            		}
HXLINE( 671)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),((Float)0.0));
HXLINE( 672)		{
HXLINE( 672)			Float val9 = pos->x;
HXDLIN( 672)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val9);
            		}
HXLINE( 673)		{
HXLINE( 673)			Float val10 = pos->y;
HXDLIN( 673)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val10);
            		}
HXLINE( 674)		{
HXLINE( 674)			Float val11 = pos->z;
HXDLIN( 674)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val11);
            		}
HXLINE( 675)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),((Float)1.0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,pointAt,(void))

void Matrix4_Impl__obj::prepend( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView rhs){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_683_prepend)
HXLINE( 684)		Float m111 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,0);
HXDLIN( 684)		Float m121 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,4);
HXDLIN( 684)		Float m131 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,8);
HXDLIN( 684)		Float m141 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,12);
HXDLIN( 684)		Float m112 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,1);
HXDLIN( 684)		Float m122 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,5);
HXDLIN( 684)		Float m132 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,9);
HXDLIN( 684)		Float m142 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,13);
HXDLIN( 684)		Float m113 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,2);
HXDLIN( 684)		Float m123 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,6);
HXDLIN( 684)		Float m133 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,10);
HXDLIN( 684)		Float m143 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,14);
HXDLIN( 684)		Float m114 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,3);
HXDLIN( 684)		Float m124 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,7);
HXDLIN( 684)		Float m134 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,11);
HXDLIN( 684)		Float m144 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,15);
HXDLIN( 684)		Float m211 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 684)		Float m221 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 684)		Float m231 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN( 684)		Float m241 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 684)		Float m212 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 684)		Float m222 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20));
HXDLIN( 684)		Float m232 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXDLIN( 684)		Float m242 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXDLIN( 684)		Float m213 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN( 684)		Float m223 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 684)		Float m233 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXDLIN( 684)		Float m243 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXDLIN( 684)		Float m214 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 684)		Float m224 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN( 684)		Float m234 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
HXDLIN( 684)		Float m244 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60));
HXLINE( 717)		{
HXLINE( 717)			Float val = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
HXDLIN( 717)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE( 718)		{
HXLINE( 718)			Float val1 = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
HXDLIN( 718)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val1);
            		}
HXLINE( 719)		{
HXLINE( 719)			Float val2 = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
HXDLIN( 719)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val2);
            		}
HXLINE( 720)		{
HXLINE( 720)			Float val3 = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
HXDLIN( 720)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val3);
            		}
HXLINE( 722)		{
HXLINE( 722)			Float val4 = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
HXDLIN( 722)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val4);
            		}
HXLINE( 723)		{
HXLINE( 723)			Float val5 = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
HXDLIN( 723)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val5);
            		}
HXLINE( 724)		{
HXLINE( 724)			Float val6 = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
HXDLIN( 724)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val6);
            		}
HXLINE( 725)		{
HXLINE( 725)			Float val7 = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
HXDLIN( 725)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val7);
            		}
HXLINE( 727)		{
HXLINE( 727)			Float val8 = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
HXDLIN( 727)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val8);
            		}
HXLINE( 728)		{
HXLINE( 728)			Float val9 = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
HXDLIN( 728)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val9);
            		}
HXLINE( 729)		{
HXLINE( 729)			Float val10 = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
HXDLIN( 729)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val10);
            		}
HXLINE( 730)		{
HXLINE( 730)			Float val11 = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
HXDLIN( 730)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val11);
            		}
HXLINE( 732)		{
HXLINE( 732)			Float val12 = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
HXDLIN( 732)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val12);
            		}
HXLINE( 733)		{
HXLINE( 733)			Float val13 = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
HXDLIN( 733)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val13);
            		}
HXLINE( 734)		{
HXLINE( 734)			Float val14 = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
HXDLIN( 734)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val14);
            		}
HXLINE( 735)		{
HXLINE( 735)			Float val15 = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
HXDLIN( 735)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),val15);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,prepend,(void))

void Matrix4_Impl__obj::prependRotation( ::lime::utils::ArrayBufferView this1,Float degrees, ::lime::math::Vector4 axis, ::lime::math::Vector4 pivotPoint){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_745_prependRotation)
HXLINE( 746)		 ::lime::utils::ArrayBufferView m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_hx___getAxisRotation(this1,axis->x,axis->y,axis->z,degrees);
HXLINE( 748)		if (::hx::IsNotNull( pivotPoint )) {
HXLINE( 750)			 ::lime::math::Vector4 p = pivotPoint;
HXLINE( 751)			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(m,p->x,p->y,p->z);
            		}
HXLINE( 754)		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(this1,m);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependRotation,(void))

void Matrix4_Impl__obj::prependScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_765_prependScale)
HXDLIN( 765)		 ::Dynamic elements = null();
HXDLIN( 765)		 ::haxe::io::Bytes buffer = null();
HXDLIN( 765)		::cpp::VirtualArray array = ::Array_obj< Float >::__new(16)->init(0,xScale)->init(1,((Float)0.0))->init(2,((Float)0.0))->init(3,((Float)0.0))->init(4,((Float)0.0))->init(5,yScale)->init(6,((Float)0.0))->init(7,((Float)0.0))->init(8,((Float)0.0))->init(9,((Float)0.0))->init(10,zScale)->init(11,((Float)0.0))->init(12,((Float)0.0))->init(13,((Float)0.0))->init(14,((Float)0.0))->init(15,((Float)1.0));
HXDLIN( 765)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 765)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 765)		 ::Dynamic len = null();
HXDLIN( 765)		 ::lime::utils::ArrayBufferView this2;
HXDLIN( 765)		if (::hx::IsNotNull( elements )) {
HXDLIN( 765)			this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXDLIN( 765)			if (::hx::IsNotNull( array )) {
HXDLIN( 765)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 765)				_this->byteOffset = 0;
HXDLIN( 765)				_this->length = array->get_length();
HXDLIN( 765)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 765)				 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 765)				_this->buffer = this1;
HXDLIN( 765)				_this->copyFromArray(array,null());
HXDLIN( 765)				this2 = _this;
            			}
            			else {
HXDLIN( 765)				if (::hx::IsNotNull( vector )) {
HXDLIN( 765)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 765)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 765)					_this->byteOffset = 0;
HXDLIN( 765)					_this->length = array->get_length();
HXDLIN( 765)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 765)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 765)					_this->buffer = this1;
HXDLIN( 765)					_this->copyFromArray(array,null());
HXDLIN( 765)					this2 = _this;
            				}
            				else {
HXDLIN( 765)					if (::hx::IsNotNull( view )) {
HXDLIN( 765)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 765)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 765)						int srcLength = view->length;
HXDLIN( 765)						int srcByteOffset = view->byteOffset;
HXDLIN( 765)						int srcElementSize = view->bytesPerElement;
HXDLIN( 765)						int elementSize = _this->bytesPerElement;
HXDLIN( 765)						if ((view->type == _this->type)) {
HXDLIN( 765)							int srcLength = srcData->length;
HXDLIN( 765)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 765)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 765)							_this->buffer = this1;
HXDLIN( 765)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 765)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 765)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 765)						_this->byteOffset = 0;
HXDLIN( 765)						_this->length = srcLength;
HXDLIN( 765)						this2 = _this;
            					}
            					else {
HXDLIN( 765)						if (::hx::IsNotNull( buffer )) {
HXDLIN( 765)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 765)							int in_byteOffset = 0;
HXDLIN( 765)							if ((in_byteOffset < 0)) {
HXDLIN( 765)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 765)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 765)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 765)							int bufferByteLength = buffer->length;
HXDLIN( 765)							int elementSize = _this->bytesPerElement;
HXDLIN( 765)							int newByteLength = bufferByteLength;
HXDLIN( 765)							if (::hx::IsNull( len )) {
HXDLIN( 765)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 765)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 765)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 765)								if ((newByteLength < 0)) {
HXDLIN( 765)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 765)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 765)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 765)								if ((newRange > bufferByteLength)) {
HXDLIN( 765)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 765)							_this->buffer = buffer;
HXDLIN( 765)							_this->byteOffset = in_byteOffset;
HXDLIN( 765)							_this->byteLength = newByteLength;
HXDLIN( 765)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 765)							this2 = _this;
            						}
            						else {
HXDLIN( 765)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 765)		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(this1,::lime::math::_Matrix4::Matrix4_Impl__obj::_new(this2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependScale,(void))

void Matrix4_Impl__obj::prependTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_777_prependTranslation)
HXLINE( 778)		 ::lime::utils::ArrayBufferView m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
HXLINE( 779)		::lime::math::_Matrix4::Matrix4_Impl__obj::set_position(m, ::lime::math::Vector4_obj::__alloc( HX_CTX ,x,y,z,null()));
HXLINE( 780)		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(this1,m);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependTranslation,(void))

 ::lime::math::Vector4 Matrix4_Impl__obj::transformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 v, ::lime::math::Vector4 result){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_871_transformVector)
HXLINE( 872)		if (::hx::IsNull( result )) {
HXLINE( 872)			result =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 873)		Float x = v->x;
HXDLIN( 873)		Float y = v->y;
HXDLIN( 873)		Float z = v->z;
HXLINE( 874)		Float _hx_tmp = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 874)		Float _hx_tmp1 = (_hx_tmp + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16))));
HXDLIN( 874)		Float _hx_tmp2 = (_hx_tmp1 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32))));
HXDLIN( 874)		result->x = (_hx_tmp2 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48)));
HXLINE( 875)		Float _hx_tmp3 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)));
HXDLIN( 875)		Float _hx_tmp4 = (_hx_tmp3 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20))));
HXDLIN( 875)		Float _hx_tmp5 = (_hx_tmp4 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36))));
HXDLIN( 875)		result->y = (_hx_tmp5 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52)));
HXLINE( 876)		Float _hx_tmp6 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8)));
HXDLIN( 876)		Float _hx_tmp7 = (_hx_tmp6 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24))));
HXDLIN( 876)		Float _hx_tmp8 = (_hx_tmp7 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40))));
HXDLIN( 876)		result->z = (_hx_tmp8 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)));
HXLINE( 877)		Float _hx_tmp9 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12)));
HXDLIN( 877)		Float _hx_tmp10 = (_hx_tmp9 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28))));
HXDLIN( 877)		Float _hx_tmp11 = (_hx_tmp10 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44))));
HXDLIN( 877)		result->w = (_hx_tmp11 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60)));
HXLINE( 878)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,transformVector,return )

void Matrix4_Impl__obj::transformVectors( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView ain, ::lime::utils::ArrayBufferView aout){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_887_transformVectors)
HXLINE( 888)		int i = 0;
HXLINE( 889)		Float x;
HXDLIN( 889)		Float y;
HXDLIN( 889)		Float z;
HXLINE( 891)		while(((i + 3) <= ain->length)){
HXLINE( 893)			x =  ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (i * 4)));
HXLINE( 894)			y =  ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + ((i + 1) * 4)));
HXLINE( 895)			z =  ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + ((i + 2) * 4)));
HXLINE( 897)			{
HXLINE( 897)				Float val = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 897)				Float val1 = (val + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16))));
HXDLIN( 897)				Float val2 = (val1 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32))));
HXDLIN( 897)				Float val3 = (val2 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48)));
HXDLIN( 897)				 ::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (i * 4)),val3);
            			}
HXLINE( 898)			{
HXLINE( 898)				Float val4 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4)));
HXDLIN( 898)				Float val5 = (val4 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20))));
HXDLIN( 898)				Float val6 = (val5 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36))));
HXDLIN( 898)				Float val7 = (val6 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52)));
HXDLIN( 898)				 ::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + ((i + 1) * 4)),val7);
            			}
HXLINE( 899)			{
HXLINE( 899)				Float val8 = (x *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8)));
HXDLIN( 899)				Float val9 = (val8 + (y *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24))));
HXDLIN( 899)				Float val10 = (val9 + (z *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40))));
HXDLIN( 899)				Float val11 = (val10 +  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)));
HXDLIN( 899)				 ::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + ((i + 2) * 4)),val11);
            			}
HXLINE( 901)			i = (i + 3);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,transformVectors,(void))

void Matrix4_Impl__obj::transpose( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_909_transpose)
HXLINE( 910)		{
HXLINE( 910)			Float temp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN( 910)			{
HXLINE( 910)				Float val =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 910)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val);
            			}
HXDLIN( 910)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),temp);
            		}
HXLINE( 911)		{
HXLINE( 911)			Float temp1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN( 911)			{
HXLINE( 911)				Float val1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN( 911)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val1);
            			}
HXDLIN( 911)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),temp1);
            		}
HXLINE( 912)		{
HXLINE( 912)			Float temp2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN( 912)			{
HXLINE( 912)				Float val2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 912)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val2);
            			}
HXDLIN( 912)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),temp2);
            		}
HXLINE( 913)		{
HXLINE( 913)			Float temp3 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 913)			{
HXLINE( 913)				Float val3 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXDLIN( 913)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val3);
            			}
HXDLIN( 913)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),temp3);
            		}
HXLINE( 914)		{
HXLINE( 914)			Float temp4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN( 914)			{
HXLINE( 914)				Float val4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXDLIN( 914)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val4);
            			}
HXDLIN( 914)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),temp4);
            		}
HXLINE( 915)		{
HXLINE( 915)			Float temp5 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
HXDLIN( 915)			{
HXLINE( 915)				Float val5 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXDLIN( 915)				 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val5);
            			}
HXDLIN( 915)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),temp5);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,transpose,(void))

 ::lime::utils::ArrayBufferView Matrix4_Impl__obj::_hx___getAxisRotation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z,Float degrees){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_919___getAxisRotation)
HXLINE( 920)		 ::lime::utils::ArrayBufferView m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
HXLINE( 922)		 ::lime::math::Vector4 a1 =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,x,y,z,null());
HXLINE( 923)		Float rad = (-(degrees) * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 924)		Float c = ::Math_obj::cos(rad);
HXLINE( 925)		Float s = ::Math_obj::sin(rad);
HXLINE( 926)		Float t = (((Float)1.0) - c);
HXLINE( 928)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,0,(c + ((a1->x * a1->x) * t)));
HXLINE( 929)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,5,(c + ((a1->y * a1->y) * t)));
HXLINE( 930)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,10,(c + ((a1->z * a1->z) * t)));
HXLINE( 932)		Float tmp1 = ((a1->x * a1->y) * t);
HXLINE( 933)		Float tmp2 = (a1->z * s);
HXLINE( 934)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,4,(tmp1 + tmp2));
HXLINE( 935)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,1,(tmp1 - tmp2));
HXLINE( 936)		tmp1 = ((a1->x * a1->z) * t);
HXLINE( 937)		tmp2 = (a1->y * s);
HXLINE( 938)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,8,(tmp1 - tmp2));
HXLINE( 939)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,2,(tmp1 + tmp2));
HXLINE( 940)		tmp1 = ((a1->y * a1->z) * t);
HXLINE( 941)		tmp2 = (a1->x * s);
HXLINE( 942)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,9,(tmp1 + tmp2));
HXLINE( 943)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,6,(tmp1 - tmp2));
HXLINE( 945)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix4_Impl__obj,_hx___getAxisRotation,return )

void Matrix4_Impl__obj::_hx___swap( ::lime::utils::ArrayBufferView this1,int a,int b){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_949___swap)
HXLINE( 950)		Float temp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (a * 4)));
HXLINE( 951)		{
HXLINE( 951)			Float val =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (b * 4)));
HXDLIN( 951)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (a * 4)),val);
            		}
HXLINE( 952)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (b * 4)),temp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,_hx___swap,(void))

Float Matrix4_Impl__obj::get_determinant( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_958_get_determinant)
HXDLIN( 958)		Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 958)		Float _hx_tmp1 = (_hx_tmp *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20)));
HXDLIN( 958)		Float _hx_tmp2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 958)		Float _hx_tmp3 = (_hx_tmp1 - (_hx_tmp2 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4))));
HXDLIN( 958)		Float _hx_tmp4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXDLIN( 958)		Float _hx_tmp5 = (_hx_tmp4 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60)));
HXDLIN( 958)		Float _hx_tmp6 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXDLIN( 958)		Float _hx_tmp7 = (_hx_tmp3 * (_hx_tmp5 - (_hx_tmp6 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44)))));
HXLINE( 959)		Float _hx_tmp8 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 959)		Float _hx_tmp9 = (_hx_tmp8 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36)));
HXDLIN( 959)		Float _hx_tmp10 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN( 959)		Float _hx_tmp11 = (_hx_tmp9 - (_hx_tmp10 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4))));
HXDLIN( 959)		Float _hx_tmp12 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 959)		Float _hx_tmp13 = (_hx_tmp12 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60)));
HXDLIN( 959)		Float _hx_tmp14 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXLINE( 958)		Float _hx_tmp15 = (_hx_tmp7 - (_hx_tmp11 * (_hx_tmp13 - (_hx_tmp14 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28))))));
HXLINE( 960)		Float _hx_tmp16 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 960)		Float _hx_tmp17 = (_hx_tmp16 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52)));
HXDLIN( 960)		Float _hx_tmp18 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 960)		Float _hx_tmp19 = (_hx_tmp17 - (_hx_tmp18 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4))));
HXDLIN( 960)		Float _hx_tmp20 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 960)		Float _hx_tmp21 = (_hx_tmp20 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44)));
HXDLIN( 960)		Float _hx_tmp22 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXLINE( 958)		Float _hx_tmp23 = (_hx_tmp15 + (_hx_tmp19 * (_hx_tmp21 - (_hx_tmp22 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28))))));
HXLINE( 961)		Float _hx_tmp24 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 961)		Float _hx_tmp25 = (_hx_tmp24 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36)));
HXDLIN( 961)		Float _hx_tmp26 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN( 961)		Float _hx_tmp27 = (_hx_tmp25 - (_hx_tmp26 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20))));
HXDLIN( 961)		Float _hx_tmp28 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN( 961)		Float _hx_tmp29 = (_hx_tmp28 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60)));
HXDLIN( 961)		Float _hx_tmp30 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXLINE( 958)		Float _hx_tmp31 = (_hx_tmp23 + (_hx_tmp27 * (_hx_tmp29 - (_hx_tmp30 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))))));
HXLINE( 962)		Float _hx_tmp32 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN( 962)		Float _hx_tmp33 = (_hx_tmp32 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52)));
HXDLIN( 962)		Float _hx_tmp34 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 962)		Float _hx_tmp35 = (_hx_tmp33 - (_hx_tmp34 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20))));
HXDLIN( 962)		Float _hx_tmp36 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN( 962)		Float _hx_tmp37 = (_hx_tmp36 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44)));
HXDLIN( 962)		Float _hx_tmp38 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXLINE( 958)		Float _hx_tmp39 = (_hx_tmp31 - (_hx_tmp35 * (_hx_tmp37 - (_hx_tmp38 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))))));
HXLINE( 963)		Float _hx_tmp40 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN( 963)		Float _hx_tmp41 = (_hx_tmp40 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52)));
HXDLIN( 963)		Float _hx_tmp42 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 963)		Float _hx_tmp43 = (_hx_tmp41 - (_hx_tmp42 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36))));
HXDLIN( 963)		Float _hx_tmp44 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN( 963)		Float _hx_tmp45 = (_hx_tmp44 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28)));
HXDLIN( 963)		Float _hx_tmp46 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXLINE( 958)		return (_hx_tmp39 + (_hx_tmp43 * (_hx_tmp45 - (_hx_tmp46 *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12))))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_determinant,return )

 ::lime::math::Vector4 Matrix4_Impl__obj::get_position( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_968_get_position)
HXDLIN( 968)		Float _hx_tmp =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 968)		Float _hx_tmp1 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXDLIN( 968)		return  ::lime::math::Vector4_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1, ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_position,return )

 ::lime::math::Vector4 Matrix4_Impl__obj::set_position( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 val){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_972_set_position)
HXLINE( 973)		{
HXLINE( 973)			Float val1 = val->x;
HXDLIN( 973)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val1);
            		}
HXLINE( 974)		{
HXLINE( 974)			Float val2 = val->y;
HXDLIN( 974)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val2);
            		}
HXLINE( 975)		{
HXLINE( 975)			Float val3 = val->z;
HXDLIN( 975)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val3);
            		}
HXLINE( 976)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,set_position,return )

Float Matrix4_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_981_get)
HXDLIN( 981)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * 4)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,get,return )

Float Matrix4_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_985_set)
HXLINE( 986)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * 4)),value);
HXLINE( 987)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,set,return )


Matrix4_Impl__obj::Matrix4_Impl__obj()
{
}

bool Matrix4_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__swap") ) { outValue = _hx___swap_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointAt") ) { outValue = pointAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"prepend") ) { outValue = prepend_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { outValue = copyRowTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transpose") ) { outValue = transpose_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appendScale") ) { outValue = appendScale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { outValue = copyRowFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromMatrix3") ) { outValue = fromMatrix3_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { outValue = copyColumnTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"prependScale") ) { outValue = prependScale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_position") ) { outValue = get_position_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_position") ) { outValue = set_position_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { outValue = interpolateTo_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { outValue = appendRotation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { outValue = copyColumnFrom_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prependRotation") ) { outValue = prependRotation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transformVector") ) { outValue = transformVector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { outValue = get_determinant_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { outValue = transformVectors_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { outValue = appendTranslation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getAxisRotation") ) { outValue = _hx___getAxisRotation_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { outValue = prependTranslation_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { outValue = deltaTransformVector_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Matrix4_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Matrix4_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &Matrix4_Impl__obj::_hx___identity,HX_("__identity",5e,b8,67,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Matrix4_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::_hx___identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix4_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::_hx___identity,"__identity");
};

#endif

::hx::Class Matrix4_Impl__obj::__mClass;

static ::String Matrix4_Impl__obj_sStaticFields[] = {
	HX_("__identity",5e,b8,67,5c),
	HX_("_new",61,15,1f,3f),
	HX_("append",da,e1,d3,8f),
	HX_("appendRotation",38,45,e8,cb),
	HX_("appendScale",50,66,45,b5),
	HX_("appendTranslation",37,e1,3d,d6),
	HX_("clone",5d,13,63,48),
	HX_("copyColumnFrom",75,97,b5,3a),
	HX_("copyColumnTo",c6,2e,f6,f6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyRowFrom",6f,45,8b,ef),
	HX_("copyRowTo",40,8a,62,73),
	HX_("create2D",ce,49,f4,2b),
	HX_("createOrtho",9c,4e,a8,5e),
	HX_("deltaTransformVector",37,02,9c,c2),
	HX_("fromMatrix3",88,a6,a7,2b),
	HX_("identity",3e,45,2f,b9),
	HX_("interpolate",c1,d4,32,1f),
	HX_("interpolateTo",9c,90,22,71),
	HX_("invert",16,e7,d8,9f),
	HX_("pointAt",63,a1,21,51),
	HX_("prepend",0e,97,e0,37),
	HX_("prependRotation",6c,4e,3b,e8),
	HX_("prependScale",9c,54,97,c4),
	HX_("prependTranslation",83,90,15,05),
	HX_("transformVector",4f,2b,b3,d2),
	HX_("transformVectors",44,ba,12,8a),
	HX_("transpose",79,50,2f,4c),
	HX_("__getAxisRotation",95,a5,44,7b),
	HX_("__swap",b3,8d,56,fb),
	HX_("get_determinant",2c,15,f7,f2),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null())
};

void Matrix4_Impl__obj::__register()
{
	Matrix4_Impl__obj _hx_dummy;
	Matrix4_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._Matrix4.Matrix4_Impl_",e6,fe,f9,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix4_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Matrix4_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix4_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Matrix4_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix4_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix4_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix4_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix4_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_11_boot)
HXDLIN(  11)		_hx___identity = ::Array_obj< Float >::fromData( _hx_array_data_cbf9fee6_38,16);
            	}
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4
