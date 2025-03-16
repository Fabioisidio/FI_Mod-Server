class CfgPatches
{
    class FITops
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Characters",
            "DZ_Characters_Tops"
            
		};
	};
};
class CfgMods
{
    class FI_Tops
    {
        dir="FI_Tops";
        name="FI_Tops";
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
                    "FI_Tops/Scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Tops/Scripts/4_World"
                };
            };
            class missionScriptModule
            {
                value="";
                files[]=
                {
                    "FI_Tops/Scripts/5_Mission"
                };
            };
        };
    };
};
class CfgVehicles
{
	class Inventory_Base;
    class Clothing: Inventory_Base{};
    class MaleTorso_Base: Inventory_Base{};
	class GorkaEJacket_ColorBase: Clothing{};

	class BDUJacket: Clothing{}
    class FI_BDUJacket : BDUJacket
    {
        scope=2;
        displayName="FI_BDUJacket";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_bdu_jacket_co",
			"FI_Tops\data\FI_bdu_jacket_co",
			"FI_Tops\data\FI_bdu_jacket_co"
		};
    }
	class USMCJacket_ColorBase: Clothing{};
    class FI_USMCJacket_Navy: USMCJacket_ColorBase
    {
        scope=2;
        displayName="FI_USMCJacket_Navy";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_usmc_jacket_navy_co",
			"FI_Tops\data\FI_usmc_jacket_navy_co",
			"FI_Tops\data\FI_usmc_jacket_navy_co"
		};
    }
	class USMCJacket_Desert: USMCJacket_ColorBase{};
    class FI_USMCJacket_Desert: USMCJacket_Desert
    {
        scope=2;
        displayName="FI_USMCJacket_Desert";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_usmc_jacket_desert_co",
			"FI_Tops\data\FI_usmc_jacket_desert_co",
			"FI_Tops\data\FI_usmc_jacket_desert_co"
		};
    }
    class USMCJacket_Woodland: USMCJacket_ColorBase{};
    class FI_USMCJacket_Woodland: USMCJacket_Woodland
    {
        scope=2;
        displayName="FI_USMCJacket_Woodland";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_usmc_jacket_woodland_co",
			"FI_Tops\data\FI_usmc_jacket_woodland_co",
			"FI_Tops\data\FI_usmc_jacket_woodland_co"
		};
    }
	class GorkaEJacket_Summer: GorkaEJacket_ColorBase{};
    class FI_GorkaJacket_Summer: GorkaEJacket_Summer
    {
        scope=2;
        displayName="FI_GorkaJacket_Summer";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_gorka_summer_co",
			"FI_Tops\data\FI_gorka_summer_co",
			"FI_Tops\data\FI_gorka_summer_co"
		};
    };
	class GorkaEJacket_Flat: GorkaEJacket_ColorBase{};
    class FI_GorkaJacket_Flat: GorkaEJacket_Flat
    {
        scope=2;
        displayName="FI_GorkaJacket_Flat";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_gorka_flat_co",
			"FI_Tops\data\FI_gorka_flat_co",
			"FI_Tops\data\FI_gorka_flat_co"
		};
    };

	class GorkaEJacket_Autumn: GorkaEJacket_ColorBase{};
    class FI_GorkaJacket_Autumn: GorkaEJacket_Autumn
    {
        scope=2;
        displayName="FI_GorkaJacket_Autumn";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_gorka_autumn_co",
			"FI_Tops\data\FI_gorka_autumn_co",
			"FI_Tops\data\FI_gorka_autumn_co"
		};
    };

	class GorkaEJacket_PautRev: GorkaEJacket_ColorBase{};
    class FI_GorkaJacket_PautRev: GorkaEJacket_PautRev
    {
        scope=2;
        displayName="FI_GorkaJacket_PautRev";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_gorka_pautrev_co",
			"FI_Tops\data\FI_gorka_pautrev_co",
			"FI_Tops\data\FI_gorka_pautrev_co"
		};
    };

	class GorkaEJacket_Winter: GorkaEJacket_ColorBase{};
    class FI_GorkaJacket_Winter: GorkaEJacket_Winter
    {
        scope=2;
        displayName="FI_GorkaJacket_Winter";
		descriptionShort="Roupa recriada pelo Raiz-Z";
        itemsCargoSize[]={7,6};
        hiddenSelectionsTextures[]=
		{
			"FI_Tops\data\FI_gorka_winter_co",
			"FI_Tops\data\FI_gorka_winter_co",
			"FI_Tops\data\FI_gorka_winter_co"
		};
    };
};