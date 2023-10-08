// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingletonPattern/SingletonPatternGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingletonPatternGameModeBase() {}
// Cross Module References
	SINGLETONPATTERN_API UClass* Z_Construct_UClass_ASingletonPatternGameModeBase_NoRegister();
	SINGLETONPATTERN_API UClass* Z_Construct_UClass_ASingletonPatternGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SingletonPattern();
	SINGLETONPATTERN_API UClass* Z_Construct_UClass_AInventario_NoRegister();
// End Cross Module References
	void ASingletonPatternGameModeBase::StaticRegisterNativesASingletonPatternGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASingletonPatternGameModeBase_NoRegister()
	{
		return ASingletonPatternGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASingletonPatternGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SingletonPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///class AInventario;\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SingletonPatternGameModeBase.h" },
		{ "ModuleRelativePath", "SingletonPatternGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "//class AInventario;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::NewProp_Inventario_MetaData[] = {
		{ "ModuleRelativePath", "SingletonPatternGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::NewProp_Inventario = { "Inventario", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingletonPatternGameModeBase, Inventario), Z_Construct_UClass_AInventario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::NewProp_Inventario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::NewProp_Inventario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::NewProp_Inventario,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingletonPatternGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::ClassParams = {
		&ASingletonPatternGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingletonPatternGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingletonPatternGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingletonPatternGameModeBase, 329931940);
	template<> SINGLETONPATTERN_API UClass* StaticClass<ASingletonPatternGameModeBase>()
	{
		return ASingletonPatternGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingletonPatternGameModeBase(Z_Construct_UClass_ASingletonPatternGameModeBase, &ASingletonPatternGameModeBase::StaticClass, TEXT("/Script/SingletonPattern"), TEXT("ASingletonPatternGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingletonPatternGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
