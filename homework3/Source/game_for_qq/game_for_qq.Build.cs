// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class game_for_qq : ModuleRules
{
	public game_for_qq(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
