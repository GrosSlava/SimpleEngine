
#pragma once

#include "GenericPlatform.h"




template<typename... ParamTypes>
class TBaseDelegateHandler
{
public:

	virtual ~TBaseDelegateHandler() 
	{ 
		SetStructuredData(nullptr);
	}



public:

	virtual void Call(ParamTypes... Params) = 0;
	virtual bool IsValid() const noexcept = 0;
	virtual void Invalidate() noexcept = 0;
	virtual bool IsEqual(TBaseDelegateHandler<ParamTypes...>* Other) const = 0;



	FORCEINLINE void* GetStructuredData() const noexcept { return StructuredData; }

	FORCEINLINE void SetStructuredData(void* NewData)
	{
		if( StructuredData != nullptr )
		{
			delete StructuredData;
		}

		StructuredData = NewData;
	}


private:

	void* StructuredData = nullptr;
};







template<class TObject, typename... ParamTypes>
class TDelegateHandler : public TBaseDelegateHandler<ParamTypes...>
{
	using MyType = TDelegateHandler<TObject, ParamTypes...>;

	using TMethod = void (TObject::*)(ParamTypes...);


public:

	TDelegateHandler() = delete;
	FORCEINLINE TDelegateHandler(TObject* InObject, TMethod InMethod) :
		Object(InObject), Method(InMethod)
	{ }



public:

	virtual bool IsValid() const noexcept override
	{
		return !WasInvalidated && Object != nullptr;
	}

	virtual void Invalidate() noexcept override 
	{
		WasInvalidated = true; 
	}

	virtual void Call(ParamTypes... Params) override
	{ 
		check(Object != nullptr)
		(Object->*Method)(Params...);
	}

	virtual bool IsEqual(TBaseDelegateHandler<ParamTypes...>* Other) const override
	{
		MyType* AsDelegateHandler = dynamic_cast<MyType*>(Other);
		if( Other == nullptr ) return false;

		return Object == AsDelegateHandler->Object && Method == AsDelegateHandler->Method;
	}



	FORCEINLINE TObject* GetObject() const noexcept { return Object; }



private:

	TObject* Object = nullptr;
	TMethod Method;

	bool WasInvalidated = false;
};
