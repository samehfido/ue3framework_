/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UnrealEd_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum UnrealEd.BeastSettingsFactoryNew.Presets
/*enum Presets
{
	Preview_DirectLight                                = 0,
	Preview_SingleBounce_GI                            = 1,
	Preview_FastMultiBounce_GI                         = 2,
	Preview_MultiBounce_GI                             = 3,
	Production_DirectLight                             = 4,
	Production_SingleBounce_GI                         = 5,
	Production_FastMultiBounce_GI                      = 6,
	Production_MultiBounce_GI                          = 7,
	Presets_MAX                                        = 8
};*/

// Enum UnrealEd.RenderTargetCubeExporterTGA.CubeFace
/*enum CubeFace
{
	CubeFace_MAX                                       = 0
};*/

// Enum UnrealEd.TextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_OneBitAlpha                                     = 6,
	TC_NormalmapUncompressed                           = 7,
	TC_NormalmapBC5                                    = 8,
	TC_MAX                                             = 9
};*/

// Enum UnrealEd.TextureFactory.LODGroup
/*enum LODGroup
{
	TEXTUREGROUP_World                                 = 0,
	TEXTUREGROUP_WorldNormalMap                        = 1,
	TEXTUREGROUP_WorldSpecular                         = 2,
	TEXTUREGROUP_Character                             = 3,
	TEXTUREGROUP_CharacterNormalMap                    = 4,
	TEXTUREGROUP_CharacterSpecular                     = 5,
	TEXTUREGROUP_Weapon                                = 6,
	TEXTUREGROUP_WeaponNormalMap                       = 7,
	TEXTUREGROUP_WeaponSpecular                        = 8,
	TEXTUREGROUP_Vehicle                               = 9,
	TEXTUREGROUP_VehicleNormalMap                      = 10,
	TEXTUREGROUP_VehicleSpecular                       = 11,
	TEXTUREGROUP_Cinematic                             = 12,
	TEXTUREGROUP_Effects                               = 13,
	TEXTUREGROUP_EffectsNotFiltered                    = 14,
	TEXTUREGROUP_Skybox                                = 15,
	TEXTUREGROUP_UI                                    = 16,
	TEXTUREGROUP_LightAndShadowMap                     = 17,
	TEXTUREGROUP_RenderTarget                          = 18,
	TEXTUREGROUP_PgDESCrowd                            = 19,
	TEXTUREGROUP_PgDESCrowdNormalMap                   = 20,
	TEXTUREGROUP_PgDESCrowdSpecular                    = 21,
	TEXTUREGROUP_PgDESExtra                            = 22,
	TEXTUREGROUP_PgDESExtraNormalMap                   = 23,
	TEXTUREGROUP_PgDESExtraSpecular                    = 24,
	TEXTUREGROUP_MAX                                   = 25
};*/

// Enum UnrealEd.TextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_AlphaComposite                               = 5,
	BLEND_MAX                                          = 6
};*/

// Enum UnrealEd.TextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_Anisotropic                                    = 4,
	MLM_MAX                                            = 5
};*/

// Enum UnrealEd.ReimportTextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_OneBitAlpha                                     = 6,
	TC_NormalmapUncompressed                           = 7,
	TC_NormalmapBC5                                    = 8,
	TC_MAX                                             = 9
};*/

// Enum UnrealEd.ReimportTextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_AlphaComposite                               = 5,
	BLEND_MAX                                          = 6
};*/

// Enum UnrealEd.ReimportTextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_Anisotropic                                    = 4,
	MLM_MAX                                            = 5
};*/

// Enum UnrealEd.TextureMovieFactory.MovieStreamSource
/*enum MovieStreamSource
{
	MovieStream_File                                   = 0,
	MovieStream_Memory                                 = 1,
	MovieStream_MAX                                    = 2
};*/

// Enum UnrealEd.TextureRenderTargetCubeFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	G8                                                 = 1,
	FloatRGB                                           = 2,
	FloatRGBA                                          = 3,
	Format_MAX                                         = 4
};*/

// Enum UnrealEd.TextureRenderTargetFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	G8                                                 = 1,
	FloatRGB                                           = 2,
	FloatRGBA                                          = 3,
	Format_MAX                                         = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UnrealEd.ActorFactorySelection
// 0x0000 (0x0060 - 0x0060)
class UActorFactorySelection : public USelection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1406 ];

		return pClassPointer;
	};

};

UClass* UActorFactorySelection::pClassPointer = NULL;

// Class UnrealEd.AkBankFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAkBankFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1407 ];

		return pClassPointer;
	};

};

UClass* UAkBankFactoryNew::pClassPointer = NULL;

// Class UnrealEd.AkEventFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAkEventFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1408 ];

		return pClassPointer;
	};

};

UClass* UAkEventFactoryNew::pClassPointer = NULL;

// Class UnrealEd.AnalyzeContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1409 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeCookedContentCommandlet
// 0x0018 (0x0094 - 0x007C)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1410 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1411 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeFallbackMaterialsCommandlet
// 0x003C (0x00B8 - 0x007C)
class UAnalyzeFallbackMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x007C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1412 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeFallbackMaterialsCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeKismetCommandlet
// 0x0040 (0x00BC - 0x007C)
class UAnalyzeKismetCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x007C (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1413 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeKismetCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeReferencedContentCommandlet
// 0x0488 (0x0504 - 0x007C)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x488 ];                           		// 0x007C (0x0488) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1414 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeReferencedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeReferencedObjectCommandlet
// 0x0048 (0x00C4 - 0x007C)
class UAnalyzeReferencedObjectCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x007C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1415 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeReferencedObjectCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeScriptCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1416 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeScriptCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo
// 0x0004 (0x0040 - 0x003C)
class UAnimNodeEditInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1417 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0008 (0x0048 - 0x0040)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0040 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1418 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo_AimOffset::pClassPointer = NULL;

// Class UnrealEd.AnimSetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimSetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1419 ];

		return pClassPointer;
	};

};

UClass* UAnimSetFactoryNew::pClassPointer = NULL;

// Class UnrealEd.AnimTreeEdSkelComponent
// 0x0004 (0x0540 - 0x053C)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x053C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1420 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeEdSkelComponent::pClassPointer = NULL;

// Class UnrealEd.AnimTreeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimTreeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1421 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeFactoryNew::pClassPointer = NULL;

// Class UnrealEd.ASVSkelComponent
// 0x0034 (0x0570 - 0x053C)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x34 ];                            		// 0x053C (0x0034) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1422 ];

		return pClassPointer;
	};

};

UClass* UASVSkelComponent::pClassPointer = NULL;

// Class UnrealEd.BatchExportCommandlet
// 0x0000 (0x007C - 0x007C)
class UBatchExportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1423 ];

		return pClassPointer;
	};

};

UClass* UBatchExportCommandlet::pClassPointer = NULL;

// Class UnrealEd.BeastSettingsFactoryNew
// 0x0004 (0x0074 - 0x0070)
class UBeastSettingsFactoryNew : public UFactory
{
public:
	unsigned char                                      Preset;                                           		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1424 ];

		return pClassPointer;
	};

};

