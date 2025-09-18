
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


class PortableGasStove: Inventory_Base { //Противогаз PortableGasStove	
	itemSize[] = {1,1};
};
class PortableGasLamp: Inventory_Base { //Противогаз PortableGasLamp	
	itemSize[] = {1,1};
};


class Handcuffs: Inventory_Base { //Handcuffs	
	itemSize[] = {1,1};
};
class HandcuffsLocked: Inventory_Base { //HandcuffsLocked	
	itemSize[] = {1,1};
};