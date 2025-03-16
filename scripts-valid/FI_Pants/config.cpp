class CfgPatches
{
    class FIPants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Characters",
            "DZ_Characters_Pants"
            
		};
	};
};
class CfgMods
{
    class FI_Pants
    {
        dir="FI_Pants";
        name="FI_Pants";
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
                    "FI_Pants/Scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Pants/Scripts/4_World"
                };
            };
            class missionScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Pants/Scripts/5_Mission"
                };
            };
        };
    };
};
class CfgVehicles
{
	class Inventory_Base;
    class Clothing: Inventory_Base {};
    class GorkaPants_ColorBase : Clothing {}; 
    class BDUPants : Clothing{};
    class FI_BDUPants : BDUPants
    {
		scope=2;
        displayName="FI_BDUPants";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_BDUPants_co",
			"FI_Pants\data\FI_BDUPants_co",
			"FI_Pants\data\FI_BDUPants_co"
		};
    }
    class USMCPants_ColorBase: Clothing{};
    class FI_USMCPants : USMCPants_ColorBase
    {
		scope=2;
        displayName="FI_USMCPants";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_usmc_pants_co",
			"FI_Pants\data\FI_usmc_pants_co",
			"FI_Pants\data\FI_usmc_pants_co"
		};
    }
    class USMCPants_Desert: USMCPants_ColorBase{};
    class FI_USMCPants_Desert : USMCPants_Desert
    {   
        scope=2;
        displayName="FI_USMCPants_desert";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_usmc_pants_desert_co",
			"FI_Pants\data\FI_usmc_pants_desert_co",
			"FI_Pants\data\FI_usmc_pants_desert_co"
		};
    }
    class USMCPants_Woodland: USMCPants_ColorBase{};
    class FI_USMCPants_Woodland : USMCPants_Woodland
    {
        scope=2;
        displayName="FI_USMCPants_Woodland";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_usmc_pants_woodland_co",
			"FI_Pants\data\FI_usmc_pants_woodland_co",
			"FI_Pants\data\FI_usmc_pants_woodland_co"
		};
    }

	class GorkaPants_Summer: GorkaPants_ColorBase{};
    class FI_GorkaPants_Summer : GorkaPants_Summer
    {
        scope=2;
        displayName="FI_GorkaPants_Summer";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_gorka_pants_summer_co",
			"FI_Pants\data\FI_gorka_pants_summer_co",
			"FI_Pants\data\FI_gorka_pants_summer_co"
		};
    }

	class GorkaPants_Autumn: GorkaPants_ColorBase{};
    class FI_GorkaPants_Autumn : GorkaPants_Autumn
    {
        scope=2;
        displayName="FI_GorkaPants_Autumn";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_gorka_pants_autumn_co",
			"FI_Pants\data\FI_gorka_pants_autumn_co",
			"FI_Pants\data\FI_gorka_pants_autumn_co"
		};
    }

	class GorkaPants_Flat: GorkaPants_ColorBase{};
    class FI_GorkaPants_Flat : GorkaPants_Flat
    {
        scope=2;
        displayName="FI_GorkaPants_Flat";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_gorka_pants_flat_co",
			"FI_Pants\data\FI_gorka_pants_flat_co",
			"FI_Pants\data\FI_gorka_pants_flat_co"
		};
    }

	class GorkaPants_PautRev: GorkaPants_ColorBase{};
    class FI_GorkaPants_PautRev : GorkaPants_PautRev
    {
        scope=2;
        displayName="FI_GorkaPants_PautRev";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_gorka_pants_pautrev_co",
			"FI_Pants\data\FI_gorka_pants_pautrev_co",
			"FI_Pants\data\FI_gorka_pants_pautrev_co"
		};
    }

	class GorkaPants_Winter: GorkaPants_ColorBase{};
    class FI_GorkaPants_Winter : GorkaPants_Winter
    {
        scope=2;
        displayName="FI_GorkaPants_Winter";
        descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={6,5};
        hiddenSelectionsTextures[]=
		{
			"FI_Pants\data\FI_gorka_pants_winter_co",
			"FI_Pants\data\FI_gorka_pants_winter_co",
			"FI_Pants\data\FI_gorka_pants_winter_co"
		};
    }
};