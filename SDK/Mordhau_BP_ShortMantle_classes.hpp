#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShortMantle.BP_ShortMantle_C
// 0x0008 (0x01A0 - 0x0198)
class UBP_ShortMantle_C : public UBP_MordhauWearable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShortMantle.BP_ShortMantle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ShortMantle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
