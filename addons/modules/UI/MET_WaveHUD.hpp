class MET_WaveHUD {
	idd = -1;
	duration = 999999; // stays until manually removed
	onLoad = "uiNamespace setVariable ['MET_WaveHUD', _this select 0];";
	fadeIn = 0;
	fadeOut = 0;

	class Controls {
		class WaveHUD_Text : RscStructuredText {
			idc = 1000;
			text = "";
			x = "safeZoneX + safeZoneW / 2 - 0.15"; // Top center, customizable
			y = "safeZoneY + 0.02";
			w = 0.3;
			h = 0.135;
			colorBackground[] = { 0, 0, 0, 0.4 };
			size = 0.04;
		};
	};
};