UClass* UBeastSettingsFactoryNew::pClassPointer = NULL;

// Class UnrealEd.BrowserManager
// 0x0028 (0x0064 - 0x003C)
class UBrowserManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x003C (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1425 ];

		return pClassPointer;
	};

};

UClass* UBrowserManager::pClassPointer = NULL;

// Class UnrealEd.BrushBuilder
// 0x003C (0x0078 - 0x003C)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1426 ];

		return pClassPointer;
	};

};

UClass* UBrushBuilder::pClassPointer = NULL;

// Class UnrealEd.CubeBuilder
// 0x001C (0x0094 - 0x0078)
class UCubeBuilder : public UBrushBuilder
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0078 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1427 ];

		return pClassPointer;
	};

};

UClass* UCubeBuilder::pClassPointer = NULL;

// Class UnrealEd.CameraAnimFactory
// 0x0000 (0x0070 - 0x0070)
class UCameraAnimFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1428 ];

		return pClassPointer;
	};

};

UClass* UCameraAnimFactory::pClassPointer = NULL;

// Class UnrealEd.CascadeOptions
// 0x00D0 (0x010C - 0x003C)
class UCascadeOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xD0 ];                            		// 0x003C (0x00D0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1429 ];

		return pClassPointer;
	};

};

UClass* UCascadeOptions::pClassPointer = NULL;

// Class UnrealEd.CascadePreviewComponent
// 0x0008 (0x01E0 - 0x01D8)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x01D8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1430 ];

		return pClassPointer;
	};

};

UClass* UCascadePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.CheckLightMapUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckLightMapUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1431 ];

		return pClassPointer;
	};

};

UClass* UCheckLightMapUVsCommandlet::pClassPointer = NULL;

// Class UnrealEd.CheckpointGameAssetDatabaseCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckpointGameAssetDatabaseCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1432 ];

		return pClassPointer;
	};

};

UClass* UCheckpointGameAssetDatabaseCommandlet::pClassPointer = NULL;

// Class UnrealEd.ClassExporterUC
// 0x0000 (0x0064 - 0x0064)
class UClassExporterUC : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1433 ];

		return pClassPointer;
	};

};

UClass* UClassExporterUC::pClassPointer = NULL;

// Class UnrealEd.ClassFactoryUC
// 0x0000 (0x0070 - 0x0070)
class UClassFactoryUC : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1434 ];

		return pClassPointer;
	};

};

UClass* UClassFactoryUC::pClassPointer = NULL;

// Class UnrealEd.ColladaFactory
// 0x0004 (0x0074 - 0x0070)
class UColladaFactory : public UFactory
{
public:
	unsigned long                                      bImportAsSkeletalMesh : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1435 ];

		return pClassPointer;
	};

};

UClass* UColladaFactory::pClassPointer = NULL;

// Class UnrealEd.CompressAnimationsCommandlet
// 0x0000 (0x007C - 0x007C)
class UCompressAnimationsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1436 ];

		return pClassPointer;
	};

};

UClass* UCompressAnimationsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ConformCommandlet
// 0x0000 (0x007C - 0x007C)
class UConformCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1437 ];

		return pClassPointer;
	};

};

UClass* UConformCommandlet::pClassPointer = NULL;

// Class UnrealEd.ConvertMapToNavMesh
// 0x0000 (0x007C - 0x007C)
class UConvertMapToNavMesh : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1438 ];

		return pClassPointer;
	};

};

UClass* UConvertMapToNavMesh::pClassPointer = NULL;

// Class UnrealEd.CookPackagesCommandlet
// 0x1140 (0x11BC - 0x007C)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x1140 ];                          		// 0x007C (0x1140) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1439 ];

		return pClassPointer;
	};

};

UClass* UCookPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.CreateDefaultStyleCommandlet
// 0x0004 (0x0080 - 0x007C)
class UCreateDefaultStyleCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1440 ];

		return pClassPointer;
	};

};

UClass* UCreateDefaultStyleCommandlet::pClassPointer = NULL;

// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00B4 - 0x003C)
class UCurveEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x78 ];                            		// 0x003C (0x0078) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1441 ];

		return pClassPointer;
	};

};

UClass* UCurveEdOptions::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x003C - 0x003C)
class UCurveEdPresetBase : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1442 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPresetBase::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1443 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_CosWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x004C - 0x003C)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1444 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_LinearDecay::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x003C - 0x003C)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1445 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_Nothing::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1446 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_SineWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_UserSet
// 0x0004 (0x0040 - 0x003C)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1447 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_UserSet::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetCurveFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1448 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPresetCurveFactoryNew::pClassPointer = NULL;

// Class UnrealEd.CutDownContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UCutDownContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1449 ];

		return pClassPointer;
	};

};

UClass* UCutDownContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.DecalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UDecalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1450 ];

		return pClassPointer;
	};

};

UClass* UDecalMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.DiffPackagesCommandlet
// 0x0018 (0x0094 - 0x007C)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1451 ];

		return pClassPointer;
	};

};

UClass* UDiffPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1452 ];

		return pClassPointer;
	};

};

UClass* UDumpEmittersCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpLightmapInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1453 ];

		return pClassPointer;
	};

};

UClass* UDumpLightmapInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpShadersCommandlet
// 0x000C (0x0088 - 0x007C)
class UDumpShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1454 ];

		return pClassPointer;
	};

};

UClass* UDumpShadersCommandlet::pClassPointer = NULL;

// Class UnrealEd.EditorComponent
// 0x0028 (0x0200 - 0x01D8)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x01D8 (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1455 ];

		return pClassPointer;
	};

};

UClass* UEditorComponent::pClassPointer = NULL;

// Class UnrealEd.EdModeComponent
// 0x0000 (0x0200 - 0x0200)
class UEdModeComponent : public UEditorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1456 ];

		return pClassPointer;
	};

};

UClass* UEdModeComponent::pClassPointer = NULL;

// Class UnrealEd.EditorEngine
// 0x01DC (0x07D0 - 0x05F4)
class UEditorEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[ 0x1DC ];                           		// 0x05F4 (0x01DC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1457 ];

		return pClassPointer;
	};

};

UClass* UEditorEngine::pClassPointer = NULL;

// Class UnrealEd.UnrealEdEngine
// 0x0080 (0x0850 - 0x07D0)
class UUnrealEdEngine : public UEditorEngine
{
public:
	unsigned char                                      UnknownData00[ 0x80 ];                            		// 0x07D0 (0x0080) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1458 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdEngine::pClassPointer = NULL;

// Class UnrealEd.EditorPlayer
// 0x0000 (0x025C - 0x025C)
class UEditorPlayer : public ULocalPlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1459 ];

		return pClassPointer;
	};

};

UClass* UEditorPlayer::pClassPointer = NULL;

// Class UnrealEd.EditorUISceneClient
// 0x0018 (0x0110 - 0x00F8)
class UEditorUISceneClient : public UUISceneClient
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x00F8 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1460 ];

		return pClassPointer;
	};

};

UClass* UEditorUISceneClient::pClassPointer = NULL;

// Class UnrealEd.EditorUserSettings
// 0x0010 (0x004C - 0x003C)
class UEditorUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1461 ];

		return pClassPointer;
	};

};

