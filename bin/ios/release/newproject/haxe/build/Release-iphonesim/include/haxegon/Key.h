#ifndef INCLUDED_haxegon_Key
#define INCLUDED_haxegon_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Key)
namespace haxegon{


class Key_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Key_obj OBJ_;

	public:
		Key_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxegon.Key","\xf1","\xf2","\x17","\x3a"); }
		::String __ToString() const { return HX_HCSTRING("Key.","\xcf","\x0d","\xe0","\x31") + tag; }

		static ::haxegon::Key A;
		static inline ::haxegon::Key A_dyn() { return A; }
		static ::haxegon::Key ALT;
		static inline ::haxegon::Key ALT_dyn() { return ALT; }
		static ::haxegon::Key B;
		static inline ::haxegon::Key B_dyn() { return B; }
		static ::haxegon::Key BACKSLASH;
		static inline ::haxegon::Key BACKSLASH_dyn() { return BACKSLASH; }
		static ::haxegon::Key BACKSPACE;
		static inline ::haxegon::Key BACKSPACE_dyn() { return BACKSPACE; }
		static ::haxegon::Key C;
		static inline ::haxegon::Key C_dyn() { return C; }
		static ::haxegon::Key CAPSLOCK;
		static inline ::haxegon::Key CAPSLOCK_dyn() { return CAPSLOCK; }
		static ::haxegon::Key COMMA;
		static inline ::haxegon::Key COMMA_dyn() { return COMMA; }
		static ::haxegon::Key CONTROL;
		static inline ::haxegon::Key CONTROL_dyn() { return CONTROL; }
		static ::haxegon::Key D;
		static inline ::haxegon::Key D_dyn() { return D; }
		static ::haxegon::Key DELETE;
		static inline ::haxegon::Key DELETE_dyn() { return DELETE; }
		static ::haxegon::Key DOWN;
		static inline ::haxegon::Key DOWN_dyn() { return DOWN; }
		static ::haxegon::Key E;
		static inline ::haxegon::Key E_dyn() { return E; }
		static ::haxegon::Key EIGHT;
		static inline ::haxegon::Key EIGHT_dyn() { return EIGHT; }
		static ::haxegon::Key END;
		static inline ::haxegon::Key END_dyn() { return END; }
		static ::haxegon::Key ENTER;
		static inline ::haxegon::Key ENTER_dyn() { return ENTER; }
		static ::haxegon::Key ESCAPE;
		static inline ::haxegon::Key ESCAPE_dyn() { return ESCAPE; }
		static ::haxegon::Key F;
		static inline ::haxegon::Key F_dyn() { return F; }
		static ::haxegon::Key F1;
		static inline ::haxegon::Key F1_dyn() { return F1; }
		static ::haxegon::Key F10;
		static inline ::haxegon::Key F10_dyn() { return F10; }
		static ::haxegon::Key F11;
		static inline ::haxegon::Key F11_dyn() { return F11; }
		static ::haxegon::Key F12;
		static inline ::haxegon::Key F12_dyn() { return F12; }
		static ::haxegon::Key F2;
		static inline ::haxegon::Key F2_dyn() { return F2; }
		static ::haxegon::Key F3;
		static inline ::haxegon::Key F3_dyn() { return F3; }
		static ::haxegon::Key F4;
		static inline ::haxegon::Key F4_dyn() { return F4; }
		static ::haxegon::Key F5;
		static inline ::haxegon::Key F5_dyn() { return F5; }
		static ::haxegon::Key F6;
		static inline ::haxegon::Key F6_dyn() { return F6; }
		static ::haxegon::Key F7;
		static inline ::haxegon::Key F7_dyn() { return F7; }
		static ::haxegon::Key F8;
		static inline ::haxegon::Key F8_dyn() { return F8; }
		static ::haxegon::Key F9;
		static inline ::haxegon::Key F9_dyn() { return F9; }
		static ::haxegon::Key FIVE;
		static inline ::haxegon::Key FIVE_dyn() { return FIVE; }
		static ::haxegon::Key FOUR;
		static inline ::haxegon::Key FOUR_dyn() { return FOUR; }
		static ::haxegon::Key G;
		static inline ::haxegon::Key G_dyn() { return G; }
		static ::haxegon::Key H;
		static inline ::haxegon::Key H_dyn() { return H; }
		static ::haxegon::Key HOME;
		static inline ::haxegon::Key HOME_dyn() { return HOME; }
		static ::haxegon::Key I;
		static inline ::haxegon::Key I_dyn() { return I; }
		static ::haxegon::Key J;
		static inline ::haxegon::Key J_dyn() { return J; }
		static ::haxegon::Key K;
		static inline ::haxegon::Key K_dyn() { return K; }
		static ::haxegon::Key L;
		static inline ::haxegon::Key L_dyn() { return L; }
		static ::haxegon::Key LBRACKET;
		static inline ::haxegon::Key LBRACKET_dyn() { return LBRACKET; }
		static ::haxegon::Key LEFT;
		static inline ::haxegon::Key LEFT_dyn() { return LEFT; }
		static ::haxegon::Key M;
		static inline ::haxegon::Key M_dyn() { return M; }
		static ::haxegon::Key MINUS;
		static inline ::haxegon::Key MINUS_dyn() { return MINUS; }
		static ::haxegon::Key N;
		static inline ::haxegon::Key N_dyn() { return N; }
		static ::haxegon::Key NINE;
		static inline ::haxegon::Key NINE_dyn() { return NINE; }
		static ::haxegon::Key O;
		static inline ::haxegon::Key O_dyn() { return O; }
		static ::haxegon::Key ONE;
		static inline ::haxegon::Key ONE_dyn() { return ONE; }
		static ::haxegon::Key P;
		static inline ::haxegon::Key P_dyn() { return P; }
		static ::haxegon::Key PAGEDOWN;
		static inline ::haxegon::Key PAGEDOWN_dyn() { return PAGEDOWN; }
		static ::haxegon::Key PAGEUP;
		static inline ::haxegon::Key PAGEUP_dyn() { return PAGEUP; }
		static ::haxegon::Key PERIOD;
		static inline ::haxegon::Key PERIOD_dyn() { return PERIOD; }
		static ::haxegon::Key PLUS;
		static inline ::haxegon::Key PLUS_dyn() { return PLUS; }
		static ::haxegon::Key Q;
		static inline ::haxegon::Key Q_dyn() { return Q; }
		static ::haxegon::Key QUOTE;
		static inline ::haxegon::Key QUOTE_dyn() { return QUOTE; }
		static ::haxegon::Key R;
		static inline ::haxegon::Key R_dyn() { return R; }
		static ::haxegon::Key RBRACKET;
		static inline ::haxegon::Key RBRACKET_dyn() { return RBRACKET; }
		static ::haxegon::Key RIGHT;
		static inline ::haxegon::Key RIGHT_dyn() { return RIGHT; }
		static ::haxegon::Key S;
		static inline ::haxegon::Key S_dyn() { return S; }
		static ::haxegon::Key SEMICOLON;
		static inline ::haxegon::Key SEMICOLON_dyn() { return SEMICOLON; }
		static ::haxegon::Key SEVEN;
		static inline ::haxegon::Key SEVEN_dyn() { return SEVEN; }
		static ::haxegon::Key SHIFT;
		static inline ::haxegon::Key SHIFT_dyn() { return SHIFT; }
		static ::haxegon::Key SIX;
		static inline ::haxegon::Key SIX_dyn() { return SIX; }
		static ::haxegon::Key SLASH;
		static inline ::haxegon::Key SLASH_dyn() { return SLASH; }
		static ::haxegon::Key SPACE;
		static inline ::haxegon::Key SPACE_dyn() { return SPACE; }
		static ::haxegon::Key T;
		static inline ::haxegon::Key T_dyn() { return T; }
		static ::haxegon::Key TAB;
		static inline ::haxegon::Key TAB_dyn() { return TAB; }
		static ::haxegon::Key THREE;
		static inline ::haxegon::Key THREE_dyn() { return THREE; }
		static ::haxegon::Key TWO;
		static inline ::haxegon::Key TWO_dyn() { return TWO; }
		static ::haxegon::Key U;
		static inline ::haxegon::Key U_dyn() { return U; }
		static ::haxegon::Key UP;
		static inline ::haxegon::Key UP_dyn() { return UP; }
		static ::haxegon::Key V;
		static inline ::haxegon::Key V_dyn() { return V; }
		static ::haxegon::Key W;
		static inline ::haxegon::Key W_dyn() { return W; }
		static ::haxegon::Key X;
		static inline ::haxegon::Key X_dyn() { return X; }
		static ::haxegon::Key Y;
		static inline ::haxegon::Key Y_dyn() { return Y; }
		static ::haxegon::Key Z;
		static inline ::haxegon::Key Z_dyn() { return Z; }
		static ::haxegon::Key ZERO;
		static inline ::haxegon::Key ZERO_dyn() { return ZERO; }
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Key */ 
