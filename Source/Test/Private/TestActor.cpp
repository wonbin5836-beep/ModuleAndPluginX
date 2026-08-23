#include "TestActor.h"
#include "Engine/Engine.h"

ATestActor::ATestActor()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 화면과 로그창에 스폰 성공 메시지 출력
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 
			5.0f, 
			FColor::Green, 
			TEXT("[Test Module] TestActor가 성공적으로 Spawn 되었습니다!")
		);
	}
	UE_LOG(LogTemp, Warning, TEXT("[Test Module] ATestActor::BeginPlay Called"));
}


