// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealWorkshop : ModuleRules
{
	public UnrealWorkshop(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
