/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function GameFramework.GameAIController.GetActionString
// [0x00000000] 
struct AGameAIController_execGetActionString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ActionStr;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGameAICommand*                           ActiveCmd;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.GeneratePathToLocation
// [0x00000000] 
struct AGameAIController_execGeneratePathToLocation_Parms
{
	struct FVector                                     Goal;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.GeneratePathToActor
// [0x00000000] 
struct AGameAIController_execGeneratePathToActor_Parms
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00000000] 
struct AGameAIController_execSetDesiredRotation_Parms
{
	struct FRotator                                    TargetDesiredRotation;                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InLockDesiredRotation : 1;                        		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InUnlockWhenReached : 1;                          		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              InterpolationTime;                                		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00000000] 
struct AGameAIController_execAILog_Internal_Parms
{
	struct FString                                     LogText;                                          		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FName                                       LogCategory;                                      		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForce : 1;                                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00000000] 
struct AGameAIController_execRecordDemoAILog_Parms
{
	struct FString                                     LogText;                                          		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameAIController.Destroyed
// [0x00000000] 
struct AGameAIController_execDestroyed_Parms
{
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00000000] 
struct AGameAIController_execGetAICommandInStack_Parms
{
	class UClass*                                      InClass;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UGameAICommand*                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00000000] 
struct AGameAIController_execFindCommandOfClass_Parms
{
	class UClass*                                      SearchClass;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameAICommand*                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00000000] 
struct AGameAIController_execDumpCommandStack_Parms
{
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00000000] 
struct AGameAIController_execCheckCommandCount_Parms
{
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00000000] 
struct AGameAIController_execGetActiveCommand_Parms
{
	class UGameAICommand*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00000000] 
struct AGameAIController_execAbortCommand_Parms
{
	class UGameAICommand*                              AbortCmd;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      AbortClass;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.PopCommand
// [0x00000000] 
struct AGameAIController_execPopCommand_Parms
{
	class UGameAICommand*                              ToBePoppedCommand;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAIController.PushCommand
// [0x00000000] 
struct AGameAIController_execPushCommand_Parms
{
	class UGameAICommand*                              NewCommand;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00000000] 
struct UGameAICommand_execGetDebugOverheadText_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           OutText;                                          		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00000000] 
struct UGameAICommand_execDrawDebug_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Category;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00000000] 
struct UGameAICommand_execGetDumpString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameAICommand.Resumed
// [0x00000000] 
struct UGameAICommand_execResumed_Parms
{
	struct FName                                       OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.Paused
// [0x00000000] 
struct UGameAICommand_execPaused_Parms
{
	class UGameAICommand*                              NewCommand;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.Popped
// [0x00000000] 
struct UGameAICommand_execPopped_Parms
{
};

// Function GameFramework.GameAICommand.Pushed
// [0x00000000] 
struct UGameAICommand_execPushed_Parms
{
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00000000] 
struct UGameAICommand_execPostPopped_Parms
{
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00000000] 
struct UGameAICommand_execPrePushed_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00000000] 
struct UGameAICommand_execAllowStateTransitionTo_Parms
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00000000] 
struct UGameAICommand_execAllowTransitionTo_Parms
{
	class UClass*                                      AttemptCommand;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAICommand.Tick
// [0x00000000] 
struct UGameAICommand_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00000000] 
struct UGameAICommand_execShouldIgnoreNotifies_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00000000] 
struct UGameAICommand_execInternalTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00000000] 
struct UGameAICommand_execInternalResumed_Parms
{
	struct FName                                       OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00000000] 
struct UGameAICommand_execInternalPaused_Parms
{
	class UGameAICommand*                              NewCommand;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00000000] 
struct UGameAICommand_execInternalPopped_Parms
{
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00000000] 
struct UGameAICommand_execInternalPushed_Parms
{
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00000000] 
struct UGameAICommand_execInternalPrePushed_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00000000] 
struct UGameAICommand_execInitCommand_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameAICommand*                           Cmd;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00000000] 
struct UGameAICommand_execInitCommandUserActor_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      UserActor;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00000000] 
struct AGameCrowdAgent_execGetBehaviorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  BehaviorString;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00000000] 
struct AGameCrowdAgent_execGetDestString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  DestString;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00000000] 
struct AGameCrowdAgent_execPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           NameXL;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           TextXL;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           BehavXL;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           TextYL;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FString                                  ScreenName;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  DestString;                                       		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  BehaviorString;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FFontRenderInfo                          FontInfo;                                         		// 0x0068 (0x0028) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00000000] 
struct AGameCrowdAgent_execNativePostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00000000] 
struct AGameCrowdAgent_execOverlappedActorEvent_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00000000] 
struct AGameCrowdAgent_execTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00000000] 
struct AGameCrowdAgent_execFireDeathEvent_Parms
{
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00000000] 
struct AGameCrowdAgent_execPlayDeath_Parms
{
	struct FVector                                     KillMomentum;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00000000] 
struct AGameCrowdAgent_execUpdateIntermediatePoint_Parms
{
	class AActor*                                      DestinationActor;                                 		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00000000] 
struct AGameCrowdAgent_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           Radius;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00000000] 
struct AGameCrowdAgent_execIsIdle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00000000] 
struct AGameCrowdAgent_execSetCurrentBehavior_Parms
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00000000] 
struct AGameCrowdAgent_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00000000] 
struct AGameCrowdAgent_execActivateInstancedBehavior_Parms
{
	class UGameCrowdAgentBehavior*                     NewBehaviorObject;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00000000] 
struct AGameCrowdAgent_execActivateBehavior_Parms
{
	class UGameCrowdAgentBehavior*                     NewBehaviorArchetype;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00000000] 