UClass* UEditorUserSettings::pClassPointer = NULL;

// Class UnrealEd.EditorViewportInput
// 0x0004 (0x00DC - 0x00D8)
class UEditorViewportInput : public UInput
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D8 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1462 ];

		return pClassPointer;
	};

};

UClass* UEditorViewportInput::pClassPointer = NULL;

// Class UnrealEd.ExamineOutersCommandlet
// 0x0000 (0x007C - 0x007C)
class UExamineOutersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1463 ];

		return pClassPointer;
	};

};

UClass* UExamineOutersCommandlet::pClassPointer = NULL;

// Class UnrealEd.ExporterT3DX
// 0x0000 (0x0064 - 0x0064)
class UExporterT3DX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1464 ];

		return pClassPointer;
	};

};

UClass* UExporterT3DX::pClassPointer = NULL;

// Class UnrealEd.MaterialExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UMaterialExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1465 ];

		return pClassPointer;
	};

};

UClass* UMaterialExporterT3D::pClassPointer = NULL;

// Class UnrealEd.StaticMeshExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1466 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterT3D::pClassPointer = NULL;

// Class UnrealEd.TextureExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1467 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterT3D::pClassPointer = NULL;

// Class UnrealEd.ExportLocCommandlet
// 0x0000 (0x007C - 0x007C)
class UExportLocCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1468 ];

		return pClassPointer;
	};

};

UClass* UExportLocCommandlet::pClassPointer = NULL;

// Class UnrealEd.FaceFXStudioSkelComponent
// 0x0004 (0x0540 - 0x053C)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x053C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1469 ];

		return pClassPointer;
	};

};

UClass* UFaceFXStudioSkelComponent::pClassPointer = NULL;

// Class UnrealEd.FindDarkDiffuseTexturesCommandlet
// 0x004C (0x00C8 - 0x007C)
class UFindDarkDiffuseTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x007C (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1470 ];

		return pClassPointer;
	};

};

UClass* UFindDarkDiffuseTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1471 ];

		return pClassPointer;
	};

};

UClass* UFindDuplicateKismetObjectsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1472 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterMismatchedLODsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1473 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterModifiedLODsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindEmitterModuleLODErrorsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModuleLODErrorsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1474 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterModuleLODErrorsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindQuestionableTexturesCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1475 ];

		return pClassPointer;
	};

};

UClass* UFindQuestionableTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1476 ];

		return pClassPointer;
	};

};

UClass* UFindTexturesWithMissingPhysicalMaterialsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindUniqueSpecularTextureMaterialsCommandlet
// 0x0044 (0x00C0 - 0x007C)
class UFindUniqueSpecularTextureMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x44 ];                            		// 0x007C (0x0044) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1477 ];

		return pClassPointer;
	};

};

UClass* UFindUniqueSpecularTextureMaterialsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1478 ];

		return pClassPointer;
	};

};

UClass* UFixAmbiguousMaterialParametersCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1479 ];

		return pClassPointer;
	};

};

UClass* UFixupEmittersCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupRedirectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1480 ];

		return pClassPointer;
	};

};

UClass* UFixupRedirectsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupSourceUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1481 ];

		return pClassPointer;
	};

};

UClass* UFixupSourceUVsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FonixFactory
// 0x0000 (0x0070 - 0x0070)
class UFonixFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1482 ];

		return pClassPointer;
	};

};

UClass* UFonixFactory::pClassPointer = NULL;

// Class UnrealEd.GameStatsDBUploader
// 0x0004 (0x0130 - 0x012C)
class UGameStatsDBUploader : public UGameplayEventsReader
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x012C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1483 ];

		return pClassPointer;
	};

};

UClass* UGameStatsDBUploader::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType
// 0x001C (0x0058 - 0x003C)
class UGenericBrowserType : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x003C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1484 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AkBank
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AkBank : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1485 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AkBank::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AkEvent
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AkEvent : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1486 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AkEvent::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1487 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Animation::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1488 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AnimTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1489 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Archetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIArchetype
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIArchetype : public UGenericBrowserType_Archetype
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1490 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UIArchetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1491 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CameraAnim::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1492 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CurveEdPresetCurve::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1493 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Custom::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1494 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_All::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1495 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_DecalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DESExtraType
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DESExtraType : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1496 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_DESExtraType::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1497 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAnimSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1498 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1499 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Font::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1500 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_LensFlare::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1501 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Material::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1502 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1503 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1504 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphTargetSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1505 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphWeightSequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1506 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1507 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1508 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicsAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXDestructible
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXDestructible : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1509 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysXDestructible::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1510 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysXParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1511 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PostProcess::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1512 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Prefab::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ProcBuildingRuleset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ProcBuildingRuleset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1513 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ProcBuildingRuleset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1514 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1515 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SkeletalMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1516 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sounds::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundClass
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundClass : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1517 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundClass::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1518 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundCue::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundMode
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundMode : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1519 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundMode::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1520 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundWave::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1521 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeechRecognition::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeedTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeedTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1522 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeedTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1523 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_StaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FracturedStaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FracturedStaticMesh : public UGenericBrowserType_StaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1524 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FracturedStaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1525 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainLayer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1526 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1527 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Texture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1528 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_RenderTexture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIScene
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIScene : public UGenericBrowserType
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1529 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UIScene::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UISkin
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UISkin : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1530 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UISkin::pClassPointer = NULL;

// Class UnrealEd.GeomModifier
// 0x0010 (0x004C - 0x003C)
class UGeomModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1531 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Edit
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Edit : public UGeomModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1532 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Edit::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Clip
// 0x001C (0x0068 - 0x004C)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x004C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1533 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Clip::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Create
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1534 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Create::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Delete
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1535 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Delete::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Extrude
// 0x000C (0x0058 - 0x004C)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x004C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1536 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Extrude::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Flip
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1537 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Flip::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Lathe
// 0x0010 (0x005C - 0x004C)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x004C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1538 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Lathe::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Optimize
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Optimize : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1539 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Optimize::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Pen
// 0x0020 (0x006C - 0x004C)
class UGeomModifier_Pen : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x004C (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1540 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Pen::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Split
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1541 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Split::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Triangulate
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1542 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Triangulate::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Turn
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1543 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Turn::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Weld
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1544 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Weld::pClassPointer = NULL;

// Class UnrealEd.InterpEdOptions
// 0x0010 (0x004C - 0x003C)
class UInterpEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1545 ];

		return pClassPointer;
	};

};

UClass* UInterpEdOptions::pClassPointer = NULL;

// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1546 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAkEventHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAkEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1547 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAkRTPCHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAkRTPCHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1548 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkRTPCHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1549 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAnimControlHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1550 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackDirectorHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1551 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1552 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackFaceFXHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1553 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackFloatPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackParticleReplayHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackParticleReplayHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1554 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackParticleReplayHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1555 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackSoundHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1556 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackToggleHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1557 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackVectorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1558 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackLinearColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackLinearColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1559 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackLinearColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVisibilityHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVisibilityHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1560 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackVisibilityHelper::pClassPointer = NULL;

