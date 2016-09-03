#ifndef INCLUDED_openfl_display_GraphicsFillType
#define INCLUDED_openfl_display_GraphicsFillType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,GraphicsFillType)
namespace openfl{
namespace display{


class GraphicsFillType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GraphicsFillType_obj OBJ_;

	public:
		GraphicsFillType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.display.GraphicsFillType","\x32","\xcb","\x26","\xbc"); }
		::String __ToString() const { return HX_HCSTRING("GraphicsFillType.","\x46","\x4c","\xb1","\xb4") + tag; }

		static ::openfl::display::GraphicsFillType BITMAP_FILL;
		static inline ::openfl::display::GraphicsFillType BITMAP_FILL_dyn() { return BITMAP_FILL; }
		static ::openfl::display::GraphicsFillType END_FILL;
		static inline ::openfl::display::GraphicsFillType END_FILL_dyn() { return END_FILL; }
		static ::openfl::display::GraphicsFillType GRADIENT_FILL;
		static inline ::openfl::display::GraphicsFillType GRADIENT_FILL_dyn() { return GRADIENT_FILL; }
		static ::openfl::display::GraphicsFillType SOLID_FILL;
		static inline ::openfl::display::GraphicsFillType SOLID_FILL_dyn() { return SOLID_FILL; }
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsFillType */ 
