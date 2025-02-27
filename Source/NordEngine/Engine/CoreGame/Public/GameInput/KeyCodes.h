// Copyright Nord Engine. All Rights Reserved.
#pragma once




// Keyboard keys
#define VK_BACKSPACE 0x08 // Backspace
#define VK_ESCAPE 0x1B	  // Esc
#define VK_RETURN 0x0D	  // Enter
#define VK_SPACE 0x20	  // Space
#define VK_TAB 0x09		  // Tab
#define VK_SNAPSHOT 0x2C  // Print Screen
#define VK_HELP 0x2F	  // Help

#define VK_CAPITAL 0x14 // Caps Lock
#define VK_NUMLOCK 0x90 // Num Lock
#define VK_SCROLL 0x91	// Scrol Lock

#define VK_ADD 0x6B		 // Numpad +
#define VK_SUBTRACT 0x6D // Numpad -
#define VK_DECIMAL 0x6E	 // Numpad .
#define VK_DIVIDE 0x6F	 // Numpad /
#define VK_MULTIPLY 0x6A // Numpad *
#define VK_NUMPAD0 0x60	 // Numpad 0
#define VK_NUMPAD1 0x61	 // Numpad 1
#define VK_NUMPAD2 0x62	 // Numpad 2
#define VK_NUMPAD3 0x63	 // Numpad 3
#define VK_NUMPAD4 0x64	 // Numpad 4
#define VK_NUMPAD5 0x65	 // Numpad 5
#define VK_NUMPAD6 0x66	 // Numpad 6
#define VK_NUMPAD7 0x67	 // Numpad 7
#define VK_NUMPAD8 0x68	 // Numpad 8
#define VK_NUMPAD9 0x69	 // Numpad 9

#define VK_DOWN 0x28  // Arrow Down
#define VK_LEFT 0x25  // Arrow Left
#define VK_RIGHT 0x27 // Arrow Right
#define VK_UP 0x26	  // Arrow Up

#define VK_DELETE 0x2E // Delete
#define VK_END 0x23	   // End
#define VK_PRIOR 0x21  // Page Up
#define VK_NEXT 0x22   // Page Down
#define VK_HOME 0x24   // Home

#define VK_RCONTROL 0xA3 // Right Ctrl
#define VK_RMENU 0xA5	 // Right Alt
#define VK_RSHIFT 0xA1	 // Right Shift
#define VK_RWIN 0x5C	 // Right Win
#define VK_LCONTROL 0xA2 // Left Ctrl
#define VK_LMENU 0xA4	 // Left Alt
#define VK_LSHIFT 0xA0	 // Left Shift
#define VK_LWIN 0x5B	 // Left Win
#define VK_SHIFT 0x10	 // L and R Shift
#define VK_CONTROL 0x11	 // L and R Ctrl

#define VK_KEY_0 0x30 // 0
#define VK_KEY_1 0x31 // 1
#define VK_KEY_2 0x32 // 2
#define VK_KEY_3 0x33 // 3
#define VK_KEY_4 0x34 // 4
#define VK_KEY_5 0x35 // 5
#define VK_KEY_6 0x36 // 6
#define VK_KEY_7 0x37 // 7
#define VK_KEY_8 0x38 // 8
#define VK_KEY_9 0x39 // 9

#define VK_KEY_A 0x41 // A
#define VK_KEY_B 0x42 // B
#define VK_KEY_C 0x43 // C
#define VK_KEY_D 0x44 // D
#define VK_KEY_E 0x45 // E
#define VK_KEY_F 0x46 // F
#define VK_KEY_G 0x47 // G
#define VK_KEY_H 0x48 // H
#define VK_KEY_I 0x49 // I
#define VK_KEY_J 0x4A // J
#define VK_KEY_K 0x4B // K
#define VK_KEY_L 0x4C // L
#define VK_KEY_M 0x4D // M
#define VK_KEY_N 0x4E // N
#define VK_KEY_O 0x4F // O
#define VK_KEY_P 0x50 // P
#define VK_KEY_Q 0x51 // Q
#define VK_KEY_R 0x52 // R
#define VK_KEY_S 0x53 // S
#define VK_KEY_T 0x54 // T
#define VK_KEY_U 0x55 // U
#define VK_KEY_V 0x56 // V
#define VK_KEY_W 0x57 // W
#define VK_KEY_X 0x58 // X
#define VK_KEY_Y 0x59 // Y
#define VK_KEY_Z 0x5A // Z

#define VK_F1 0x70	// F1
#define VK_F2 0x71	// F2
#define VK_F3 0x72	// F3
#define VK_F4 0x73	// F4
#define VK_F5 0x74	// F5
#define VK_F6 0x75	// F6
#define VK_F7 0x76	// F7
#define VK_F8 0x77	// F8
#define VK_F9 0x78	// F9
#define VK_F10 0x79 // F10
#define VK_F11 0x7A // F11
#define VK_F12 0x7B // F12
#define VK_F13 0x7C // F13
#define VK_F14 0x7D // F14
#define VK_F15 0x7E // F15
#define VK_F16 0x7F // F16
#define VK_F17 0x80 // F17
#define VK_F18 0x81 // F18
#define VK_F19 0x82 // F19
#define VK_F20 0x83 // F20
#define VK_F21 0x84 // F21
#define VK_F22 0x85 // F22
#define VK_F23 0x86 // F23
#define VK_F24 0x87 // F24

#define VK_VOLUME_DOWN 0xAE // Volume Down
#define VK_VOLUME_MUTE 0xAD // Volume Mute
#define VK_VOLUME_UP 0xAF	// Volume Up

#define VK_MEDIA_NEXT_TRACK 0xB0 // Next Track
#define VK_MEDIA_PLAY_PAUSE 0xB3 // Play / Pause
#define VK_MEDIA_PREV_TRACK 0xB1 // Previous Track
#define VK_MEDIA_STOP 0xB2		 // Stop

#define VK_OEM_1 0xBA	  // OEM_1(:;)
#define VK_OEM_102 0xE2	  // OEM_102(> < )
#define VK_OEM_2 0xBF	  // OEM_2(? / )
#define VK_OEM_3 0xC0	  // OEM_3(~`)
#define VK_OEM_4 0xDB	  // OEM_4({ [)
#define VK_OEM_5 0xDC	  // OEM_5(| \)
#define VK_OEM_6 0xDD	  // OEM_6(}] )
#define VK_OEM_7 0xDE	  // OEM_7(" ')
#define VK_OEM_COMMA 0xBC // OEM_COMMA(< , )


// Mouse keys
#define VK_LBUTTON 0x01 // Left Button
#define VK_MBUTTON 0x04 // Middle Button
#define VK_RBUTTON 0x02 // Right Button



/**
	Enumerated keyboard and mouse keys.
*/
enum class EKey
{
	A = 0,	   // The A key
	B,		   // The B key
	C,		   // The C key
	D,		   // The D key
	E,		   // The E key
	F,		   // The F key
	G,		   // The G key
	H,		   // The H key
	I,		   // The I key
	J,		   // The J key
	K,		   // The K key
	L,		   // The L key
	M,		   // The M key
	N,		   // The N key
	O,		   // The O key
	P,		   // The P key
	Q,		   // The Q key
	R,		   // The R key
	S,		   // The S key
	T,		   // The T key
	U,		   // The U key
	V,		   // The V key
	W,		   // The W key
	X,		   // The X key
	Y,		   // The Y key
	Z,		   // The Z key
	Num0,	   // The 0 key
	Num1,	   // The 1 key
	Num2,	   // The 2 key
	Num3,	   // The 3 key
	Num4,	   // The 4 key
	Num5,	   // The 5 key
	Num6,	   // The 6 key
	Num7,	   // The 7 key
	Num8,	   // The 8 key
	Num9,	   // The 9 key
	Escape,	   // The Escape key
	LControl,  // The left Control key
	LShift,	   // The left Shift key
	LAlt,	   // The left Alt key
	LSystem,   // The left OS specific key: window (Windows and Linux), apple (MacOS X), ...
	RControl,  // The right Control key
	RShift,	   // The right Shift key
	RAlt,	   // The right Alt key
	RSystem,   // The right OS specific key: window (Windows and Linux), apple (MacOS X), ...
	Menu,	   // The Menu key
	LBracket,  // The [ key
	RBracket,  // The ] key
	Semicolon, // The ; key
	Comma,	   // The , key
	Period,	   // The . key
	Quote,	   // The ' key
	Slash,	   // The / key
	Backslash, // The \ key
	Tilde,	   // The ~ key
	Equal,	   // The = key
	Hyphen,	   // The - key (hyphen)
	Space,	   // The Space key
	Enter,	   // The Enter/Return keys
	Backspace, // The Backspace key
	Tab,	   // The Tabulation key
	PageUp,	   // The Page up key
	PageDown,  // The Page down key
	End,	   // The End key
	Home,	   // The Home key
	Insert,	   // The Insert key
	Delete,	   // The Delete key
	Add,	   // The + key
	Subtract,  // The - key (minus, usually from numpad)
	Multiply,  // The * key
	Divide,	   // The / key
	Left,	   // Left arrow
	Right,	   // Right arrow
	Up,		   // Up arrow
	Down,	   // Down arrow
	Numpad0,   // The numpad 0 key
	Numpad1,   // The numpad 1 key
	Numpad2,   // The numpad 2 key
	Numpad3,   // The numpad 3 key
	Numpad4,   // The numpad 4 key
	Numpad5,   // The numpad 5 key
	Numpad6,   // The numpad 6 key
	Numpad7,   // The numpad 7 key
	Numpad8,   // The numpad 8 key
	Numpad9,   // The numpad 9 key
	F1,		   // The F1 key
	F2,		   // The F2 key
	F3,		   // The F3 key
	F4,		   // The F4 key
	F5,		   // The F5 key
	F6,		   // The F6 key
	F7,		   // The F7 key
	F8,		   // The F8 key
	F9,		   // The F9 key
	F10,	   // The F10 key
	F11,	   // The F11 key
	F12,	   // The F12 key
	F13,	   // The F13 key
	F14,	   // The F14 key
	F15,	   // The F15 key
	Pause,	   // The Pause key
	KeyCount,  // The total number of keyboard keys

