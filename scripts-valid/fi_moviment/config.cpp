class CfgPatches
{
	class fi_moviments
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class fi_moviment
	{
		dir="fi_moviment";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="LWPMov";
		credits="";
		author="";
		authorID="0";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"fi_moviment/scripts/4_World"
				};
			};
		};
	};
};
