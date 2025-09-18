
class PlantMaterial: Inventory_Base { //PlantMaterial	
	itemSize[] = {1,1};
	
};
class Roadflare: Inventory_Base { //Roadflare	
	itemSize[] = {1,1};
	varQuantityInit = 1;
	varQuantityMin = 0;
	varQuantityMax = 5;
	varStackMax = 5;
	canBeSplit = 1;
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
class GardenLime: Inventory_Base { //Известь
	itemSize[] = {3,4};
	varQuantityInit = 10000.0;
	varQuantityMin = 0.0;
	varQuantityMax = 10000.0;
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
class PortableGasStove: Inventory_Base { //Противогаз PortableGasStove	
	itemSize[] = {1,1};
};
class PortableGasLamp: Inventory_Base { //Противогаз PortableGasLamp	
	itemSize[] = {1,1};
};
class camonet: Inventory_Base { //Camonet	
	itemSize[] = {1,1};
};

class Handcuffs: Inventory_Base { //Handcuffs	
	itemSize[] = {1,1};
};
class HandcuffsLocked: Inventory_Base { //HandcuffsLocked	
	itemSize[] = {1,1};
};