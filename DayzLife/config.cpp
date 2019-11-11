class CfgPatches {
	class DayzLife {
		requiredAddons[]= {
			"DZ_Data"
		};
	};
};

class CfgMods {
	class DayzLife {
	    type = "mod";
		
	    class defs {
			class gameScriptModule {
				value = "";
                files[] = {"DayzLife/GameScripts"};
			};
			
			class worldScriptModule {
                value = "";
                files[] = {"DayzLife/WorldScripts"};
            };
			
			class missionScriptModule {
				value = "";
                files[] = {"DayzLife/MissionScripts"};
			};
        };
    };
};