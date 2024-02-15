// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearsGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BearsGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BearsGame()
	{
		if (!Z_Registration_Info_UPackage__Script_BearsGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BearsGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x121347B1,
				0xAB98A377,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BearsGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BearsGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BearsGame(Z_Construct_UPackage__Script_BearsGame, TEXT("/Script/BearsGame"), Z_Registration_Info_UPackage__Script_BearsGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x121347B1, 0xAB98A377));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
