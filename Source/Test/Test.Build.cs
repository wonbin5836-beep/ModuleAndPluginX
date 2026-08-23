// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test : ModuleRules
{
	public Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// PublicDependencyModuleNames: 헤더(.h)와 소스(.cpp) 모두에서 공유되는 필수 엔진 모듈
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			});

		// PrivateDependencyModuleNames: 소스(.cpp) 파일 내부에서만 사용하는 모듈
		PrivateDependencyModuleNames.AddRange(new string[] { });
		
		PublicIncludePaths.AddRange(new string[]
		{
			"Test", // 이게 없으면 헤더파일 인클루드시 경로를 찾지 못함.
		});

	}
}
