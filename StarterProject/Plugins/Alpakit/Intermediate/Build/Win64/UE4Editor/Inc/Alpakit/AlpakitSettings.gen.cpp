// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alpakit/Public/AlpakitSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlpakitSettings() {}
// Cross Module References
	ALPAKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAlpakitMod();
	UPackage* Z_Construct_UPackage__Script_Alpakit();
	ALPAKIT_API UClass* Z_Construct_UClass_UAlpakitSettings_NoRegister();
	ALPAKIT_API UClass* Z_Construct_UClass_UAlpakitSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAlpakitMod::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ALPAKIT_API uint32 Get_Z_Construct_UScriptStruct_FAlpakitMod_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlpakitMod, Z_Construct_UPackage__Script_Alpakit(), TEXT("AlpakitMod"), sizeof(FAlpakitMod), Get_Z_Construct_UScriptStruct_FAlpakitMod_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAlpakitMod(FAlpakitMod::StaticStruct, TEXT("/Script/Alpakit"), TEXT("AlpakitMod"), false, nullptr, nullptr);
static struct FScriptStruct_Alpakit_StaticRegisterNativesFAlpakitMod
{
	FScriptStruct_Alpakit_StaticRegisterNativesFAlpakitMod()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AlpakitMod")),new UScriptStruct::TCppStructOps<FAlpakitMod>);
	}
} ScriptStruct_Alpakit_StaticRegisterNativesFAlpakitMod;
	struct Z_Construct_UScriptStruct_FAlpakitMod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwritePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverwritePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverwritePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlpakitMod_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlpakitMod>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths_MetaData[] = {
		{ "Category", "AlpakitMod" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths = { UE4CodeGen_Private::EPropertyClass::Array, "OverwritePaths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FAlpakitMod, OverwritePaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "OverwritePaths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AlpakitMod" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FAlpakitMod, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlpakitMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_OverwritePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlpakitMod_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlpakitMod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Alpakit,
		nullptr,
		&NewStructOps,
		"AlpakitMod",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAlpakitMod),
		alignof(FAlpakitMod),
		Z_Construct_UScriptStruct_FAlpakitMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAlpakitMod_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlpakitMod_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAlpakitMod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlpakitMod()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAlpakitMod_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Alpakit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AlpakitMod"), sizeof(FAlpakitMod), Get_Z_Construct_UScriptStruct_FAlpakitMod_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAlpakitMod_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAlpakitMod_CRC() { return 3531838903U; }
	void UAlpakitSettings::StaticRegisterNativesUAlpakitSettings()
	{
	}
	UClass* Z_Construct_UClass_UAlpakitSettings_NoRegister()
	{
		return UAlpakitSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlpakitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGame_MetaData[];
#endif
		static void NewProp_StartGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mods_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mods;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mods_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SatisfactoryGamePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SatisfactoryGamePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlpakitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Alpakit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlpakitSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlpakitSettings.h" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame_SetBit(void* Obj)
	{
		((UAlpakitSettings*)Obj)->StartGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame = { UE4CodeGen_Private::EPropertyClass::Bool, "StartGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAlpakitSettings), &Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods_MetaData[] = {
		{ "Category", "Mods" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods = { UE4CodeGen_Private::EPropertyClass::Array, "Mods", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAlpakitSettings, Mods), METADATA_PARAMS(Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Mods", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAlpakitMod, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SatisfactoryGamePath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SatisfactoryGamePath = { UE4CodeGen_Private::EPropertyClass::Text, "SatisfactoryGamePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAlpakitSettings, SatisfactoryGamePath), METADATA_PARAMS(Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SatisfactoryGamePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SatisfactoryGamePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_StartGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_Mods_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SatisfactoryGamePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlpakitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlpakitSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlpakitSettings_Statics::ClassParams = {
		&UAlpakitSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A4u,
		nullptr, 0,
		Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAlpakitSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlpakitSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlpakitSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlpakitSettings, 2963450959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlpakitSettings(Z_Construct_UClass_UAlpakitSettings, &UAlpakitSettings::StaticClass, TEXT("/Script/Alpakit"), TEXT("UAlpakitSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlpakitSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
