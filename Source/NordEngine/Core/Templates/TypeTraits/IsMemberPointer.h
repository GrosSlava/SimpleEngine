// Copyright Nord Engine. All Rights Reserved.
#pragma once

#include "TypeTraits/TypeSpecifier.h"




/**
	Traits class which tests if a type is a pointer to member (data member or member function).
*/
template<typename T>
struct TIsMemberPointer
{
	enum
	{
		Value = false
	};
};
// clang-format off
template<typename T, typename U> struct TIsMemberPointer<T U::*> { enum { Value = true }; };
template<typename T> struct TIsMemberPointer<const          T>	{ enum { Value = TIsPointer<T>::Value }; };
template<typename T> struct TIsMemberPointer<      volatile T>	{ enum { Value = TIsPointer<T>::Value }; };
template<typename T> struct TIsMemberPointer<const volatile T>	{ enum { Value = TIsPointer<T>::Value }; };
// clang-format on
