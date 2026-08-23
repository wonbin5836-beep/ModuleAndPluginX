#include "Temporary.h"
#include "Modules/ModuleManager.h"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("[Temporary Plugin] Temporary Plugin Module Loaded Successfully!"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("[Temporary Plugin] Temporary Plugin Module Unloaded."));
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary)

 