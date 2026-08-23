#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

// Test 모듈 외부(ModuleAndPlugin 등)에서 이 클래스를 참조할 수 있도록 TEST_API 매크로를 붙임
UCLASS()
class TEST_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATestActor();

protected:
	virtual void BeginPlay() override;


};
