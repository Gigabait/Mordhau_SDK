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

// BlueprintGeneratedClass BP_Ballista.BP_Ballista_C
// 0x00D0 (0x0E10 - 0x0D40)
class ABP_Ballista_C : public ABP_MordhauVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Bolt;                                                     // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           NavObstacle;                                              // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      State;                                                    // 0x0D58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D59(0x0003) MISSED OFFSET
	struct FVector                                     FireLocation;                                             // 0x0D5C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FireRotation;                                             // 0x0D68(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousActorYaw;                                         // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationVelocity;                                         // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	class UAudioComponent*                             LoadingSound;                                             // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LastTurnSound;                                            // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RotationVelocitySmoothed;                                 // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousPitch;                                            // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchVelocitySmoothed;                                    // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x0D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRecoveryTime;                                         // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReplicatedTurnCap;                                        // 0x0DA4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReplicatedLookUpCap;                                      // 0x0DA8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0DAC(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FireProjectileClass;                                      // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fire;                                                     // 0x0DC0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0DC1(0x0007) MISSED OFFSET
	class UAudioComponent*                             FireEffectAudioComponent;                                 // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FireEffectParticleComponent;                              // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0DD8(0x0008) MISSED OFFSET
	struct FTransform                                  FireProjectileTransform;                                  // 0x0DE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ballista.BP_Ballista_C");
		return ptr;
	}


	void ClearFireEffects();
	void OnRep_Fire();
	void OnRep_ReplicatedTurnCap();
	void OnRep_ReplicatedLookUpCap();
	struct FPOV PostProcessCameraPOV(struct FPOV* InPOV);
	void OnRep_State();
	void UserConstructionScript();
	void InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void FireBallista(const struct FVector& Location, const struct FRotator& Rotation);
	void UpdateAnimationFor(class AMordhauCharacter** Character, class UMordhauAnimInstance** AnimInst, float* DeltaTime);
	void UpdateFPCameraFor(class AMordhauCharacter** Character, float* DeltaSeconds, bool* bRotationOnly);
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent);
	void BPLODTick(float* DeltaTime);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19(float AxisValue);
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5(float AxisValue);
	void OnStartedDriving(class AMordhauCharacter** Character);
	void OnStoppedDriving(class AMordhauCharacter** Character);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Ballista(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