struct AGameCrowdAgent_execResetSeePlayer_Parms
{
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00000000] 
struct AGameCrowdAgent_execTryRandomBehavior_Parms
{
	// unsigned long                                   bFoundBehavior : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00000000] 
struct AGameCrowdAgent_execNotifySeePlayer_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bFoundBehavior : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00000000] 
struct AGameCrowdAgent_execPlaySpawnBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00000000] 
struct AGameCrowdAgent_execHandlePotentialAgentEncounter_Parms
{
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00000000] 
struct AGameCrowdAgent_execStopIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00000000] 
struct AGameCrowdAgent_execPlayIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00000000] 
struct AGameCrowdAgent_execOnPlayAgentAnimation_Parms
{
	class USeqAct_PlayAgentAnimation*                  Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00000000] 
struct AGameCrowdAgent_execInitializeAgent_Parms
{
	class AActor*                                      SpawnLoc;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGameCrowdAgent*                             AgentTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameCrowdGroup*                             NewGroup;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AgentWarmupTime;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWarmupPosition : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bCheckWarmupVisibility : 1;                       		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bGroupDestination : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRealPreferVisible : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AGameCrowdDestination*                    SpawnDest;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           TryPct;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           MaxSpawnDist;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           DestDist;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           StartDist;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TryLoc;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  YAdjust;                                          		// 0x0068 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0074 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0080 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bVisibleTryLoc : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00000000] 
struct AGameCrowdAgent_execSetLighting_Parms
{
	unsigned long                                      bEnableLightEnvironment : 1;                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCastShadows : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00000000] 
struct AGameCrowdAgent_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FString                                  T;                                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UCanvas*                                  Canvas;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00000000] 
struct AGameCrowdAgent_execDestroyed_Parms
{
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00000000] 
struct AGameCrowdAgent_execResetPooledAgent_Parms
{
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00000000] 
struct AGameCrowdAgent_execKillAgent_Parms
{
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00000000] 
struct AGameCrowdAgent_execPostBeginPlay_Parms
{
	// struct FVector                                  AgentScale3D;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           MaxSeePlayerDist;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00000000] 
struct AGameCrowdAgent_execSetMaxSpeed_Parms
{
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00000000] 
struct AGameCrowdAgent_execSetCurrentDestination_Parms
{
	class AGameCrowdDestination*                       NewDest;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00000000] 
struct AGameCrowdAgent_execWaitForGroupMembers_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00000000] 
struct AGameCrowdAgent_execPickBehaviorFrom_Parms
{
	TArray< struct FBehaviorEntry >                    BehaviorList;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     BestCameraLoc;                                    		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CameraLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRot;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           BestDistSq;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           NewDistSq;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           FreqSum;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           RandPick;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.SetPanic
// [0x00000000] 
struct AGameCrowdAgent_execSetPanic_Parms
{
	class AActor*                                      PanicActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNewPanic : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00000000] 
struct AGameCrowdAgent_execIsPanicked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00000000] 
struct AGameCrowdAgent_execFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execCreateAttachments_Parms
{
	// int                                             AttachIdx;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             InfoIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PickedInfoIdx;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ChanceTotal;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           RandVal;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     StaticMeshComp;                                   		// 0x0014 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// unsigned long                                   bUseSocket : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUseBone : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execStopIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execPlayIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execClearLatentAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms
{
	class USeqAct_PlayAgentAnimation*                  Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execSetRootMotion_Parms
{
	unsigned long                                      bRootMotionEnabled : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execPlayDeath_Parms
{
	struct FVector                                     KillMomentum;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execSetLighting_Parms
{
	unsigned long                                      bEnableLightEnvironment : 1;                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCastShadows : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00000000] 
struct AGameCrowdAgentSkeletal_execPostBeginPlay_Parms
{
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00000000] 
struct UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms
{
	class AGameCrowdDestination*                       Destination;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00000000] 
struct UGameCrowdAgentBehavior_execAllowThisDestination_Parms
{
	class AGameCrowdDestination*                       Destination;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00000000] 
struct UGameCrowdAgentBehavior_execPropagateViralBehaviorTo_Parms
{
	class AGameCrowdAgent*                             OtherAgent;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00000000] 
struct UGameCrowdAgentBehavior_execActivatedBy_Parms
{
	class AActor*                                      NewActionTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00000000] 
struct UGameCrowdAgentBehavior_execGetDestinationActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00000000] 
struct UGameCrowdAgentBehavior_execChangingDestination_Parms
{
	class AGameCrowdDestination*                       NewDest;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00000000] 
struct UGameCrowdAgentBehavior_execGetBehaviorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00000000] 
struct UGameCrowdAgentBehavior_execOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00000000] 
struct UGameCrowdAgentBehavior_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00000000] 
struct UGameCrowdAgentBehavior_execInitBehavior_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00000000] 
struct UGameCrowdAgentBehavior_execHandleMovement_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00000000] 
struct UGameCrowdAgentBehavior_execFinishedTargetRotation_Parms
{
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00000000] 
struct UGameCrowdAgentBehavior_execCanBeUsedBy_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraLoc;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00000000] 
struct UGameCrowdAgentBehavior_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00000000] 
struct UGameCrowdAgentBehavior_execShouldEndIdle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  BehaviorString;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms
{
	// float                                           CurrentBlendInTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           CurrentBlendOutTime;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgentSkeletal*                  MySkAgent;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execFinishedTargetRotation_Parms
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00000000] 
struct UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        ClosestPC;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ClosestDist;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           newdist;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgentSkeletal*                  SkAgent;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms
{
	class AGameCrowdDestination*                       Destination;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms
{
	class AGameCrowdDestination*                       Destination;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execPropagateViralBehaviorTo_Parms
{
	class AGameCrowdAgent*                             OtherAgent;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00000000] 
struct UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms
{
	class AActor*                                      NewActionTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AGameCrowdDestination*                    TempDest;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    PrevDest;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00000000] 
struct UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00000000] 
struct UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00000000] 
struct UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  BehaviorString;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00000000] 
struct UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00000000] 
struct UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00000000] 
struct UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00000000] 
struct UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00000000] 
struct UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00000000] 
struct UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms
{
	class AGameCrowdDestination*                       NewDest;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00000000] 