// Class UnrealEd.KismetBindings
// 0x0018 (0x0054 - 0x003C)
class UKismetBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x003C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1561 ];

		return pClassPointer;
	};

};

UClass* UKismetBindings::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorOptions
// 0x00A0 (0x00DC - 0x003C)
class ULensFlareEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x003C (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1562 ];

		return pClassPointer;
	};

};

UClass* ULensFlareEditorOptions::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorPropertyWrapper
// 0x0148 (0x0184 - 0x003C)
class ULensFlareEditorPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x148 ];                           		// 0x003C (0x0148) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1563 ];

		return pClassPointer;
	};

};

UClass* ULensFlareEditorPropertyWrapper::pClassPointer = NULL;

// Class UnrealEd.LensFlareFactoryNew
// 0x0000 (0x0070 - 0x0070)
class ULensFlareFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1564 ];

		return pClassPointer;
	};

};

UClass* ULensFlareFactoryNew::pClassPointer = NULL;

// Class UnrealEd.LensFlarePreviewComponent
// 0x0008 (0x01E0 - 0x01D8)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x01D8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1565 ];

		return pClassPointer;
	};

};

UClass* ULensFlarePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.LevelExporterLOD
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterLOD : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1566 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterLOD::pClassPointer = NULL;

// Class UnrealEd.LevelExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1567 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterOBJ::pClassPointer = NULL;

// Class UnrealEd.LevelExporterSTL
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterSTL : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1568 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterSTL::pClassPointer = NULL;

// Class UnrealEd.LevelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1569 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterT3D::pClassPointer = NULL;

// Class UnrealEd.LevelFactory
// 0x0000 (0x0070 - 0x0070)
class ULevelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1570 ];

		return pClassPointer;
	};

};

UClass* ULevelFactory::pClassPointer = NULL;

// Class UnrealEd.LightingChannelsObject
// 0x0004 (0x0040 - 0x003C)
class ULightingChannelsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1571 ];

		return pClassPointer;
	};

};

UClass* ULightingChannelsObject::pClassPointer = NULL;

// Class UnrealEd.LightmassOptionsObject
// 0x0018 (0x0054 - 0x003C)
class ULightmassOptionsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x003C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1572 ];

		return pClassPointer;
	};

};

UClass* ULightmassOptionsObject::pClassPointer = NULL;

// Class UnrealEd.LinkedObjectFactory
// 0x0004 (0x0074 - 0x0070)
class ULinkedObjectFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1573 ];

		return pClassPointer;
	};

};

UClass* ULinkedObjectFactory::pClassPointer = NULL;

// Class UnrealEd.ListCorruptedComponentsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1574 ];

		return pClassPointer;
	};

};

UClass* UListCorruptedComponentsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListCustomMaterialExpressionsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCustomMaterialExpressionsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1575 ];

		return pClassPointer;
	};

};

UClass* UListCustomMaterialExpressionsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListDistanceCrossFadeNodesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListDistanceCrossFadeNodesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1576 ];

		return pClassPointer;
	};

};

UClass* UListDistanceCrossFadeNodesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListEmittersUsingModuleCommandlet
// 0x0000 (0x007C - 0x007C)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1577 ];

		return pClassPointer;
	};

};

UClass* UListEmittersUsingModuleCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListLoopingEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1578 ];

		return pClassPointer;
	};

};

UClass* UListLoopingEmittersCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListPackagesReferencingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1579 ];

		return pClassPointer;
	};

};

UClass* UListPackagesReferencingCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1580 ];

		return pClassPointer;
	};

};

UClass* UListPSysFixedBoundSettingCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListScriptReferencedContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1581 ];

		return pClassPointer;
	};

};

UClass* UListScriptReferencedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListSoundNodeWavesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListSoundNodeWavesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1582 ];

		return pClassPointer;
	};

};

UClass* UListSoundNodeWavesCommandlet::pClassPointer = NULL;

// Class UnrealEd.LoadPackageCommandlet
// 0x0000 (0x007C - 0x007C)
class ULoadPackageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1583 ];

		return pClassPointer;
	};

};

UClass* ULoadPackageCommandlet::pClassPointer = NULL;

// Class UnrealEd.LocSoundInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1584 ];

		return pClassPointer;
	};

};

UClass* ULocSoundInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.MakeCommandlet
// 0x0000 (0x007C - 0x007C)
class UMakeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1585 ];

		return pClassPointer;
	};

};

UClass* UMakeCommandlet::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceConstant
// 0x0098 (0x00D4 - 0x003C)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x98 ];                            		// 0x003C (0x0098) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1586 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x009C (0x00D8 - 0x003C)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x9C ];                            		// 0x003C (0x009C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1587 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorMeshComponent
// 0x0004 (0x0240 - 0x023C)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x023C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1588 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorOptions
// 0x0010 (0x004C - 0x003C)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1589 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorOptions::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x0004 (0x0540 - 0x053C)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x053C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1590 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialFactory
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1591 ];

		return pClassPointer;
	};

};

UClass* UMaterialFactory::pClassPointer = NULL;

// Class UnrealEd.MaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1592 ];

		return pClassPointer;
	};

};

UClass* UMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceConstantFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1593 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceConstantFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1594 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceTimeVaryingFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MergePackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMergePackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1595 ];

		return pClassPointer;
	};

};

UClass* UMergePackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.MineCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMineCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1596 ];

		return pClassPointer;
	};

};

UClass* UMineCookedPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ModelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UModelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1597 ];

		return pClassPointer;
	};

};

UClass* UModelExporterT3D::pClassPointer = NULL;

// Class UnrealEd.ModelFactory
// 0x0000 (0x0070 - 0x0070)
class UModelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1598 ];

		return pClassPointer;
	};

};

UClass* UModelFactory::pClassPointer = NULL;

// Class UnrealEd.ObjectExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UObjectExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1599 ];

		return pClassPointer;
	};

};

UClass* UObjectExporterT3D::pClassPointer = NULL;

// Class UnrealEd.PackageExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPackageExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1600 ];

		return pClassPointer;
	};

};

UClass* UPackageExporterT3D::pClassPointer = NULL;

// Class UnrealEd.PackageFactory
// 0x0000 (0x0070 - 0x0070)
class UPackageFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1601 ];

		return pClassPointer;
	};

};

UClass* UPackageFactory::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1602 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PatchScriptCommandlet
// 0x0004 (0x0080 - 0x007C)
class UPatchScriptCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1603 ];

		return pClassPointer;
	};

};

UClass* UPatchScriptCommandlet::pClassPointer = NULL;

// Class UnrealEd.PerformMapCheckCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1604 ];

		return pClassPointer;
	};

};

UClass* UPerformMapCheckCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindRenamedPrefabSequencesCommandlet
// 0x0048 (0x00DC - 0x0094)
class UFindRenamedPrefabSequencesCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0094 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1605 ];

		return pClassPointer;
	};

};

UClass* UFindRenamedPrefabSequencesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindStaticActorsRefsCommandlet
// 0x00A0 (0x0134 - 0x0094)
class UFindStaticActorsRefsCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0094 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1606 ];

		return pClassPointer;
	};

};

