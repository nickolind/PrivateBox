class CfgPatches
{
	class NSA_PrivateBox
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {
			
		};
		author[] = { "Nickorr" };
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {1,0,0};
	};
};

class CfgFunctions
{
	class NSA
	{
		class PrivateBox
		{
			file = "NSA_PrivateBox\functions";
			class PrivateBox_Init
			{
				preInit = 1;
			};
			class pb_client {};
			class pb_server {};
			class pb_showBoxContents_HintC {};
			class pb_showBoxContents_ACE {};
		};
	};
};