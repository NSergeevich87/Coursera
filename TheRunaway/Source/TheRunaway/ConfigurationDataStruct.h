#pragma once

#include "Engine/DataTable.h"

#include "ConfigurationDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FConfigurationDataStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FConfigurationDataStruct() :
		CasadorHealth(200),
		CasadorMoveSpeed(300), 
		OffScreenDamage(10)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration Data Struct")
	float CasadorHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration Data Struct")
	float CasadorMoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration Data Struct")
	float OffScreenDamage;
};