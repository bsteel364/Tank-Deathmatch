// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Tank_DeathmatchTarget : TargetRules
{
	public Tank_DeathmatchTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Tank_Deathmatch" } );
	}
}
