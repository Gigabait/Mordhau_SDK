// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_ArmingSword_BaronsBasketHilt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.UserConstructionScript");

	UBP_ArmingSword_BaronsBasketHilt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_ArmingSword_BaronsBasketHilt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveBeginPlay");

	UBP_ArmingSword_BaronsBasketHilt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ArmingSword_BaronsBasketHilt_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveActorBeginOverlap");

	UBP_ArmingSword_BaronsBasketHilt_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ArmingSword_BaronsBasketHilt_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ReceiveTick");

	UBP_ArmingSword_BaronsBasketHilt_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ExecuteUbergraph_BP_ArmingSword_BaronsBasketHilt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ArmingSword_BaronsBasketHilt_C::ExecuteUbergraph_BP_ArmingSword_BaronsBasketHilt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmingSword_BaronsBasketHilt.BP_ArmingSword_BaronsBasketHilt_C.ExecuteUbergraph_BP_ArmingSword_BaronsBasketHilt");

	UBP_ArmingSword_BaronsBasketHilt_C_ExecuteUbergraph_BP_ArmingSword_BaronsBasketHilt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