struct UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00000000] 
struct UGameCrowdGroup_execUpdateDestinations_Parms
{
	class AGameCrowdDestination*                       NewDestination;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00000000] 
struct UGameCrowdGroup_execRemoveMember_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00000000] 
struct UGameCrowdGroup_execAddMember_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00000000] 
struct AGameCrowdInteractionPoint_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00000000] 
struct AGameCrowdDestination_execGetSpawnPosition_Parms
{
	class USeqAct_GameCrowdSpawner*                    Spawner;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnPos;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRot;                                         		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  SpawnLine;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           RandScale;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00000000] 
struct AGameCrowdDestination_execAllowableDestinationFor_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Num;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00000000] 
struct AGameCrowdDestination_execAtCapacity_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00000000] 
struct AGameCrowdDestination_execIncrementCustomerCount_Parms
{
	class AGameCrowdAgent*                             ArrivingAgent;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00000000] 
struct AGameCrowdDestination_execDecrementCustomerCount_Parms
{
	class AGameCrowdAgent*                             DepartingAgent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AGameCrowdDestinationQueuePoint*          QP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsInQueue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00000000] 
struct AGameCrowdDestination_execPickNewDestinationFor_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIgnoreRestrictions : 1;                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DestinationFrequencySum;                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DestinationPickValue;                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00000000] 
struct AGameCrowdDestination_execReachedDestination_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USeqEvent_CrowdAgentReachedDestination*   ReachedEvent;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEventActivated : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00000000] 
struct AGameCrowdDestination_execDestroyed_Parms
{
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00000000] 
struct AGameCrowdDestination_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00000000] 
struct AGameCrowdDestination_execReachedByAgent_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TestPosition;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTestExactly : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execHasCustomer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execClearQueue_Parms
{
	class AGameCrowdAgent*                             OldCustomer;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execAddCustomer_Parms
{
	class AGameCrowdAgent*                             NewCustomer;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGameCrowdInteractionPoint*                  PreviousPosition;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms
{
	// class AGameCrowdDestinationQueuePoint*          FrontQueuePosition;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    QueueFront;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgent*                          TempAgent;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms
{
	class AGameCrowdInteractionPoint*                  FrontPosition;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execReachedDestination_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AGameCrowdDestinationQueuePoint*          QueuePoint;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execHasSpace_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00000000] 
struct AGameCrowdDestinationQueuePoint_execQueueReachedBy_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TestPosition;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdForcePoint.AppliedForce
// [0x00000000] 
struct AGameCrowdForcePoint_execAppliedForce_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdForcePoint.UnTouch
// [0x00000000] 
struct AGameCrowdForcePoint_execUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdForcePoint.Touch
// [0x00000000] 
struct AGameCrowdForcePoint_execTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAttractor.AppliedForce
// [0x00000000] 
struct AGameCrowdAttractor_execAppliedForce_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ToAttractor;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           CurrentAttraction;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdRepulsor.AppliedForce
// [0x00000000] 
struct AGameCrowdRepulsor_execAppliedForce_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FromAttractor;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           CurrentRepulsion;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00000000] 
struct AGameCrowdPopulationManager_execCreateNewAgent_Parms
{
	class AGameCrowdDestination*                       SpawnLoc;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGameCrowdAgent*                             AgentTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameCrowdGroup*                             NewGroup;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGameCrowdAgent*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgentSkeletal*                  SkAgent;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnPos;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00000000] 
struct AGameCrowdPopulationManager_execSpawnAgent_Parms
{
	class AGameCrowdDestination*                       SpawnLoc;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGameCrowdAgent*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           AgentPickValue;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           PickSum;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PickedInfo;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgent*                          AgentTemplate;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// class UGameCrowdGroup*                          NewGroup;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00000000] 
struct AGameCrowdPopulationManager_execValidateSpawnAt_Parms
{
	class AGameCrowdDestination*                       Candidate;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           DistSq;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00000000] 
struct AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Parms
{
	class AGameCrowdDestination*                       GCD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ViewLocation;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00000000] 
struct AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Parms
{
	int                                                StartIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                StopIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ViewLocation;                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     PredictionLocation;                               		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   HitActor;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    GCD;                                              		// 0x002C (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    NextGCD;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00000000] 
struct AGameCrowdPopulationManager_execPrioritizeSpawnPoints_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PredictionLocation;                               		// 0x002C (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             UpdateNum;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00000000] 
struct AGameCrowdPopulationManager_execPickSpawnPoint_Parms
{
	class AGameCrowdDestination*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             StartingIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    Candidate;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00000000] 
struct AGameCrowdPopulationManager_execTick_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AGameCrowdDestination*                    PickedSpawnPoint;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           CurrentSpawnRate;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSpawnedAgent : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00000000] 
struct AGameCrowdPopulationManager_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgent*                          GCD;                                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AddToAgentPool
// [0x00000000] 
struct AGameCrowdPopulationManager_execAddToAgentPool_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00000000] 
struct AGameCrowdPopulationManager_execAgentDestroyed_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00000000] 
struct AGameCrowdPopulationManager_execFlushAgents_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle
// [0x00000000] 
struct AGameCrowdPopulationManager_execOnGameCrowdPopulationManagerToggle_Parms
{
	class USeqAct_GameCrowdPopulationManagerToggle*    inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00000000] 
struct AGameCrowdPopulationManager_execRemoveSpawnPoint_Parms
{
	class AGameCrowdDestination*                       GCD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00000000] 
struct AGameCrowdPopulationManager_execAddSpawnPoint_Parms
{
	class AGameCrowdDestination*                       GCD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInsertedSpawnPoint : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  ViewLocation;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PredictionLocation;                               		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0040 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.GetMaxSpawnDist
// [0x00000000] 
struct AGameCrowdPopulationManager_execGetMaxSpawnDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00000000] 
struct AGameCrowdPopulationManager_execNotifyPathChanged_Parms
{
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00000000] 
struct AGameCrowdPopulationManager_execPostBeginPlay_Parms
{
	// class AGameCrowdDestination*                    GCD;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00000000] 
struct AGameCrowdReplicationActor_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameDamageType.HandleDamageFX
// [0x00000000] 
struct UGameDamageType_execHandleDamageFX_Parms
{
	class AGamePawn*                                   DamagedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTakeHitInfo                                HitInfo;                                          		// 0x0004 (0x0038) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameDamageType.ShouldHeadShotGib
// [0x00000000] 
struct UGameDamageType_execShouldHeadShotGib_Parms
{
	class APawn*                                       TestPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AGamePawn*                                GP;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameDamageType.PlayExtraDamageSound
// [0x00000000] 
struct UGameDamageType_execPlayExtraDamageSound_Parms
{
	class APawn*                                       VictimPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameDamageType.IsScriptedDamageType
// [0x00000000] 
struct UGameDamageType_execIsScriptedDamageType_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
// [0x00000000] 
struct UGameDamageType_execShouldPlayForceFeedback_Parms
{
	class APawn*                                       DamagedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameDamageType.HandleDeadPlayer
// [0x00000000] 
struct UGameDamageType_execHandleDeadPlayer_Parms
{
	class AGamePlayerController*                       Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameDamageType.HandleKilledPawn
// [0x00000000] 
struct UGameDamageType_execHandleKilledPawn_Parms
{
	class APawn*                                       KilledPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameDamageType.HandleDamagedPawn
// [0x00000000] 
struct UGameDamageType_execHandleDamagedPawn_Parms
{
	class APawn*                                       DamagedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAmt;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameDamageType.ModifyDamage
// [0x00000000] 
struct UGameDamageType_execModifyDamage_Parms
{
	class APawn*                                       Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                out_Damage;                                       		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     out_Momentum;                                     		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameDamageType.ShouldGib
// [0x00000000] 
struct UGameDamageType_execShouldGib_Parms
{
	class APawn*                                       TestPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00000000] 
struct AGameExplosionActor_execChooseCameraShake_Parms
{
	struct FVector                                     Epicenter;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCameraShake*                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CamX;                                             		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamY;                                             		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamZ;                                             		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ToEpicenter;                                      		// 0x0038 (0x000C) [0x0000000000000000]              
	// float                                           FwdDot;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           RtDot;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// class UCameraShake*                             ChosenShake;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 NoPitchRot;                                       		// 0x0050 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00000000] 
struct AGameExplosionActor_execSpawnCameraLensEffects_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00000000] 
struct AGameExplosionActor_execDoExplosionCameraEffects_Parms
{
	// class UCameraShake*                             Shake;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ShakeScale;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.Tick
// [0x00000000] 
struct AGameExplosionActor_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Pct;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00000000] 
struct AGameExplosionActor_execDrawDebug_Parms
{
	// struct FColor                                   C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00000000] 
struct AGameExplosionActor_execDelayedExplosionDamage_Parms
{
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00000000] 
struct AGameExplosionActor_execExplode_Parms
{
	class UGameExplosion*                              NewExplosionTemplate;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Direction;                                        		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           HowLongToLive;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterial*                        PhysMat;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00000000] 
struct AGameExplosionActor_execSpawnExplosionFogVolume_Parms
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00000000] 
struct AGameExplosionActor_execSpawnExplosionDecal_Parms
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00000000] 
struct AGameExplosionActor_execSpawnExplosionParticleSystem_Parms
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00000000] 
struct AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00000000] 
struct AGameExplosionActor_execSpecialPawnEffectsFor_Parms
{
	class AGamePawn*                                   VictimPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VictimDist;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00000000] 
struct AGameExplosionActor_execGetEffectCheckRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CheckRadius;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00000000] 
struct AGameExplosionActor_execDoExplosionDamage_Parms
{
	unsigned long                                      bCauseDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bCauseEffects : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AActor*                                   Victim;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitL;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitN;                                             		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BBoxCenter;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bDamageBlocked : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDoFullDamage : 1;                                		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCauseFractureEffects : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCausePawnEffects : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCauseDamageEffects : 1;                          		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ColRadius;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           ColHeight;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           CheckRadius;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         VictimsList;                                      		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBox                                     BBox;                                             		// 0x0070 (0x001C) [0x0000000000000000]              
	// class AController*                              ModInstigator;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	// class AGamePawn*                                VictimPawn;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	// unsigned char                                   WantPhysChunksAndParticles;                       		// 0x0098 (0x0001) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00000000] 
struct AGameExplosionActor_execBoxDistanceToPoint_Parms
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FBox                                        BBox;                                             		// 0x000C (0x001C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00000000] 
struct AGameExplosionActor_execIsBehindExplosion_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00000000] 
struct AGameExplosionActor_execDoFullDamageToActor_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00000000] 
struct AGameExplosionActor_execGetPhysicalMaterial_Parms
{
	class UPhysicalMaterial*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPhysicalMaterial*                        retval;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutHitNorm;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ExploNormal;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            OutHitInfo;                                       		// 0x0038 (0x001C) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00000000] 
struct AGameExplosionActor_execPreBeginPlay_Parms
{
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00000000] 
struct AGamePawn_execReattachMeshWithoutBeingSeen_Parms
{
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00000000] 
struct AGamePawn_execReattachMesh_Parms
{
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00000000] 
struct AGamePawn_execUpdateShadowSettings_Parms
{
	unsigned long                                      bInWantShadow : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bNewCastShadow : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bNewCastDynamicShadow : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x00000000] 
struct AGamePlayerController_execClientColorFade_Parms
{
	struct FColor                                      FadeColor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FromAlpha;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ToAlpha;                                          		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00000000] 
struct AGamePlayerController_execWarmupPause_Parms
{
	unsigned long                                      bDesiredPauseState : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FColor                                   FadeColor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00000000] 
struct AGamePlayerController_execCanUnpauseWarmup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00000000] 
struct AGamePlayerController_execGetCurrentMovie_Parms
{
	struct FString                                     MovieName;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x00000000] 
struct AGamePlayerController_execClientStopMovie_Parms
{
	float                                              DelayInSeconds;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowMovieToFinish : 1;                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForceStopNonSkippable : 1;                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForceStopLoadingMovie : 1;                       		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x00000000] 
struct AGamePlayerController_execClientPlayMovie_Parms
{
	struct FString                                     MovieName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                InStartOfRenderingMovieFrame;                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                InEndOfRenderingMovieFrame;                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00000000] 
struct AGamePlayerController_execKeepPlayingLoadingMovie_Parms
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00000000] 
struct AGamePlayerController_execShowLoadingMovie_Parms
{
	unsigned long                                      bShowMovie : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bPauseAfterHide : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              PauseDuration;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              KeepPlayingDuration;                              		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverridePreviousDelays : 1;                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     PendingURL;                                       		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GameFramework.GamePlayerController.GetCurrentSoundMode
// [0x00000000] 
struct AGamePlayerController_execGetCurrentSoundMode_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00000000] 
struct AGamePlayerController_execSetSoundMode_Parms
{
	struct FName                                       InSoundModeName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UAudioDevice*                             Audio;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSet : 1;                                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00000000] 
struct AGamePlayerController_execDoForceFeedbackForScreenShake_Parms
{
	class UCameraShake*                                ShakeData;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ShakeLevel;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           RotMag;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocMag;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           FOVMag;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00000000] 
struct AGamePlayerController_execNotifyCrowdAgentInRadius_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00000000] 
struct AGamePlayerController_execNotifyCrowdAgentRefresh_Parms
{
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00000000] 
struct AGamePlayerController_execCrowdDebug_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AGameCrowdAgent*                          GCA;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             AgentCount;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DebugRadius;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.CrowdToggle
// [0x00000000] 
struct AGamePlayerController_execCrowdToggle_Parms
{
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.CrowdFocus
// [0x00000000] 
struct AGamePlayerController_execCrowdFocus_Parms
{
	// class AGameCrowdAgent*                          GCA;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00000000] 
struct AGamePlayerController_execGetUIPlayerIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00000000] 
struct AMobileHUD_execDrawMobileTilt_Parms
{
	class UMobilePlayerInput*                          MobileInput;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Yaw;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Pitch;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00000000] 
struct AMobileHUD_execDrawMobileZone_Trackball_Parms
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00000000] 
struct AMobileHUD_execDrawMobileZone_Joystick_Parms
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Width;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Height;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FColor                                   LineColor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           ClampedX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           ClampedY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FColor                                   TempColor;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00000000] 
struct AMobileHUD_execDrawMobileZone_Button_Parms
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Pressed;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           U;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           V;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           UL;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           VL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           A;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               Tex;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00000000] 
struct AMobileHUD_execDrawInputZoneOverlays_Parms
{
	// int                                             ZoneIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMobileInputZone*                         Zone;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Fade;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MobileInput;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class UMobileInputZone* >               Zones;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00000000] 
struct AMobileHUD_execRenderMobileMenu_Parms
{
	// class UMobilePlayerInput*                       MobileInput;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.PostRender
// [0x00000000] 
struct AMobileHUD_execPostRender_Parms
{
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00000000] 
struct AMobileHUD_execPostBeginPlay_Parms
{
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00000000] 
struct UMobileInputZone_execOnDoubleTapDelegate_Parms
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   TouchLocation;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00000000] 
struct UMobileInputZone_execOnTapDelegate_Parms
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   TouchLocation;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00000000] 
struct UMobileInputZone_execOnProcessInputDelegate_Parms
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Handle;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   TouchLocation;                                    		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00000000] 
struct UMobileInputZone_execDeactivateZone_Parms
{
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00000000] 
struct UMobileInputZone_execActivateZone_Parms
{
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00000000] 
struct UMobileMenuObject_execRenderObject_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00000000] 
struct UMobileMenuButton_execRenderCaption_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           UL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           VL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00000000] 
struct UMobileMenuButton_execRenderObject_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             DrawColor;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00000000] 
struct UMobileMenuImage_execRenderObject_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           W;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           H;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           U;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           V;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           UL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           VL;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             DrawColor;                                        		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00000000] 
struct UMobileMenuScene_execMobileMenuCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00000000] 
struct UMobileMenuScene_execFindMenuObject_Parms
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UMobileMenuObject*                           ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00000000] 
struct UMobileMenuScene_execCleanUpScene_Parms
{
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00000000] 
struct UMobileMenuScene_execClosed_Parms
{
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00000000] 
struct UMobileMenuScene_execClosing_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00000000] 
struct UMobileMenuScene_execOpened_Parms
{
	struct FString                                     Mode;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00000000] 
