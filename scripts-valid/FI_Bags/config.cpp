class CfgPatches
{
    class FIBags
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Characters",
            "DZ_Characters_Backpacks"
            
		};
	};
};
class CfgMods
{
    class FI_Bags
    {
        dir="FI_Bags";
        name="FI_Bags";
        credits="Fabio Isidio";
        author="Fabio Isidio";
        authorID=76561198052717142;
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
                    "FI_Bags/Scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Bags/Scripts/4_World"
                };
            };
            class missionScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Bags/Scripts/5_Mission"
                };
            };
        };
    };
};
class CfgVehicles
{
	class Inventory_Base;
    class Clothing: Inventory_Base {};
    class MountainBag_ColorBase: Clothing{};
    class AliceBag_ColorBase: Clothing{};

    class MountainBag_Orange: MountainBag_ColorBase{};
    class FI_MountainBag_Camu: MountainBag_Orange
    {
		scope=2;
        displayName="FI_MountainBag_Camu";
		descriptionShort="Mochilas recriada pelo Raiz-Z";
        itemsCargoSize[]={9,10};
        hiddenSelectionsTextures[]=
		{
			"FI_Bags\data\FI_MountainBag_camo_co.paa",
			"FI_Bags\data\FI_MountainBag_camo_co.paa",
			"FI_Bags\data\FI_MountainBag_camo_co.paa"
		};
    }
	class AliceBag_Green: AliceBag_ColorBase{};
    class FI_AliceBag_camo: AliceBag_Green
    {
        scope=2;
        displayName="FI_AliceBag_Camu";
		descriptionShort="Mochilas recriada pelo Raiz-Z";
        itemsCargoSize[]={10,12};
        hiddenSelectionsTextures[]=
		{
			"FI_Bags\data\FI_AliceBag_camo_co.paa",
			"FI_Bags\data\FI_AliceBag_camo_co.paa",
			"FI_Bags\data\FI_AliceBag_camo_co.paa"
		};
    }

};