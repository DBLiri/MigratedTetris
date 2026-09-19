// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SUPER_DUPER_TETRISEditorTarget : TargetRules
{
	public SUPER_DUPER_TETRISEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "SUPER_DUPER_TETRIS" } );
	}
}
