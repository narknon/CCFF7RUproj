using UnrealBuildTool;

public class CCFF7REditorTarget : TargetRules {
	public CCFF7REditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Fair",
		});
	}
}
