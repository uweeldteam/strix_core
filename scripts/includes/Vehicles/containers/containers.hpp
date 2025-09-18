class FirstAidKit: Container_Base { //Аптечка
    itemSize[] = {2,2};
    itemsCargoSize[] = {4,4};
	scope=2;
    displayName="Аптечка";
    descriptionShort="Аптечка для медицины.";
    model="\dz\gear\containers\firstaidkit.p3d";
    weight=200;
	attachments[] =
    {
        "Slot_Med_Rag",
        "Slot_Med_Bandage",
        "Slot_Med_Bandage2",
        "Slot_Med_Bandage3",
        "Slot_Med_Charcoal",
        "Slot_Med_Painkiller",
        "Slot_Med_Tetracycline",
        "Slot_Med_Vitamin",
        "Slot_Med_Saline",
        "Slot_Med_Blood",
        "Slot_Med_Disinfectant",
        "Slot_Med_Splint",
        "Slot_Med_Start"
    };
};

class SmallProtectorCase: Container_Base { //SmallProtectorCase	
	itemSize[] = {2,2};
	itemsCargoSize[] = {3,3};
};
class MatchBox: Inventory_Base { //MatchBox	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
	varQuantityInit = 250;
	varQuantityMin = 0;
	varQuantityMax = 250;
	weight = 20;
};
class CarTent: Container_Base { //CarTent	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class LargeTent: Container_Base { //LargeTent	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class MediumTent: Container_Base { //MediumTent	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class Barrel_ColorBase: Container_Base { //Бочка	
	itemSize[] = {6,6};
	itemsCargoSize[] = {10,20};
};
class PlateCarrierPouches: Container_Base { //Плитный PlateCarrierPouches	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class WeaponCleaningKit: Inventory_Base { //WeaponCleaningKit	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class SewingKit: Inventory_Base { //SewingKit	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class LeatherSewingKit: Inventory_Base { //Кожаные LeatherSewingKit	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class ElectronicRepairKit: Inventory_Base { //ElectronicRepairKit	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class ChestHolster: Clothing { //Кобура	
	itemSize[] = {2,2};
	itemsCargoSize[] = {0,0};
};
class Bear_ColorBase: Inventory_Base { //Bear_ColorBase	
	itemSize[] = {1,1};
	itemsCargoSize[] = {2,3};
};
class ammobox: Container_Base { //Ammobox	
	itemSize[] = {2,2};
	itemsCargoSize[] = {4,4};
};
class Seachest: Container_Base { //Seachest	
	itemSize[] = {6,6};
	itemsCargoSize[] = {10,10};
};