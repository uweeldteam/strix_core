class PeachesCan: Edible_Base { //Персики PeachesCan		
	itemSize[] = {1,2};
};
class PeachesCan_Opened: Edible_Base { //Персики PeachesCan_Opened		
	itemSize[] = {1,2};
	varQuantityInit = 1500;
	varQuantityMin = 0;
	varQuantityMax = 1500;
	isMeleeWeapon = 1;
};
class SpaghettiCan: Edible_Base { //Спагетти SpaghettiCan		
	itemSize[] = {1,2};
};
class SpaghettiCan_Opened: Edible_Base { //Спагетти SpaghettiCan_Opened		
	itemSize[] = {1,2};
	varQuantityInit = 1500;
	varQuantityMin = 0;
	varQuantityMax = 1500;
	isMeleeWeapon = 1;
};
class BakedBeansCan: Edible_Base { //Фасоль BakedBeansCan		
	itemSize[] = {1,2};
};
class BakedBeansCan_Opened: Edible_Base { //Фасоль BakedBeansCan_Opened		
	itemSize[] = {1,2};
	varQuantityInit = 1500;
	varQuantityMin = 0;
	varQuantityMax = 1500;
	isMeleeWeapon = 1;
};
class TacticalBaconCan: Edible_Base { //Тактический TacticalBaconCan		
	itemSize[] = {1,2};
};
class TacticalBaconCan_Opened: Edible_Base { //Тактический TacticalBaconCan_Opened		
	itemSize[] = {1,2};
	varQuantityInit = 1500;
	varQuantityMin = 0;
	varQuantityMax = 1500;
	isMeleeWeapon = 1;
};
class Marmalade: Edible_Base { //Мармелад		
	itemSize[] = {1,1};
};
class BoxCerealCrunchin: Edible_Base { //Хлопья BoxCerealCrunchin		
	itemSize[] = {2,2};
};
class Rice: Edible_Base { //Рис		
	itemSize[] = {2,2};
	varQuantityInit = 2000;
	varQuantityMin = 0;
	varQuantityMax = 2000;
	isMeleeWeapon = 1;
};
class UnknownFoodCan: Edible_Base { //UnknownFoodCan		
	itemSize[] = {1,1};
};
class UnknownFoodCan_Opened: Edible_Base { //UnknownFoodCan_Opened
	itemSize[] = {1,1};
};
class WaterBottle: Edible_Base { //Бутылка воды		
	itemSize[] = {1,2};
	varQuantityInit = 1000;
	varQuantityMin = 0;
	varQuantityMax = 1000;
};
class GlassBottle: Edible_Base { //Бутылка		
	itemSize[] = {1,2};
	varQuantityInit = 1500;
	varQuantityMin = 0;
	varQuantityMax = 1500;
};
class CanisterGasoline: Edible_Base { //CanisterGasoline		
	itemSize[] = {1,1};
};
class FilteringBottle: Edible_Base { //Бутылка		
	itemSize[] = {1,2};
	varQuantityInit = 1500;
	varQuantityMin = 0;
	varQuantityMax = 1500;
};
class Canteen: Edible_Base { //Фляга		
	itemSize[] = {1,1};
	varQuantityInit = 2000;
	varQuantityMin = 0;
	varQuantityMax = 2000;
};
class LargeGasCanister: Inventory_Base { //Противогаз LargeGasCanister		
	itemSize[] = {1,1};
	energyStorageMax = 5000;
	energyUsagePerSecond = 0;
	energyAtSpawn = 5000;
};
class MediumGasCanister: Inventory_Base { //Противогаз MediumGasCanister		
	itemSize[] = {1,1};
	energyStorageMax = 2500;
	energyUsagePerSecond = 0;
	energyAtSpawn = 2500;
};
class SmallGasCanister: Inventory_Base { //Противогаз SmallGasCanister		
	itemSize[] = {1,1};
	energyStorageMax = 1000;
		energyUsagePerSecond = 0;
		energyAtSpawn = 1000;
};
class WaterproofBag_ColorBase: Container_Base { //Водонепроницаемый сумка		
	itemSize[] = {3,4};
	itemsCargoSize[] = {6,6};
};
class CanvasPants_ColorBase: Clothing { //Хлопковые штаны		
	itemSize[] = {2,2};
	itemsCargoSize[] = {3,3};
};
class CanvasPantsMidi_ColorBase: Clothing { //Хлопковые штаны		
	itemSize[] = {2,2};
	itemsCargoSize[] = {3,3};
};