struct UMobileMenuScene_execOnTouch_Parms
{
	class UMobileMenuObject*                           Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00000000] 
struct UMobileMenuScene_execRenderScene_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RenderDelta;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00000000] 
struct UMobilePlayerInput_execOpenMobileMenuMode_Parms
{
	struct FString                                     MenuClassName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Mode;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UClass*                                   MenuClass;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00000000] 
struct UMobilePlayerInput_execOpenMobileMenu_Parms
{
	struct FString                                     MenuClassName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UClass*                                   MenuClass;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00000000] 
struct UMobilePlayerInput_execMobileMenuCommand_Parms
{
	struct FString                                     MenuCommand;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00000000] 
struct UMobilePlayerInput_execPreClientTravel_Parms
{
	struct FString                                     PendingURL;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      TravelType;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSeamlessTravel : 1;                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00000000] 
struct UMobilePlayerInput_execRenderMenus_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RenderDelta;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00000000] 
struct UMobilePlayerInput_execCloseMenuScene_Parms
{
	class UMobileMenuScene*                            SceneToClose;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00000000] 
struct UMobilePlayerInput_execOpenMenuScene_Parms
{
	class UClass*                                      SceneClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Mode;                                             		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UMobileMenuScene*                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UMobileMenuScene*                         Scene;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.InitializeMenuScene
// [0x00000000] 
struct UMobilePlayerInput_execInitializeMenuScene_Parms
{
	class UMobileMenuScene*                            Scene;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobilePlayerInput.StopUseAttractModeInputConfig
// [0x00000000] 
struct UMobilePlayerInput_execStopUseAttractModeInputConfig_Parms
{
};

// Function GameFramework.MobilePlayerInput.StartUseAttractModeInputConfig
// [0x00000000] 
struct UMobilePlayerInput_execStartUseAttractModeInputConfig_Parms
{
};

// Function GameFramework.MobilePlayerInput.PrevUserMobileInputConfig
// [0x00000000] 
struct UMobilePlayerInput_execPrevUserMobileInputConfig_Parms
{
	// int                                             NewGroup;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.NextUserMobileInputConfig
// [0x00000000] 
struct UMobilePlayerInput_execNextUserMobileInputConfig_Parms
{
	// int                                             NewGroup;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.SetUserMobileInputConfig
// [0x00000000] 
struct UMobilePlayerInput_execSetUserMobileInputConfig_Parms
{
	int                                                ConfigIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00000000] 
struct UMobilePlayerInput_execGetCurrentZones_Parms
{
	TArray< class UMobileInputZone* >                  ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00000000] 
struct UMobilePlayerInput_execHasZones_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00000000] 
struct UMobilePlayerInput_execFindorAddZone_Parms
{
	struct FString                                     ZoneName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UMobileInputZone*                            ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UMobileInputZone*                         Zone;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00000000] 
struct UMobilePlayerInput_execFindZone_Parms
{
	struct FString                                     ZoneName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UMobileInputZone*                            ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00000000] 
struct UMobilePlayerInput_execInitializeInputZones_Parms
{
	// class AFrameworkGame*                           Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileInputZone*                         Zone;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  SavedUserGroupString;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00000000] 
struct UMobilePlayerInput_execInitInputSystem_Parms
{
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00000000] 
struct UMobilePlayerInput_execSendInputAxis_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delta;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00000000] 
struct UMobilePlayerInput_execSendInputKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00000000] 
struct UMobilePlayerInput_execNativeInitializeInputZones_Parms
{
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00000000] 
struct UMobilePlayerInput_execNativeInitializeInputSystem_Parms
{
};

// Function GameFramework.MobilePlayerInput.OnMobileTilt
// [0x00000000] 
struct UMobilePlayerInput_execOnMobileTilt_Parms
{
	class UPlayerInput*                                PlayerInput;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaPitch;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaYaw;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00000000] 
struct USeqAct_GameCrowdPopulationManagerToggle_execGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget
// [0x00000000] 
struct USeqAct_GameCrowdPopulationManagerToggle_execFindPopMgrTarget_Parms
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execCreateNewAgent_Parms
{
	class AActor*                                      SpawnLoc;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGameCrowdAgent*                             AgentTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameCrowdGroup*                             NewGroup;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isDamageByPlayerDisabled : 1;                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AGameCrowdAgent*                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnPos;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execSpawnAgent_Parms
{
	class AActor*                                      SpawnLoc;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isDamageByPlayerDisabled : 1;                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AGameCrowdAgent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AGameCrowdAgent*                          Agent;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           AgentPickValue;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           PickSum;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             PickedInfo;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgent*                          AgentTemplate;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UGameCrowdGroup*                          NewGroup;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execUpdateSpawning_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execKillAgents_Parms
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execCacheSpawnerVars_Parms
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent
// [0x00000000] 
struct USeqAct_GameCrowdSpawner_execSpawnedAgent_Parms
{
	class AGameCrowdAgent*                             NewAgent;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00000000] 
struct USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms
{
	class AGameCrowdAgentSkeletal*                     Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGameCrowdBehavior_PlayAnimation*         AnimBehavior;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00000000] 
struct USeqAct_PlayAgentAnimation_execGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00000000] 
struct UGameCameraBase_execModifyPostProcessSettings_Parms
{
	struct FPostProcessSettings                        PP;                                               		// 0x0000 (0x0158) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameCameraBase.Init
// [0x00000000] 
struct UGameCameraBase_execInit_Parms
{
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00000000] 
struct UGameCameraBase_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ViewTarget;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00000000] 
struct UGameCameraBase_execUpdateCamera_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGamePlayerCamera*                           CameraActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTViewTarget                                OutVT;                                            		// 0x000C (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00000000] 
struct UGameCameraBase_execResetInterpolation_Parms
{
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00000000] 
struct UGameCameraBase_execOnBecomeInActive_Parms
{
	class UGameCameraBase*                             NewCamera;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00000000] 
struct UGameCameraBase_execOnBecomeActive_Parms
{
	class UGameCameraBase*                             OldCamera;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00000000] 
struct UGameThirdPersonCamera_execResetInterpolation_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00000000] 
struct UGameThirdPersonCamera_execModifyPostProcessSettings_Parms
{
	struct FPostProcessSettings                        PP;                                               		// 0x0000 (0x0158) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00000000] 
struct UGameThirdPersonCamera_execOnBecomeActive_Parms
{
	class UGameCameraBase*                             OldCamera;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00000000] 
struct UGameThirdPersonCamera_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ViewTarget;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00000000] 
struct UGameThirdPersonCamera_execUpdateCameraMode_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGameThirdPersonCameraMode*               NewCamMode;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00000000] 
struct UGameThirdPersonCamera_execFindBestCameraMode_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameThirdPersonCameraMode*                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00000000] 
struct UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms
{
	struct FRotator                                    Delta;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00000000] 
struct UGameThirdPersonCamera_execGetActualFocusLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FocusLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   ComponentIt;                                      		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00000000] 
struct UGameThirdPersonCamera_execUpdateFocusPoint_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00000000] 
struct UGameThirdPersonCamera_execClearFocusPoint_Parms
{
	unsigned long                                      bLeaveCameraRotation : 1;                         		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00000000] 
struct UGameThirdPersonCamera_execGetFocusActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00000000] 
struct UGameThirdPersonCamera_execSetFocusOnActor_Parms
{
	class AActor*                                      FocusActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       FocusBoneName;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   InterpSpeedRange;                                 		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   InFocusFOV;                                       		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              CameraFOV;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAlwaysFocus : 1;                                 		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAdjustCamera : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreTrace : 1;                                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              FocusPitchOffsetDeg;                              		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00000000] 
struct UGameThirdPersonCamera_execSetFocusOnLoc_Parms
{
	struct FVector                                     FocusWorldLoc;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   InterpSpeedRange;                                 		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   InFocusFOV;                                       		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              CameraFOV;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAlwaysFocus : 1;                                 		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAdjustCamera : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreTrace : 1;                                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              FocusPitchOffsetDeg;                              		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00000000] 
struct UGameThirdPersonCamera_execAdjustTurn_Parms
{
	int                                                AngleOffset;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00000000] 
struct UGameThirdPersonCamera_execEndTurn_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00000000] 
struct UGameThirdPersonCamera_execBeginTurn_Parms
{
	int                                                StartAngle;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EndAngle;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeSec;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DelaySec;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAlignTargetWhenFinished : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00000000] 
struct UGameThirdPersonCamera_execPlayerUpdateCamera_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGamePlayerCamera*                           CameraActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTViewTarget                                OutVT;                                            		// 0x000C (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00000000] 
struct UGameThirdPersonCamera_execUpdateCamera_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGamePlayerCamera*                           CameraActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTViewTarget                                OutVT;                                            		// 0x000C (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00000000] 
struct UGameThirdPersonCamera_execGetDesiredFOV_Parms
{
	class APawn*                                       ViewedPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00000000] 
struct UGameThirdPersonCamera_execInit_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00000000] 
struct UGameThirdPersonCamera_execReset_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00000000] 
struct UGameThirdPersonCamera_execCreateCameraMode_Parms
{
	class UClass*                                      ModeClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameThirdPersonCameraMode*                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameThirdPersonCameraMode*               NewMode;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00000000] 
struct AGamePlayerCamera_execAdjustFOVForViewport_Parms
{
	float                                              inHorizFOV;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CameraTargetPawn;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00000000] 
