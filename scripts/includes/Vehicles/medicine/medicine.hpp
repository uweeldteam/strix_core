// Auto-generated from original CfgVehicles
class Rag: Inventory_Base { //Тряпка
    itemSize[] = {1,1};
    itemsCargoSize[] = {0,0};
    varQuantityInit=1;
    varQuantityMin=0;
    varQuantityMax=20;
    varStackMax=20;
    canBeSplit=1;
    inventorySlot[] += { "Slot_Med_Rag" };
};
class BandageDressing: Inventory_Base { //Бинт
    itemSize[] = {1,1};
    itemsCargoSize[] = {0,0};
    varQuantityInit=20;
    varQuantityMin=0;
    varQuantityMax=20;
    quantityBar=1;
    inventorySlot[] += { "Slot_Med_Bandage", "Slot_Med_Bandage2", "Slot_Med_Bandage3" };
};
class CharcoalTablets: Inventory_Base { //Активированный уголь
    itemSize[] = {1,1};
    itemsCargoSize[] = {0,0};
    varQuantityInit=20;
    varQuantityMin=0;
    varQuantityMax=20;
    canBeSplit=1;
    inventorySlot[] += { "Slot_Med_Charcoal" };
};
class PainkillerTablets: Inventory_Base { //Обезболивающие таблетки
    itemSize[] = {1,1};
    itemsCargoSize[] = {0,0};
    varQuantityInit=20;
    varQuantityMin=0;
    varQuantityMax=20;
    canBeSplit=1;
    inventorySlot[] += { "Slot_Med_Painkiller" };
};
class TetracyclineAntibiotics: Inventory_Base { //Антибиотики (тетрациклин)
    itemSize[] = {1,1};
    itemsCargoSize[] = {0,0};
    varQuantityInit=20;
    varQuantityMin=0;
    varQuantityMax=20;
    canBeSplit=1;
    inventorySlot[] += { "Slot_Med_Tetracycline" };
};
class VitaminBottle: Inventory_Base { //Витамины
    itemSize[] = {1,1};
    itemsCargoSize[] = {0,0};
    varQuantityInit=100;
    varQuantityMin=0;
    varQuantityMax=100;
    canBeSplit=1;
    inventorySlot[] += { "Slot_Med_Vitamin" };
};
class SalineBag: Inventory_Base { //Пакет с физраствором
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    inventorySlot[] += { "Slot_Med_Saline" };
};
class SalineBagIV: Inventory_Base { //Физраствор (система)
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    inventorySlot[] += { "Slot_Med_Saline" };
};
class BloodBagEmpty: Inventory_Base { //Пустой пакет крови
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    inventorySlot[] += { "Slot_Med_Blood" };
};
class BloodBagIV: Inventory_Base { //Кровь (система)
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    inventorySlot[] += { "Slot_Med_Blood" };
};
class BloodBagFull: Inventory_Base { //Пакет крови
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    varQuantityInit=1000.0;
    varQuantityMin=0.0;
    varQuantityMax=1000.0;
    inventorySlot[] += { "Slot_Med_Blood" };
};
class DisinfectantSpray: Inventory_Base { //Дезинфицирующий спрей
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    varQuantityInit=1000;
    varQuantityMin=0;
    varQuantityMax=1000;
    inventorySlot[] += { "Slot_Med_Disinfectant" };
};
class DisinfectantAlcohol: Inventory_Base { //Дезинфицирующий раствор
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    varQuantityInit=500;
    varQuantityMin=0;
    varQuantityMax=500;
    inventorySlot[] += { "Slot_Med_Disinfectant" };
};
class Splint: Inventory_Base { //Шина
    itemSize[] = {1,3};
    itemsCargoSize[] = {0,0};
    inventorySlot[] += { "Slot_Med_Splint" };
};
class StartKitIV: Inventory_Base { //Набор для капельницы
    itemSize[] = {1,2};
    itemsCargoSize[] = {0,0};
    inventorySlot[] += { "Slot_Med_Start" };
};