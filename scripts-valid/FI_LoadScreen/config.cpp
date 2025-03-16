class CfgPatches
{
	class FI_LoadScreen
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"AC_Mod_Pack",
			"AC_Sample"
		};
	};
};
class CfgMods
{
	class AC_Mod_Sample
	{
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"FI_LoadScreen/Scripts/3_Game"
				};
			};
		};
	};
};
