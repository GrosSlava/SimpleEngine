// Copyright Nord Engine. All Rights Reserved.
#pragma once

//=====================================================================================================================
// Implementation of a minimal subset of the Windows API required for inline function definitions and platform-specific
// interfaces in Core. Use of this file allows avoiding including large platform headers in the public engine API.
//
// Win32 API functions are declared in the "Windows" namespace to avoid conflicts if the real Windows.h is included
// later, but are mapped to the same imported symbols by the linker due to C-style linkage.
//=====================================================================================================================

#include "GenericPlatform.h"

#if !PLATFORM_WINDOWS
#error PLATFORM_WINDOWS not defined!
#endif




PRAGMA_PUSH_PLATFORM_DEFAULT_PACKING

/*
	With STRICT enabled, handles are implemented as opaque struct pointers. 
	We can prototype these structs here and typedef them under the Windows namespace below.
	Since typedefs are only aliases rather than types in their own 
	right, this allows using handles from the Windows:: namespace interchangably with their native definition.
*/
struct HINSTANCE__;
struct HWND__;
struct HKEY__;
struct HDC__;
struct HICON__;
struct _RTL_SRWLOCK;

// Other types
struct tagPROCESSENTRY32W;
struct _EXCEPTION_POINTERS;
struct _OVERLAPPED;
struct _RTL_CRITICAL_SECTION;
union _LARGE_INTEGER;

// Global constants
#define WINDOWS_MAX_PATH 260
#define WINDOWS_PF_COMPARE_EXCHANGE128 14

// Standard calling convention for Win32 functions
#define WINAPI __stdcall
#define MINIMAL_WINDOWS_API extern "C" __declspec(dllimport)


/**
	Minimal subset of the Windows API required for interfaces and inline functions.
*/
namespace Windows
{
// Typedefs for basic Windows types
typedef int32 BOOL;
typedef unsigned long DWORD;
typedef DWORD* LPDWORD;
typedef long LONG;
typedef long* LPLONG;
typedef int64 LONGLONG;
typedef LONGLONG* LPLONGLONG;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef const wchar_t* LPCTSTR;

// Typedefs for standard handles
typedef void* HANDLE;
typedef HINSTANCE__* HINSTANCE;
typedef HINSTANCE HMODULE;
typedef HWND__* HWND;
typedef HKEY__* HKEY;
typedef HDC__* HDC;
typedef HICON__* HICON;
typedef HICON__* HCURSOR;

// Other typedefs
typedef tagPROCESSENTRY32W PROCESSENTRY32;
typedef _EXCEPTION_POINTERS* LPEXCEPTION_POINTERS;
typedef _RTL_CRITICAL_SECTION* LPCRITICAL_SECTION;
typedef _OVERLAPPED* LPOVERLAPPED;
typedef _LARGE_INTEGER* LPLARGE_INTEGER;

typedef _RTL_SRWLOCK RTL_SRWLOCK, *PRTL_SRWLOCK;
typedef RTL_SRWLOCK* PSRWLOCK;

// Opaque SRWLOCK structure
struct SRWLOCK
{
	void* Ptr;
};

// Constants
static const BOOL TRUE = 1;
static const BOOL FALSE = 0;

// For structures which are opaque
struct CRITICAL_SECTION
{
	void* Opaque1[1];
	long Opaque2[2];
	void* Opaque3[3];
};
struct OVERLAPPED
{
	void* Opaque[3];
	unsigned long Opaque2[2];
};
union LARGE_INTEGER
{
	struct
	{
		DWORD LowPart;
		LONG HighPart;
	};
	LONGLONG QuadPart;
};



// Modules
MINIMAL_WINDOWS_API HMODULE WINAPI LoadLibraryW(LPCTSTR lpFileName);
MINIMAL_WINDOWS_API BOOL WINAPI FreeLibrary(HMODULE hModule);


// Critical sections
MINIMAL_WINDOWS_API void WINAPI InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
MINIMAL_WINDOWS_API BOOL WINAPI InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount);
MINIMAL_WINDOWS_API DWORD WINAPI SetCriticalSectionSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount);
MINIMAL_WINDOWS_API BOOL WINAPI TryEnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
MINIMAL_WINDOWS_API void WINAPI EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
MINIMAL_WINDOWS_API void WINAPI LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
MINIMAL_WINDOWS_API void WINAPI DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);

FORCEINLINE void WINAPI InitializeCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
	Windows::InitializeCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}
