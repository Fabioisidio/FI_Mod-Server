class CfgPatches
{
    class FI_AutoRun
    {
        units[]={};
        weapons[]={};
        shoulder[]={};
        melee[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
        };
    };
    class NulledKillfeed
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
    class FI_AutoRun
    {
        dir="FI_AutoRun";
        name="FI_AutoRun";
        // inputs="FI_AutoRun/data/Inputs.xml";
        credits="";
        author="Fabio Isidio";
        authorID=0;
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
        {
            "Game",
            "Mission",
            "World"
        };
        class defs
        {
            class gameScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Autorun/Scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Autorun/Scripts/4_World"
                };
            };
            class missionScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Autorun/Scripts/5_Mission"
                };
            };
        };
    };

    class NulledKillfeed
	{
		dir="NulledKillfeed";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="NulledKillfeed";
		credits="";
		author="Fabio Isidio";
		authorID="0";
		version="1.0";
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
					"NulledKillfeed/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
};
class CfgSlots
{
};