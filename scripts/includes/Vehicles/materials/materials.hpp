class MetalPlate: Inventory_Base { //Металлическая пластина		
	itemSize[] = {2,3};
	varQuantityInit = 10;
	varQuantityMin = 0;
	varQuantityMax = 50;
	varStackMax = 50;
	canBeSplit = 1;
	weight = 2000;
};
class NailedBaseballBat: Inventory_Base { //NailedBaseballBat		
	itemSize[] = {2,2};
};
class Rope: Inventory_Base { //Верёвка		
	itemSize[] = {2,2};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 10;
	varStackMax = 10;
	canBeSplit = 1;
};
class WoodenLog: Inventory_Base { //Бревно		
	itemSize[] = {10,3};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 10000;
};
class WoodenPlank: Inventory_Base { //Деревянная доска		
	itemSize[] = {5,2};
	varQuantityInit = 10;
	varQuantityMin = 0;
	varQuantityMax = 50;
	varStackMax = 50;
	canBeSplit = 1;
	weight = 1000;
};
class BarbedWire: Inventory_Base { //Колючая проволока		
	itemSize[] = {3,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 100;
};
class Paper: Inventory_Base { //Бумага		
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 100;
	varStackMax = 100;
	canBeSplit = 1;
	weight = 5;
};
class GiftWrapPaper: Inventory_Base { //Подарочная бумага		
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 100;
	varStackMax = 100;
	canBeSplit = 1;
	weight = 10;
};
class Nail: Inventory_Base { //Гвоздь		
	itemSize[] = {1,1};
	varQuantityInit = 100;
	varQuantityMin = 0;
	varQuantityMax = 500;
	varStackMax = 500;
	canBeSplit = 1;
	weight = 8;
};
class NailBox: Box_Base { //Коробка с гвоздями		
	itemSize[] = {2,2};
	class Resources { //Resources
		class Nail
		{ //Гвоздь
			value = 200;
			variable = "quantity";
		};
	};
};
class Stone: Inventory_Base { //Камень		
	itemSize[] = {1,2};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 500;
};
class SmallStone: Inventory_Base { //Маленький камень		
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 50;
	varStackMax = 50;
	canBeSplit = 1;
	weight = 100;
};
class PlantMaterial: Inventory_Base { itemSize[] = {1,1}; };

class LongWoodenStick: Inventory_Base
{
    itemSize[] = {1,1};
    varQuantityInit = 1;
    varQuantityMin = 0;
    varQuantityMax = 10;
    varStackMax = 10;
    canBeSplit = 1;
    weight = 100;
};
lass GardenLime: Inventory_Base { //Известь
	itemSize[] = {3,4};
	varQuantityInit = 10000.0;
	varQuantityMin = 0.0;
	varQuantityMax = 10000.0;
};
class BurlapSack: Inventory_Base { //Мешок	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 10;
};
class BurlapStrip: Inventory_Base { //BurlapStrip	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 50;
	varStackMax = 50;
	canBeSplit = 1;
	weight = 5;
};
class Fabric: Inventory_Base { //Fabric	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 10;
	varStackMax = 10;
	canBeSplit = 1;
	weight = 20;
};
class MetalWire: Inventory_Base { //MetalWire	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 100;
};
class Netting: Inventory_Base { //Сеть	
	itemSize[] = {2,3};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 50;
};
class camonet: Inventory_Base { //Camonet	
	itemSize[] = {1,1};
};
class LongWoodenStick: Inventory_Base { //LongWoodenStick	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 10;
	varStackMax = 10;
	canBeSplit = 1;
	weight = 100;
};
class SharpWoodenStick: Inventory_Base { //SharpWoodenStick	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 10;
	varStackMax = 10;
	canBeSplit = 1;
	weight = 100;
};
class WoodenStick: Inventory_Base { //WoodenStick	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 100;
};
class FireWood: Inventory_Base { //FireWood	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 20;
	varStackMax = 20;
	canBeSplit = 1;
	weight = 500;
};