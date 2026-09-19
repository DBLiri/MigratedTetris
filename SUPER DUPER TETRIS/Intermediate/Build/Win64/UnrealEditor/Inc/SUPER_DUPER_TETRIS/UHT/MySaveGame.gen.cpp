// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUPER_DUPER_TETRIS/MySaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SUPER_DUPER_TETRIS_API UClass* Z_Construct_UClass_UMySaveGame();
SUPER_DUPER_TETRIS_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SUPER_DUPER_TETRIS();
// End Cross Module References

// Begin Class UMySaveGame
void UMySaveGame::StaticRegisterNativesUMySaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySaveGame);
UClass* Z_Construct_UClass_UMySaveGame_NoRegister()
{
	return UMySaveGame::StaticClass();
}
struct Z_Construct_UClass_UMySaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, HighScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighScore_MetaData), NewProp_HighScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_HighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SUPER_DUPER_TETRIS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame_Statics::ClassParams = {
	&UMySaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMySaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMySaveGame()
{
	if (!Z_Registration_Info_UClass_UMySaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySaveGame.OuterSingleton, Z_Construct_UClass_UMySaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMySaveGame.OuterSingleton;
}
template<> SUPER_DUPER_TETRIS_API UClass* StaticClass<UMySaveGame>()
{
	return UMySaveGame::StaticClass();
}
UMySaveGame::UMySaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame);
UMySaveGame::~UMySaveGame() {}
// End Class UMySaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Dylan_Documents_Unreal_Projects_MigratedTetris_SUPER_DUPER_TETRIS_Source_SUPER_DUPER_TETRIS_MySaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame, UMySaveGame::StaticClass, TEXT("UMySaveGame"), &Z_Registration_Info_UClass_UMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame), 3281121567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dylan_Documents_Unreal_Projects_MigratedTetris_SUPER_DUPER_TETRIS_Source_SUPER_DUPER_TETRIS_MySaveGame_h_870503270(TEXT("/Script/SUPER_DUPER_TETRIS"),
	Z_CompiledInDeferFile_FID_Users_Dylan_Documents_Unreal_Projects_MigratedTetris_SUPER_DUPER_TETRIS_Source_SUPER_DUPER_TETRIS_MySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dylan_Documents_Unreal_Projects_MigratedTetris_SUPER_DUPER_TETRIS_Source_SUPER_DUPER_TETRIS_MySaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
