// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * Test 모듈의 인터페이스 역할을 담당하는 헤더 파일입니다.
 */
class FTestModule : public IModuleInterface
{
public:
	/** 모듈이 메모리에 로드될 때 호출됩니다. */
	virtual void StartupModule() override;

	/** 모듈이 메모리에서 해제될 때 호출됩니다. */
	virtual void ShutdownModule() override;
};