// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject_1 : ModuleRules
{
	public MyProject_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
