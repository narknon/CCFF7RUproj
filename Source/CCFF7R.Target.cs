using UnrealBuildTool;

public class CCFF7RTarget : TargetRules {
	public CCFF7RTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Fair",
		});
	}
}
