#define _ARMA_
#include "scripts\includes\macros.hpp"
//TODO Собсна Модельки патчей грузят только на половину, текстуры не применяются, стрингтейблы не подгружаются
class CfgPatches {
	class Strix_Mod {
		units[] =  {
			// "MetalPlate",
			// "WoodenPlank",
			// "WoodenLog",
			// "Nail",
			// "NailBox",
			// "Whetstone",
			// "StartKitIV",
			// "Hacksaw",
			// "Handsaw",
			// "Hatchet",
			// "BarbedWire",
			// "PeachesCan",
			// "PeachesCan_Opened",
			// "SpaghettiCan",
			// "SpaghettiCan_Opened",
			// "BakedBeansCan",
			// "BakedBeansCan_Opened",
			// "TacticalBaconCan",
			// "TacticalBaconCan_Opened",
			// "Marmalade",
			// "Chips",
			// "Crackers",
			// "SaltySticks",
			// "BoxCerealCrunchin",
			// "Rice",
			// "Paper",
			// "Pliers",
			// "Wrench",
			// "Screwdriver",
			// "CarTent",
			// "LargeTent",
			// "MediumTent",
			// "HP_Crafter",
			// "HP_Anvil",
			// "HP_Drill",
			// "HP_Grinde",
			// "HP_napilnik",
			// "HP_Oiler",
			// "HP_Vise",
			// "HP_Payalnik",
			// "HP_Plata",
			// "HP_Battery",
			// "HP_Tester",
			"NBCBag"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"DZ_Gear_Camping",
			"DZ_Gear_Tools",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Gear_Medical",
			"JM_CF_Scripts"
		};
	};
};
class CfgMods {
	class Strix_Mod {
		name 		= "STRIX - Survival Mod Core";														// имя
		picture 	= "strix_mod\data\gui\logo.paa";       											// изображение в расширенном описании
		logoSmall 	= "strix_mod\data\gui\logo_small.paa";											// значок рядом с названием мода, когда описание не развернуто
		logo 		= "strix_mod\data\gui\logo_large.paa";          									// логотип под игровым меню
		logoOver 	= "strix_mod\data\gui\mascot.paa";												// при наведении курсора мыши на логотип
		tooltip 	= "STRIX - Survival Mod";														// всплывающая подсказка при наведении курсора мыши
		overview 	= "Хардкорный сервер DayZ с упором на атмосферу выживания и честный лут.";		// обзор
		action 		= "https://strix.wargm.ru"; 													// ссылка при клике
		author 		= "Strix Project by Ricky Khats";												// автор
		version 	= "1";																			// версия
		dir 		= "strix_mod";
        inputs		= "strix_mod\data\inputs.xml";
		hideName 	= 1;
		hidePicture = 1;
		extra 		= 0;
		type 		= "mod";
		dependencies[] = {"Game","World","Mission"};

		class defs {
			class imageSets {
				files[]= {"strix_mod\data\gui\hpicons.imageset"};
			};
			class gameScriptModule {
				value = "";
				files[] = {"strix_mod\scripts\3_Game"};
			};
			class worldScriptModule {
				value = "";
				files[] = {"strix_mod\scripts\4_World"};
			};
			class missionScriptModule {
				value = "";
				files[] = {"strix_mod\scripts\5_Mission"};
			};
		};
	};
};
class CfgVehicles {
    class Inventory_Base;
    class Container_Base;
    class Bottle_Base;
    class Box_Base;
    class Edible_Base;
    class Clothing_Base;
    class Clothing: Clothing_Base {};
    class Switchable_Base;
	class DrysackBag_ColorBase: Clothing {};

    // #include "scripts\includes\Vehicles\bags\bags.hpp"
    #include "scripts\includes\Vehicles\bags\nbc.hpp"

    // #include "scripts\includes\Vehicles\clothing\belts.hpp"
    // #include "scripts\includes\Vehicles\clothing\body.hpp"
    // #include "scripts\includes\Vehicles\clothing\boots.hpp"
    // #include "scripts\includes\Vehicles\clothing\gloves.hpp"
    // #include "scripts\includes\Vehicles\clothing\head.hpp"
    // #include "scripts\includes\Vehicles\clothing\misc.hpp"
    // #include "scripts\includes\Vehicles\clothing\nbc.hpp"
    // #include "scripts\includes\Vehicles\clothing\pants.hpp"
    #include "scripts\includes\Vehicles\clothing\patches.hpp"
    // #include "scripts\includes\Vehicles\clothing\vests.hpp"

    // #include "scripts\includes\Vehicles\containers\containers.hpp"

    // #include "scripts\includes\Vehicles\food\food.hpp"

    // #include "scripts\includes\Vehicles\materials\materials.hpp"

    // #include "scripts\includes\Vehicles\medicine\medicine.hpp"

    // #include "scripts\includes\Vehicles\misc\canteens.hpp"
    // #include "scripts\includes\Vehicles\misc\car.hpp"
    // #include "scripts\includes\Vehicles\misc\cookware.hpp"
    // #include "scripts\includes\Vehicles\misc\electronic.hpp"
    // #include "scripts\includes\Vehicles\misc\misc.hpp"

    // #include "scripts\includes\Vehicles\tools\repair_tools.hpp"
    // #include "scripts\includes\Vehicles\tools\tools.hpp"

    // #include "scripts\includes\Vehicles\weapons\melee.hpp"
    // #include "scripts\includes\Vehicles\weapons\suppressors.hpp"
	
    // #include "scripts\includes\Vehicles\CraftingSystem.hpp"
};
// class CfgMagazines {
//     class Magazine_Base;
//     class Ammunition_Base: Magazine_Base {};
//     #include "scripts\includes\Magazines\Ammo.hpp"
// };
class CfgSlots {
    // #include "scripts\includes\Slots\FirstAidKit.hpp"
    #include "scripts\includes\Slots\nbc.hpp"
    // #include "scripts\includes\Slots\workbench.hpp"
};
// class CfgNonAIVehicles {
// 	class ProxyAttachment;
//     // #include "scripts\includes\NonAiVehicles\CraftingSystem.hpp"
// };
