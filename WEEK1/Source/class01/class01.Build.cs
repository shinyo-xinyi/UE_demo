// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class class01 : ModuleRules
{
	public class01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