UClass* UFindStaticActorsRefsCommandlet::pClassPointer = NULL;

// Class UnrealEd.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x007C - 0x007C)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1607 ];

		return pClassPointer;
	};

};

UClass* UPerformTerrainMaterialDumpCommandlet::pClassPointer = NULL;

// Class UnrealEd.PersistentCookerData
// 0x010C (0x0148 - 0x003C)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10C ];                           		// 0x003C (0x010C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1608 ];

		return pClassPointer;
	};

};

UClass* UPersistentCookerData::pClassPointer = NULL;

// Class UnrealEd.PhATSimOptions
// 0x004C (0x0088 - 0x003C)
class UPhATSimOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x003C (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1609 ];

		return pClassPointer;
	};

};

UClass* UPhATSimOptions::pClassPointer = NULL;

// Class UnrealEd.PhATSkeletalMeshComponent
// 0x0014 (0x0550 - 0x053C)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x053C (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1610 ];

		return pClassPointer;
	};

};

UClass* UPhATSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.PhysicalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1611 ];

		return pClassPointer;
	};

};

UClass* UPhysicalMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PhysXFractureOptions
// 0x000C (0x0048 - 0x003C)
class UPhysXFractureOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1612 ];

		return pClassPointer;
	};

};

UClass* UPhysXFractureOptions::pClassPointer = NULL;

// Class UnrealEd.PhysXParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysXParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1613 ];

		return pClassPointer;
	};

};

UClass* UPhysXParticleSystemFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PIEToNormalCommandlet
// 0x0000 (0x007C - 0x007C)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1614 ];

		return pClassPointer;
	};

};

UClass* UPIEToNormalCommandlet::pClassPointer = NULL;

// Class UnrealEd.PkgInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UPkgInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1615 ];

		return pClassPointer;
	};

};

UClass* UPkgInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.PolysExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPolysExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1616 ];

		return pClassPointer;
	};

};

UClass* UPolysExporterT3D::pClassPointer = NULL;

// Class UnrealEd.PolysFactory
// 0x0000 (0x0070 - 0x0070)
class UPolysFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1617 ];

		return pClassPointer;
	};

};

UClass* UPolysFactory::pClassPointer = NULL;

// Class UnrealEd.PostProcessFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPostProcessFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1618 ];

		return pClassPointer;
	};

};

UClass* UPostProcessFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PrecompileShadersCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1619 ];

		return pClassPointer;
	};

};

UClass* UPrecompileShadersCommandlet::pClassPointer = NULL;

// Class UnrealEd.ProcBuildingRulesetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UProcBuildingRulesetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1620 ];

		return pClassPointer;
	};

};

UClass* UProcBuildingRulesetFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPropertyDrawProxy : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1621 ];

		return pClassPointer;
	};

};

UClass* UPropertyDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPlayerInputMask_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1622 ];

		return pClassPointer;
	};

};

UClass* UPlayerInputMask_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UUITexture_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1623 ];

		return pClassPointer;
	};

};

UClass* UUITexture_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputProxy
// 0x0010 (0x004C - 0x003C)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1624 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputProxy::pClassPointer = NULL;

// Class UnrealEd.CustomInputProxy_Base
// 0x0004 (0x0050 - 0x004C)
class UCustomInputProxy_Base : public UPropertyInputProxy
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1625 ];

		return pClassPointer;
	};

};

UClass* UCustomInputProxy_Base::pClassPointer = NULL;

// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x004C - 0x004C)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1626 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputArrayItemBase::pClassPointer = NULL;

// Class UnrealEd.PropertyInputBool
// 0x0000 (0x004C - 0x004C)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1627 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputBool::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UPlayerInputMask_CustomInputProxy : public UPropertyInputBool
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1628 ];

		return pClassPointer;
	};

};

UClass* UPlayerInputMask_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputCombo
// 0x0008 (0x0054 - 0x004C)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x004C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1629 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputCombo::pClassPointer = NULL;

// Class UnrealEd.UIStateClass_CustomInputProxy
// 0x0000 (0x0054 - 0x0054)
class UUIStateClass_CustomInputProxy : public UPropertyInputCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1630 ];

		return pClassPointer;
	};

};

UClass* UUIStateClass_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x004C - 0x004C)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1631 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputEditInline::pClassPointer = NULL;

// Class UnrealEd.UIState_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UUIState_CustomInputProxy : public UPropertyInputEditInline
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1632 ];

		return pClassPointer;
	};

};

UClass* UUIState_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputText
// 0x000C (0x0058 - 0x004C)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x004C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1633 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputText::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomInputProxy
// 0x0000 (0x0058 - 0x0058)
class UUITexture_CustomInputProxy : public UPropertyInputText
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1634 ];

		return pClassPointer;
	};

};

UClass* UUITexture_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.RebuildMapCommandlet
// 0x0000 (0x007C - 0x007C)
class URebuildMapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1635 ];

		return pClassPointer;
	};

};

UClass* URebuildMapCommandlet::pClassPointer = NULL;

// Class UnrealEd.RenderTargetCubeExporterTGA
// 0x0004 (0x0068 - 0x0064)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	unsigned char                                      CubeFace;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1636 ];

		return pClassPointer;
	};

};

UClass* URenderTargetCubeExporterTGA::pClassPointer = NULL;

// Class UnrealEd.RenderTargetExporterTGA
// 0x0000 (0x0064 - 0x0064)
class URenderTargetExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1637 ];

		return pClassPointer;
	};

};

UClass* URenderTargetExporterTGA::pClassPointer = NULL;

// Class UnrealEd.ReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UReplaceActorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1638 ];

		return pClassPointer;
	};

};

UClass* UReplaceActorCommandlet::pClassPointer = NULL;

// Class UnrealEd.ResavePackagesCommandlet
// 0x0060 (0x00DC - 0x007C)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x60 ];                            		// 0x007C (0x0060) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1639 ];

		return pClassPointer;
	};

};

UClass* UResavePackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ChangePrefabSequenceClassCommandlet
// 0x0000 (0x00DC - 0x00DC)
class UChangePrefabSequenceClassCommandlet : public UResavePackagesCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1640 ];

		return pClassPointer;
	};

};

UClass* UChangePrefabSequenceClassCommandlet::pClassPointer = NULL;

// Class UnrealEd.ScaleAudioVolumeCommandlet
// 0x0000 (0x007C - 0x007C)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1641 ];

		return pClassPointer;
	};

};

UClass* UScaleAudioVolumeCommandlet::pClassPointer = NULL;

// Class UnrealEd.SequenceExporterT3D
// 0x0000 (0x0064 - 0x0064)
class USequenceExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1642 ];

		return pClassPointer;
	};

};

UClass* USequenceExporterT3D::pClassPointer = NULL;

// Class UnrealEd.SequenceFactory
// 0x0000 (0x0070 - 0x0070)
class USequenceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1643 ];

		return pClassPointer;
	};

};

UClass* USequenceFactory::pClassPointer = NULL;

// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class USequenceObjectHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1644 ];

		return pClassPointer;
	};

};