struct AGamePlayerCamera_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00000000] 
struct AGamePlayerCamera_execResetInterpolation_Parms
{
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00000000] 
struct AGamePlayerCamera_execSetColorScale_Parms
{
	struct FVector                                     NewColorScale;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00000000] 
struct AGamePlayerCamera_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00000000] 
struct AGamePlayerCamera_execUpdateCameraLensEffects_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	// int                                             Idx;                                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00000000] 
struct AGamePlayerCamera_execUpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    P;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UGameCameraBase*                          NewCamera;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ACameraActor*                             CamActor;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00000000] 
struct AGamePlayerCamera_execShouldConstrainAspectRatio_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00000000] 
struct AGamePlayerCamera_execFindBestCameraType_Parms
{
	class AActor*                                      CameraTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameCameraBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameCameraBase*                          BestCam;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00000000] 
struct AGamePlayerCamera_execReset_Parms
{
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00000000] 
struct AGamePlayerCamera_execPostBeginPlay_Parms
{
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00000000] 
struct AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms
{
	class AActor*                                      TargetBase;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00000000] 
struct AGamePlayerCamera_execCreateCamera_Parms
{
	class UClass*                                      CameraClass;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameCameraBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameCameraBase*                          NewCam;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00000000] 
struct UGameThirdPersonCameraMode_execSetViewOffset_Parms
{
	struct FViewOffsetData                             NewViewOffset;                                    		// 0x0000 (0x0024) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00000000] 
struct UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms
{
	struct FPostProcessSettings                        PP;                                               		// 0x0000 (0x0158) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00000000] 
struct UGameThirdPersonCameraMode_execUpdatePostProcess_Parms
{
	struct FTViewTarget                                VT;                                               		// 0x0000 (0x002C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  FocusLoc;                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDir;                                           		// 0x0054 (0x000C) [0x0000000000000000]              
	// float                                           FocusDist;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           SubjectDist;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00000000] 
struct UGameThirdPersonCameraMode_execDOFTrace_Parms
{
	class AActor*                                      TraceOwner;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartTrace;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00000000] 
struct UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms
{
	class AActor*                                      TraceOwner;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartTrace;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00000000] 
struct UGameThirdPersonCameraMode_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ViewTarget;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00000000] 
struct UGameThirdPersonCameraMode_execSetFocusPoint_Parms
{
	class APawn*                                       ViewedPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00000000] 
struct UGameThirdPersonCameraMode_execGetCameraWorstCaseLoc_Parms
{
	class APawn*                                       TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00000000] 
struct UGameThirdPersonCameraMode_execGetDesiredFOV_Parms
{
	class APawn*                                       ViewedPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00000000] 
struct UGameThirdPersonCameraMode_execAdjustViewOffset_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Offset;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00000000] 
struct UGameThirdPersonCameraMode_execOnBecomeInActive_Parms
{
	class APawn*                                       TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameThirdPersonCameraMode*                  NewMode;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00000000] 
struct UGameThirdPersonCameraMode_execOnBecomeActive_Parms
{
	class APawn*                                       TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGameThirdPersonCameraMode*                  PrevMode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00000000] 
struct UGameThirdPersonCameraMode_execInit_Parms
{
};

// Function GameFramework.GameDecalManager.SpawnDecalMinimal
// [0x00000000] 
struct AGameDecalManager_execSpawnDecalMinimal_Parms
{
	struct FVector                                     DecalLocation;                                    		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	float                                              InDecalLifeSpan;                                  		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              InCanSpawnDistance;                               		// 0x0010 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UGameDecal*                                  ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UGameDecal*                               Result;                                           		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FActiveDecalInfo                         DecalInfo;                                        		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
// [0x00000000] 
struct AGameDecalManager_execIsTooCloseToActiveDecal_Parms
{
	struct FVector                                     DecalLocation;                                    		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	float                                              InCanSpawnDistance;                               		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00000000] 
struct UGameSpecialMove_execRelativeToWorldOffset_Parms
{
	struct FRotator                                    InRotation;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RelativeSpaceOffset;                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00000000] 
struct UGameSpecialMove_execWorldToRelativeOffset_Parms
{
	struct FRotator                                    InRotation;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     WorldSpaceOffset;                                 		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00000000] 
struct UGameSpecialMove_execForcePawnRotation_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00000000] 
struct UGameSpecialMove_execMessageEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Sender;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00000000] 
struct UGameSpecialMove_execResetFacePreciseRotation_Parms
{
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00000000] 
struct UGameSpecialMove_execReachedPrecisePosition_Parms
{
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00000000] 
struct UGameSpecialMove_execSetFacePreciseRotation_Parms
{
	struct FRotator                                    RotationToFace;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              InterpolationTime;                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00000000] 
struct UGameSpecialMove_execSetReachPreciseDestination_Parms
{
	struct FVector                                     DestinationToReach;                               		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCancel : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00000000] 
struct UGameSpecialMove_execShouldReplicate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00000000] 
struct UGameSpecialMove_execSpecialMoveFlagsUpdated_Parms
{
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00000000] 
struct UGameSpecialMove_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00000000] 
struct UGameSpecialMove_execSpecialMoveEnded_Parms
{
	struct FName                                       PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00000000] 
struct UGameSpecialMove_execSpecialMoveStarted_Parms
{
	unsigned long                                      bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00000000] 
struct UGameSpecialMove_execInternalCanDoSpecialMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00000000] 
struct UGameSpecialMove_execCanDoSpecialMove_Parms
{
	unsigned long                                      bForceCheck : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00000000] 
struct UGameSpecialMove_execCanOverrideSpecialMove_Parms
{
	struct FName                                       InMove;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00000000] 
struct UGameSpecialMove_execCanOverrideMoveWith_Parms
{
	struct FName                                       NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00000000] 
struct UGameSpecialMove_execCanChainMove_Parms
{
	struct FName                                       NextMove;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00000000] 
struct UGameSpecialMove_execExtractSpecialMoveFlags_Parms
{
	int                                                Flags;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00000000] 
struct UGameSpecialMove_execInitSpecialMoveFlags_Parms
{
	int                                                out_Flags;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00000000] 
struct UGameSpecialMove_execInitSpecialMove_Parms
{
	class AGamePawn*                                   inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InHandle;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameStateObject.Reset
// [0x00000000] 
struct UGameStateObject_execReset_Parms
{
};

// Function GameFramework.GameStatsAggregator.AddEntryPairToDimension
// [0x00000000] 
struct UGameStatsAggregator_execAddEntryPairToDimension_Parms
{
	int                                                Dimension;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SubDimension;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EventID;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EventValue;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameStatsAggregator.AddEntryToDimension
// [0x00000000] 
struct UGameStatsAggregator_execAddEntryToDimension_Parms
{
	int                                                Dimension;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EventID;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EventValue;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00000000] 
struct UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool
// [0x00000000] 
struct UGameCrowdSpawnerInterface_execAddToAgentPool_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00000000] 
struct UGameCrowdSpawnerInterface_execAgentDestroyed_Parms
{
	class AGameCrowdAgent*                             Agent;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00000000] 
struct UGameCrowdSpawnInterface_execGetSpawnPosition_Parms
{
	class USeqAct_GameCrowdSpawner*                    Spawner;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnPos;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRot;                                         		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00000000] 
struct UGameFixedCamera_execOnBecomeActive_Parms
{
	class UGameCameraBase*                             OldCamera;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00000000] 
struct UGameFixedCamera_execUpdateCamera_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AGamePlayerCamera*                           CameraActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTViewTarget                                OutVT;                                            		// 0x000C (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ACameraActor*                             CamActor;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameKActorSpawnableEffect.Tick
// [0x00000000] 
struct AGameKActorSpawnableEffect_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00000000] 
struct AGameKActorSpawnableEffect_execFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00000000] 
struct AGameKActorSpawnableEffect_execPostBeginPlay_Parms
{
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00000000] 
struct AMobileMenuGame_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00000000] 
struct AMobileMenuGame_execStartMatch_Parms
{
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00000000] 
struct AMobileMenuGame_execPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMobileMenuPlayerController*              MPC;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00000000] 
struct UMobileMenuLabel_execRenderObject_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CX;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           CY;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           tx;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           TY;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif