class Pot: Bottle_Base { //Pot	
	itemSize[] = {1,1};
	itemsCargoSize[] = {5,4};
};
class FryingPan: Inventory_Base { //FryingPan	
	itemSize[] = {1,1};
	itemsCargoSize[] = {4,3};
};
class Cauldron: Bottle_Base { //Котел	
	itemSize[] = {1,1};
	itemsCargoSize[] = {6,4};
};
class FarmingHoe: Inventory_Base { //FarmingHoe	
	itemSize[] = {1,1};
	inventorySlot[]+={ "HP_FarmingHoe" };
};
class Tripod: Inventory_Base { //Tripod	
	itemSize[] = {1,1};
};
class CookingStand: Inventory_Base { //CookingStand	
	itemSize[] = {1,1};
};