UClass* USequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UIEvent_MetaObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUIEvent_MetaObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1645 ];

		return pClassPointer;
	};

};

UClass* UUIEvent_MetaObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UISequenceHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1646 ];

		return pClassPointer;
	};

};

UClass* UUISequenceHelper::pClassPointer = NULL;

// Class UnrealEd.UISequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1647 ];

		return pClassPointer;
	};

};

UClass* UUISequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.SetMaterialUsageCommandlet
// 0x0000 (0x007C - 0x007C)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1648 ];

		return pClassPointer;
	};

};

UClass* USetMaterialUsageCommandlet::pClassPointer = NULL;

// Class UnrealEd.SetPackageFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1649 ];

		return pClassPointer;
	};

};

UClass* USetPackageFlagsCommandlet::pClassPointer = NULL;

// Class UnrealEd.SetTextureLODGroupCommandlet
// 0x0000 (0x007C - 0x007C)
class USetTextureLODGroupCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1650 ];

		return pClassPointer;
	};

};

UClass* USetTextureLODGroupCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowObjectCountCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1651 ];

		return pClassPointer;
	};

};

UClass* UShowObjectCountCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowPropertyFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowPropertyFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1652 ];

		return pClassPointer;
	};

};

UClass* UShowPropertyFlagsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowStylesCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowStylesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1653 ];

		return pClassPointer;
	};

};

UClass* UShowStylesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowTaggedPropsCommandlet
// 0x0090 (0x010C - 0x007C)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x90 ];                            		// 0x007C (0x0090) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1654 ];

		return pClassPointer;
	};

};

UClass* UShowTaggedPropsCommandlet::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshFactory
// 0x0008 (0x0078 - 0x0070)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                       		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1655 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshFactory::pClassPointer = NULL;

// Class UnrealEd.SoundClassFactory
// 0x0000 (0x0070 - 0x0070)
class USoundClassFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1656 ];

		return pClassPointer;
	};

};

UClass* USoundClassFactory::pClassPointer = NULL;

// Class UnrealEd.SoundClassInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class USoundClassInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1657 ];

		return pClassPointer;
	};

};

UClass* USoundClassInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.SoundCueFactoryNew
// 0x0000 (0x0070 - 0x0070)
class USoundCueFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1658 ];

		return pClassPointer;
	};

};

UClass* USoundCueFactoryNew::pClassPointer = NULL;

// Class UnrealEd.SoundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1659 ];

		return pClassPointer;
	};

};

UClass* USoundExporterWAV::pClassPointer = NULL;

// Class UnrealEd.SoundFactory
// 0x0014 (0x0084 - 0x0070)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeLoopingNode : 1;                          		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeModulatorNode : 1;                        		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              CueVolume;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1660 ];

		return pClassPointer;
	};

};

UClass* USoundFactory::pClassPointer = NULL;

// Class UnrealEd.SoundModeFactory
// 0x0000 (0x0070 - 0x0070)
class USoundModeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1661 ];

		return pClassPointer;
	};

};

UClass* USoundModeFactory::pClassPointer = NULL;

// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x003C - 0x003C)
class USoundNodeHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1662 ];

		return pClassPointer;
	};

};

UClass* USoundNodeHelper::pClassPointer = NULL;

// Class UnrealEd.SoundSurroundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundSurroundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1663 ];

		return pClassPointer;
	};

};

UClass* USoundSurroundExporterWAV::pClassPointer = NULL;

// Class UnrealEd.SoundSurroundFactory
// 0x0004 (0x0074 - 0x0070)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                        		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1664 ];

		return pClassPointer;
	};

};

UClass* USoundSurroundFactory::pClassPointer = NULL;

// Class UnrealEd.SoundTTSFactory
// 0x0024 (0x0094 - 0x0070)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeLoopingNode : 1;                          		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeModulatorNode : 1;                        		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseTTS : 1;                                      		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     SpokenText;                                       		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CueVolume;                                        		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1665 ];

		return pClassPointer;
	};

};

UClass* USoundTTSFactory::pClassPointer = NULL;

// Class UnrealEd.SpeedTreeFactory
// 0x0000 (0x0070 - 0x0070)
class USpeedTreeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1666 ];

		return pClassPointer;
	};

};

UClass* USpeedTreeFactory::pClassPointer = NULL;

// Class UnrealEd.StaticMeshExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1667 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterOBJ::pClassPointer = NULL;

// Class UnrealEd.StaticMeshFactory
// 0x0014 (0x0084 - 0x0070)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneConvexPerUCXObject : 1;                       		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSingleSmoothGroupSingleTangent : 1;              		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1668 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportStaticMeshFactory
// 0x0004 (0x0088 - 0x0084)
class UReimportStaticMeshFactory : public UStaticMeshFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1669 ];

		return pClassPointer;
	};

};

UClass* UReimportStaticMeshFactory::pClassPointer = NULL;

// Class UnrealEd.TextureFactory
// 0x0050 (0x00C0 - 0x0070)
class UTextureFactory : public UFactory
{
public:
	unsigned long                                      NoCompression : 1;                                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CompressionNoAlpha : 1;                           		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DeferCompression : 1;                             		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Create_Material_ : 1;                             		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Diffuse : 1;                               		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Emissive : 1;                              		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Specular : 1;                            		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Emissive : 1;                            		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity : 1;                             		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity_Mask : 1;                        		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Two_Sided_ : 1;                                   		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Blending;                                         		// 0x00A0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Lighting_Model;                                   		// 0x00A1 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LODGroup;                                         		// 0x00A2 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipBook : 1;                                     		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      LightMap : 1;                                     		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Dither_Mip_maps_alpha_ : 1;                       		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_R : 1;                            		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_G : 1;                            		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_B : 1;                            		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_A : 1;                            		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1670 ];

		return pClassPointer;
	};

};

UClass* UTextureFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportTextureFactory
// 0x0008 (0x00C8 - 0x00C0)
class UReimportTextureFactory : public UTextureFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00C0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1671 ];

		return pClassPointer;
	};

};

UClass* UReimportTextureFactory::pClassPointer = NULL;

// Class UnrealEd.StaticMeshMode_Options
// 0x0048 (0x0084 - 0x003C)
class UStaticMeshMode_Options : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x003C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1672 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshMode_Options::pClassPointer = NULL;

// Class UnrealEd.StripSourceCommandlet
// 0x0000 (0x007C - 0x007C)
class UStripSourceCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1673 ];

		return pClassPointer;
	};

};

UClass* UStripSourceCommandlet::pClassPointer = NULL;

// Class UnrealEd.TagReferencedAssetsCommandlet
// 0x0000 (0x007C - 0x007C)
class UTagReferencedAssetsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1674 ];

		return pClassPointer;
	};

};

UClass* UTagReferencedAssetsCommandlet::pClassPointer = NULL;

// Class UnrealEd.TagSuboptimalTexturesCommandlet
// 0x000C (0x0088 - 0x007C)
class UTagSuboptimalTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1675 ];

		return pClassPointer;
	};

};

