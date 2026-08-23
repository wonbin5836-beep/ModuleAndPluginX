#include "Test.h"
#include "Modules/ModuleManager.h"

void FTestModule::StartupModule()
{
	// 모듈이 PreDefault 단계에서 성공적으로 로드되었는지 확인하는 로그
	UE_LOG(LogTemp, Log, TEXT("Test Module: StartupModule executed successfully."));
}

void FTestModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("Test Module: ShutdownModule executed."));
}

// 일반 C++ 모듈 구현을 위한 언리얼 필수 매크로 선언
IMPLEMENT_MODULE(FTestModule, Test);

 