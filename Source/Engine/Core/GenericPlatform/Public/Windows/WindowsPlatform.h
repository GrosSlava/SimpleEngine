
#pragma once

#ifndef GEN_PLATFORM_H
	#error Do not include WindowsPlatform directly!
#endif

#define PLATFORM_WINDOWS 1




/*
	Windows specific types
*/
struct FWindowsPlatformTypes : public FGenericPlatformTypes
{
#ifdef WIN64
	typedef unsigned __int64 SIZE_T;
	typedef __int64 SSIZE_T;
#else
	typedef unsigned long SIZE_T;
	typedef long SSIZE_T;
#endif
};

typedef FWindowsPlatformTypes FPlatformTypes;




#define PLATFORM_CPU_X86_FAMILY						1
#define PLATFORM_CPU_ARM_FAMILY						0
#define PLATFORM_HAS_CPUID							1


#define PLATFORM_DESKTOP							1

#ifdef WIN64
	#define PLATFORM_64BITS							1
	#define PLATFORM_32BITS							0
#else
#ifdef WIN32
	#define PLATFORM_64BITS							0
	#define PLATFORM_32BITS							1
#endif
#endif


#define USING_ADDRESS_SANITISER						0
#define PLATFORM_LITTLE_ENDIAN						1
#define PLATFORM_EXCEPTIONS_DISABLED				0
#define PLATFORM_SEH_EXCEPTIONS_DISABLED			0
#define PLATFORM_ENABLE_VECTORINTRINSICS			1
#define PLATFORM_MAYBE_HAS_SSE4_1					1
#define PLATFORM_ALWAYS_HAS_SSE4_1					0
#define PLATFORM_MAYBE_HAS_AVX						0
#define PLATFORM_ALWAYS_HAS_AVX						0
#define PLATFORM_ALWAYS_HAS_FMA3					0
#define PLATFORM_WEAKLY_CONSISTENT_MEMORY			0
#define PLATFORM_HAS_128BIT_ATOMICS					1
#define PLATFORM_SUPPORTS_COLORIZED_OUTPUT_DEVICE	1

#ifdef _MSC_VER
	#define PLATFORM_COMPILER_HAS_IF_CONSTEXPR		1
#endif


//...................Engine features support........................//

#define PLATFORM_SUPPORTS_TEXTURE_STREAMING			1
#define PLATFORM_SUPPORTS_VIRTUAL_TEXTURE_STREAMING	1
#define PLATFORM_SUPPORTS_VIRTUAL_TEXTURES			1
#define PLATFORM_SUPPORTS_VARIABLE_RATE_SHADING		1
#define PLATFORM_SUPPORTS_GEOMETRY_SHADERS			1
#define PLATFORM_SUPPORTS_TESSELLATION_SHADERS		1
#define PLATFORM_SUPPORTS_BORDERLESS_WINDOW			1
#define PLATFORM_SUPPORTS_MULTIPLE_NATIVE_WINDOWS	1
#define PLATFORM_HAS_TOUCH_MAIN_SCREEN				0

//..................................................................//


#define PLATFORM_TCHAR_IS_1_BYTE					0
#define PLATFORM_TCHAR_IS_4_BYTES					0
#define PLATFORM_WCHAR_IS_4_BYTES					0
#define PLATFORM_TCHAR_IS_CHAR16					0