UClass* UTagSuboptimalTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.TerrainEditOptions
// 0x00C8 (0x0104 - 0x003C)
class UTerrainEditOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC8 ];                            		// 0x003C (0x00C8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1676 ];

		return pClassPointer;
	};

};

UClass* UTerrainEditOptions::pClassPointer = NULL;

// Class UnrealEd.TerrainExporterT3D
// 0x0008 (0x006C - 0x0064)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0064 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1677 ];

		return pClassPointer;
	};

};

UClass* UTerrainExporterT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainFactory
// 0x0004 (0x0074 - 0x0070)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1678 ];

		return pClassPointer;
	};

};

UClass* UTerrainFactory::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapExporter
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1679 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporter::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1680 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterG16BMPT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1681 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterTextT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactory
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactory : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1682 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactory::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1683 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMP::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1684 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMPT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1685 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryTextT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainLayerSetupFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1686 ];

		return pClassPointer;
	};

};

UClass* UTerrainLayerSetupFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TerrainMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1687 ];

		return pClassPointer;
	};

};

UClass* UTerrainMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TestCompressionCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestCompressionCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1688 ];

		return pClassPointer;
	};

};

UClass* UTestCompressionCommandlet::pClassPointer = NULL;

// Class UnrealEd.TestWordWrapCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1689 ];

		return pClassPointer;
	};

};

UClass* UTestWordWrapCommandlet::pClassPointer = NULL;

// Class UnrealEd.TextBufferExporterTXT
// 0x0000 (0x0064 - 0x0064)
class UTextBufferExporterTXT : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1690 ];

		return pClassPointer;
	};

};

UClass* UTextBufferExporterTXT::pClassPointer = NULL;

// Class UnrealEd.TextureCubeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTextureCubeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1691 ];

		return pClassPointer;
	};

};

UClass* UTextureCubeFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TextureExporterBMP
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterBMP : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1692 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterBMP::pClassPointer = NULL;

// Class UnrealEd.TextureExporterPCX
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterPCX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1693 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterPCX::pClassPointer = NULL;

// Class UnrealEd.TextureExporterTGA
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1694 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterTGA::pClassPointer = NULL;

// Class UnrealEd.FontFactory
// 0x0000 (0x00C0 - 0x00C0)
class UFontFactory : public UTextureFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1695 ];

		return pClassPointer;
	};

};

UClass* UFontFactory::pClassPointer = NULL;

// Class UnrealEd.TrueTypeFontFactory
// 0x0004 (0x00C4 - 0x00C0)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	class UFontImportOptions*                          ImportOptions;                                    		// 0x00C0 (0x0004) [0x0000000006000001]              ( CPF_Edit | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1696 ];

		return pClassPointer;
	};

};

UClass* UTrueTypeFontFactory::pClassPointer = NULL;

// Class UnrealEd.TrueTypeMultiFontFactory
// 0x0024 (0x00E8 - 0x00C4)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray< float >                                    ResTests;                                         		// 0x00C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    ResHeights;                                       		// 0x00D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UFont* >                             ResFonts;                                         		// 0x00DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1697 ];

		return pClassPointer;
	};

};

UClass* UTrueTypeMultiFontFactory::pClassPointer = NULL;

// Class UnrealEd.TextureMovieFactory
// 0x0004 (0x0074 - 0x0070)
class UTextureMovieFactory : public UFactory
{
public:
	unsigned char                                      MovieStreamSource;                                		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1698 ];

		return pClassPointer;
	};

};

UClass* UTextureMovieFactory::pClassPointer = NULL;

// Class UnrealEd.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x0078 - 0x0070)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1699 ];

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetCubeFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TextureRenderTargetFactoryNew
// 0x000C (0x007C - 0x0070)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0078 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1700 ];

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetFactoryNew::pClassPointer = NULL;

// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailLabelRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1701 ];

		return pClassPointer;
	};

};

UClass* UThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1702 ];

		return pClassPointer;
	};

};

UClass* UAnimSetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1703 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1704 ];

		return pClassPointer;
	};

};

UClass* UFontThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1705 ];

		return pClassPointer;
	};

};

UClass* UGenericThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1706 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0004 (0x0040 - 0x003C)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1707 ];

		return pClassPointer;
	};

};

UClass* UMemCountThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UParticleSystemLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1708 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1709 ];

		return pClassPointer;
	};

};

UClass* UPhysicsAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysXDestructibleLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysXDestructibleLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1710 ];

		return pClassPointer;
	};

};

UClass* UPhysXDestructibleLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1711 ];

		return pClassPointer;
	};

};

UClass* UPostProcessLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1712 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1713 ];

		return pClassPointer;
	};

};

UClass* USoundLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1714 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.FracturedStaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFracturedStaticMeshLabelRenderer : public UStaticMeshLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1715 ];

		return pClassPointer;
	};

};

UClass* UFracturedStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailManager
// 0x008C (0x00C8 - 0x003C)
class UThumbnailManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8C ];                            		// 0x003C (0x008C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1716 ];

		return pClassPointer;
	};

};

UClass* UThumbnailManager::pClassPointer = NULL;

// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1717 ];

		return pClassPointer;
	};

};

UClass* UThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1718 ];

		return pClassPointer;
	};

};

UClass* UDefaultSizedThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1719 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1720 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1721 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.IconThumbnailRenderer
// 0x0010 (0x004C - 0x003C)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1722 ];

		return pClassPointer;
	};

};

UClass* UIconThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1723 ];

		return pClassPointer;
	};

};

UClass* UArchetypeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1724 ];

		return pClassPointer;
	};

};

UClass* UPrefabThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.UISceneThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUISceneThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1725 ];

		return pClassPointer;
	};

};

UClass* UUISceneThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1726 ];

		return pClassPointer;
	};

};

UClass* UTextureThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1727 ];

		return pClassPointer;
	};

};

UClass* UFontThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1728 ];

		return pClassPointer;
	};

};

UClass* ULensFlareThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1729 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1730 ];

		return pClassPointer;
	};

};

UClass* UTextureCubeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.Transactor
// 0x0000 (0x003C - 0x003C)
class UTransactor : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1731 ];

		return pClassPointer;
	};

};

UClass* UTransactor::pClassPointer = NULL;

// Class UnrealEd.TransBuffer
// 0x0028 (0x0064 - 0x003C)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x003C (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1732 ];

		return pClassPointer;
	};

};

UClass* UTransBuffer::pClassPointer = NULL;

// Class UnrealEd.UISceneExporter
// 0x0000 (0x0064 - 0x0064)
class UUISceneExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1733 ];

		return pClassPointer;
	};

};

UClass* UUISceneExporter::pClassPointer = NULL;

// Class UnrealEd.UISceneFactory
// 0x0008 (0x0078 - 0x0070)
class UUISceneFactory : public UFactory
{
public:
	class UClass*                                      UISceneClass;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1734 ];

		return pClassPointer;
	};

};

UClass* UUISceneFactory::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryNew
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryNew : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1735 ];

		return pClassPointer;
	};

};

UClass* UUISceneFactoryNew::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryText
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryText : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1736 ];

		return pClassPointer;
	};

};