	MouseLeft = KeyCount,						   // The left mouse button
	MouseRight,									   // The right mouse button
	MouseMiddle,								   // The middle (wheel) mouse button
	MouseButtonCount = MouseMiddle + 1 - KeyCount, // The total number of mouse buttons

	TotalKeysCount // The total number of all keys
};



struct FKey
{
public:

	FKey() = delete;
	explicit FKey(EKey InKey) : Key(InKey) { }
	explicit FKey(int VK)
	{
		switch( VK )
		{
		case VK_KEY_A:
		{
			Key = EKey::A;
			return;
		}
		case VK_KEY_B:
		{
			Key = EKey::B;
			return;
		}
		case VK_KEY_C:
		{
			Key = EKey::C;
			return;
		}
		case VK_KEY_D:
		{
			Key = EKey::D;
			return;
		}
		case VK_KEY_E:
		{
			Key = EKey::E;
			return;
		}
		case VK_KEY_F:
		{
			Key = EKey::F;
			return;
		}
		case VK_KEY_G:
		{
			Key = EKey::G;
			return;
		}
		case VK_KEY_H:
		{
			Key = EKey::H;
			return;
		}
		case VK_KEY_I:
		{
			Key = EKey::I;
			return;
		}
		case VK_KEY_J:
		{
			Key = EKey::J;
			return;
		}
		case VK_KEY_K:
		{
			Key = EKey::K;
			return;
		}
		case VK_KEY_L:
		{
			Key = EKey::L;
			return;
		}
		case VK_KEY_M:
		{
			Key = EKey::M;
			return;
		}
		case VK_KEY_N:
		{
			Key = EKey::N;
			return;
		}
		case VK_KEY_O:
		{
			Key = EKey::O;
			return;
		}
		case VK_KEY_P:
		{
			Key = EKey::P;
			return;
		}
		case VK_KEY_Q:
		{
			Key = EKey::Q;
			return;
		}
		case VK_KEY_R:
		{
			Key = EKey::R;
			return;
		}
		case VK_KEY_S:
		{
			Key = EKey::S;
			return;
		}
		case VK_KEY_T:
		{
			Key = EKey::T;
			return;
		}
		case VK_KEY_U:
		{
			Key = EKey::U;
			return;
		}
		case VK_KEY_V:
		{
			Key = EKey::V;
			return;
		}
		case VK_KEY_W:
		{
			Key = EKey::W;
			return;
		}
		case VK_KEY_X:
		{
			Key = EKey::X;
			return;
		}
		case VK_KEY_Y:
		{
			Key = EKey::Y;
			return;
		}
		case VK_KEY_Z:
		{
			Key = EKey::Z;
			return;
		}
		case VK_KEY_0:
		{
			Key = EKey::Num0;
			return;
		}
		case VK_KEY_1:
		{
			Key = EKey::Num1;
			return;
		}
		case VK_KEY_2:
		{
			Key = EKey::Num2;
			return;
		}
		case VK_KEY_3:
		{
			Key = EKey::Num3;
			return;
		}
		case VK_KEY_4:
		{
			Key = EKey::Num4;
			return;
		}
		case VK_KEY_5:
		{
			Key = EKey::Num5;
			return;
		}
		case VK_KEY_6:
		{
			Key = EKey::Num6;
			return;
		}
		case VK_KEY_7:
		{
			Key = EKey::Num7;
			return;
		}
		case VK_KEY_8:
		{
			Key = EKey::Num8;
			return;
		}
		case VK_KEY_9:
		{
			Key = EKey::Num9;
			return;
		}
		default:
		{
			Key = EKey::KeyCount;
			return;
		}
		}
		//TODO
	}

public:

	EKey Key = EKey::KeyCount;
};
