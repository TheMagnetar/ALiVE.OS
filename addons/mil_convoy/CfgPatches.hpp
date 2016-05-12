class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ALIVE_main"};
		versionDesc = "ALiVE";
		//versionAct = "['mil_convoy',_this] execVM '\x\alive\addons\main\about.sqf';";
		VERSION_CONFIG;
		author[] = {"Gunny"};
		authorUrl = "http://alivemod.com/";
	};
};
class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};