UClass* UUISceneFactoryText::pClassPointer = NULL;

// Class UnrealEd.UISceneManager
// 0x0098 (0x00D4 - 0x003C)
class UUISceneManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x98 ];                            		// 0x003C (0x0098) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1737 ];

		return pClassPointer;
	};

};

UClass* UUISceneManager::pClassPointer = NULL;

// Class UnrealEd.UnrealEdKeyBindings
// 0x000C (0x0048 - 0x003C)
class UUnrealEdKeyBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1738 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdKeyBindings::pClassPointer = NULL;

// Class UnrealEd.UnrealEdOptions
// 0x0058 (0x0094 - 0x003C)
class UUnrealEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x58 ];                            		// 0x003C (0x0058) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1739 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdOptions::pClassPointer = NULL;

// Class UnrealEd.UnrealEdTypes
// 0x0000 (0x003C - 0x003C)
class UUnrealEdTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1740 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdTypes::pClassPointer = NULL;

// Class UnrealEd.UpdateKismetCommandlet
// 0x0000 (0x007C - 0x007C)
class UUpdateKismetCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1741 ];

		return pClassPointer;
	};

};

UClass* UUpdateKismetCommandlet::pClassPointer = NULL;

// Class UnrealEd.UT3MapStatsCommandlet
// 0x0000 (0x007C - 0x007C)
class UUT3MapStatsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1742 ];

		return pClassPointer;
	};

};

UClass* UUT3MapStatsCommandlet::pClassPointer = NULL;

// Class UnrealEd.WrangleContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UWrangleContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1743 ];

		return pClassPointer;
	};

};

UClass* UWrangleContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.CascadeParticleSystemComponent
// 0x0004 (0x02D0 - 0x02CC)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02CC (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1744 ];

		return pClassPointer;
	};

};

UClass* UCascadeParticleSystemComponent::pClassPointer = NULL;

// Class UnrealEd.GameStatsDatabase
// 0x02B0 (0x02EC - 0x003C)
class UGameStatsDatabase : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x2B0 ];                           		// 0x003C (0x02B0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1745 ];

		return pClassPointer;
	};

};

UClass* UGameStatsDatabase::pClassPointer = NULL;

// Class UnrealEd.GameStatsDatabaseVisitor
// 0x0000 (0x003C - 0x003C)
class UGameStatsDatabaseVisitor : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1746 ];

		return pClassPointer;
	};

};

UClass* UGameStatsDatabaseVisitor::pClassPointer = NULL;

// Class UnrealEd.GameStatsFileReader
// 0x012C (0x0258 - 0x012C)
class UGameStatsFileReader : public UGameplayEventsReader
{
public:
	unsigned char                                      UnknownData00[ 0x12C ];                           		// 0x012C (0x012C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1747 ];

		return pClassPointer;
	};

};

UClass* UGameStatsFileReader::pClassPointer = NULL;

// Class UnrealEd.GameStatsVisitorImpl
// 0x0004 (0x0040 - 0x003C)
class UGameStatsVisitorImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1748 ];

		return pClassPointer;
	};

};

UClass* UGameStatsVisitorImpl::pClassPointer = NULL;

// Class UnrealEd.GameStatsReport
// 0x0078 (0x00B8 - 0x0040)
class UGameStatsReport : public UGameStatsVisitorImpl
{
public:
	unsigned char                                      UnknownData00[ 0x78 ];                            		// 0x0040 (0x0078) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1749 ];

		return pClassPointer;
	};

};

UClass* UGameStatsReport::pClassPointer = NULL;

// Class UnrealEd.GameStatsVisualizer
// 0x0020 (0x0060 - 0x0040)
class UGameStatsVisualizer : public UGameStatsVisitorImpl
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0040 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1750 ];

		return pClassPointer;
	};

};

UClass* UGameStatsVisualizer::pClassPointer = NULL;

// Class UnrealEd.BasicStatsVisualizer
// 0x003C (0x009C - 0x0060)
class UBasicStatsVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0060 (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1751 ];

		return pClassPointer;
	};

};

UClass* UBasicStatsVisualizer::pClassPointer = NULL;

// Class UnrealEd.HeatmapVisualizer
// 0x0044 (0x00A4 - 0x0060)
class UHeatmapVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x44 ];                            		// 0x0060 (0x0044) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1752 ];

		return pClassPointer;
	};

};

UClass* UHeatmapVisualizer::pClassPointer = NULL;

// Class UnrealEd.PlayerMovementVisualizer
// 0x0018 (0x0078 - 0x0060)
class UPlayerMovementVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0060 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1753 ];

		return pClassPointer;
	};

};

UClass* UPlayerMovementVisualizer::pClassPointer = NULL;

// Class UnrealEd.CustomPropertyItemBindings
// 0x0048 (0x0084 - 0x003C)
class UCustomPropertyItemBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x003C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1754 ];

		return pClassPointer;
	};

};

UClass* UCustomPropertyItemBindings::pClassPointer = NULL;

// Class UnrealEd.ObjectEditorViewportInput
// 0x0000 (0x00DC - 0x00DC)
class UObjectEditorViewportInput : public UEditorViewportInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1755 ];

		return pClassPointer;
	};

};

UClass* UObjectEditorViewportInput::pClassPointer = NULL;

// Class UnrealEd.SequenceOpHelper_CalloutInputProxy
// 0x0000 (0x003C - 0x003C)
class USequenceOpHelper_CalloutInputProxy : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1756 ];

		return pClassPointer;
	};

};

UClass* USequenceOpHelper_CalloutInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIEditorOptions
// 0x003C (0x0078 - 0x003C)
class UUIEditorOptions : public UUIRoot
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1757 ];

		return pClassPointer;
	};

};

UClass* UUIEditorOptions::pClassPointer = NULL;

// Class UnrealEd.UILayer
// 0x0018 (0x0054 - 0x003C)
class UUILayer : public UUILayerBase
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x003C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1758 ];

		return pClassPointer;
	};

};

UClass* UUILayer::pClassPointer = NULL;

// Class UnrealEd.UILayerRoot
// 0x0004 (0x0058 - 0x0054)
class UUILayerRoot : public UUILayer
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1759 ];

		return pClassPointer;
	};

};

UClass* UUILayerRoot::pClassPointer = NULL;

// Class UnrealEd.UIPreviewString
// 0x000C (0x00F0 - 0x00E4)
class UUIPreviewString : public UUIString
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x00E4 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1760 ];

		return pClassPointer;
	};

};

UClass* UUIPreviewString::pClassPointer = NULL;

// Class UnrealEd.BeastSettings
// 0x0134 (0x0170 - 0x003C)
class UBeastSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x134 ];                           		// 0x003C (0x0134) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1761 ];

		return pClassPointer;
	};

};

UClass* UBeastSettings::pClassPointer = NULL;

// Class UnrealEd.BeastSettingsReferer
// 0x0010 (0x01F4 - 0x01E4)
class ABeastSettingsReferer : public AInfo
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x01E4 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1762 ];

		return pClassPointer;
	};

};

UClass* ABeastSettingsReferer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_BeastSettings
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_BeastSettings : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1763 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_BeastSettings::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif