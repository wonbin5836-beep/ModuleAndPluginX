// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModuleAndPluginX : ModuleRules
{
	public ModuleAndPluginX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
		"Core", 
		"CoreUObject", 
		"Engine", 
		"InputCore", 
		"EnhancedInput",
		"Test"
		});
		
		PublicIncludePaths.AddRange(new string[]
		{
			"ModuleAndPluginX", // 이게 없으면 헤더파일 인클루드시 경로를 찾지 못함.
		});
	}
}
