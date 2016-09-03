#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineBitmapStyleView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_LineBitmapStyleView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,LineBitmapStyleView_Impl_)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  LineBitmapStyleView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LineBitmapStyleView_Impl__obj OBJ_;
		LineBitmapStyleView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LineBitmapStyleView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineBitmapStyleView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LineBitmapStyleView_Impl_","\x73","\xb1","\xc8","\x6b"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static ::openfl::display::BitmapData get_bitmap( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_bitmap_dyn();

		static ::openfl::geom::Matrix get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_matrix_dyn();

		static bool get_repeat( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_repeat_dyn();

		static bool get_smooth( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_smooth_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_LineBitmapStyleView_Impl_ */ 