FORCEINLINE BOOL WINAPI InitializeCriticalSectionAndSpinCount(CRITICAL_SECTION* lpCriticalSection, DWORD dwSpinCount)
{
	return Windows::InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection, dwSpinCount);
}
FORCEINLINE DWORD WINAPI SetCriticalSectionSpinCount(CRITICAL_SECTION* lpCriticalSection, DWORD dwSpinCount)
{
	return Windows::SetCriticalSectionSpinCount((LPCRITICAL_SECTION)lpCriticalSection, dwSpinCount);
}
FORCEINLINE BOOL WINAPI TryEnterCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
	return Windows::TryEnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}
FORCEINLINE void WINAPI EnterCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
	Windows::EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}
FORCEINLINE void WINAPI LeaveCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
	Windows::LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}
FORCEINLINE void WINAPI DeleteCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
	Windows::DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}


MINIMAL_WINDOWS_API void WINAPI InitializeSRWLock(PSRWLOCK SRWLock);
MINIMAL_WINDOWS_API void WINAPI AcquireSRWLockShared(PSRWLOCK SRWLock);
MINIMAL_WINDOWS_API void WINAPI ReleaseSRWLockShared(PSRWLOCK SRWLock);
MINIMAL_WINDOWS_API void WINAPI AcquireSRWLockExclusive(PSRWLOCK SRWLock);
MINIMAL_WINDOWS_API void WINAPI ReleaseSRWLockExclusive(PSRWLOCK SRWLock);

FORCEINLINE void WINAPI InitializeSRWLock(SRWLOCK* SRWLock)
{
	Windows::InitializeSRWLock((PSRWLOCK)SRWLock);
}
FORCEINLINE void WINAPI AcquireSRWLockShared(SRWLOCK* SRWLock)
{
	Windows::AcquireSRWLockShared((PSRWLOCK)SRWLock);
}
FORCEINLINE void WINAPI ReleaseSRWLockShared(SRWLOCK* SRWLock)
{
	Windows::ReleaseSRWLockShared((PSRWLOCK)SRWLock);
}
FORCEINLINE void WINAPI AcquireSRWLockExclusive(SRWLOCK* SRWLock)
{
	Windows::AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
}
FORCEINLINE void WINAPI ReleaseSRWLockExclusive(SRWLOCK* SRWLock)
{
	Windows::ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
}


// I/O
MINIMAL_WINDOWS_API BOOL WINAPI ConnectNamedPipe(HANDLE hNamedPipe, LPOVERLAPPED lpOverlapped);
MINIMAL_WINDOWS_API BOOL WINAPI GetOverlappedResult(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait);
MINIMAL_WINDOWS_API BOOL WINAPI WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
MINIMAL_WINDOWS_API BOOL WINAPI ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);

FORCEINLINE BOOL WINAPI ConnectNamedPipe(HANDLE hNamedPipe, OVERLAPPED* lpOverlapped)
{
	return Windows::ConnectNamedPipe(hNamedPipe, (LPOVERLAPPED)lpOverlapped);
}
FORCEINLINE BOOL WINAPI GetOverlappedResult(HANDLE hFile, OVERLAPPED* lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait)
{
	return Windows::GetOverlappedResult(hFile, (LPOVERLAPPED)lpOverlapped, lpNumberOfBytesTransferred, bWait);
}
FORCEINLINE BOOL WINAPI WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, OVERLAPPED* lpOverlapped)
{
	return Windows::WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, (LPOVERLAPPED)lpOverlapped);
}
FORCEINLINE BOOL WINAPI ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, OVERLAPPED* lpOverlapped)
{
	return Windows::ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, (LPOVERLAPPED)lpOverlapped);
}


// Timing
MINIMAL_WINDOWS_API BOOL WINAPI QueryPerformanceCounter(LPLARGE_INTEGER Cycles);

FORCEINLINE BOOL WINAPI QueryPerformanceCounter(LARGE_INTEGER* Cycles)
{
	return Windows::QueryPerformanceCounter((LPLARGE_INTEGER)Cycles);
}


// Thread-local storage functions
MINIMAL_WINDOWS_API DWORD WINAPI GetCurrentThreadId();
MINIMAL_WINDOWS_API DWORD WINAPI TlsAlloc();
MINIMAL_WINDOWS_API LPVOID WINAPI TlsGetValue(DWORD dwTlsIndex);
MINIMAL_WINDOWS_API BOOL WINAPI TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue);
MINIMAL_WINDOWS_API BOOL WINAPI TlsFree(DWORD dwTlsIndex);


// System
MINIMAL_WINDOWS_API BOOL WINAPI IsProcessorFeaturePresent(DWORD ProcessorFeature);

} //namespace Windows

// Restore the packing setting
PRAGMA_POP_PLATFORM_DEFAULT_PACKING