// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Zeroed_In : ModuleRules
{
	public Zeroed_In(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
