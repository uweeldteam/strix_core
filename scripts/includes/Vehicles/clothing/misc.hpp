class Armband_ColorBase: Clothing { //Armband_ColorBase	
	itemSize[] = {2,2};
	itemsCargoSize[] = {1,2};
};
class gasmask_filter: Inventory_Base { //Gasmask_filter	
	itemSize[] = {2,2};
	varQuantityInit = 50.0;
	varQuantityMin = 0;
	varQuantityMax = 50.0;
	inventorySlot[]+={"Slot_NBC_GasMask_Filter","Slot_NBC_GasMask_Filter2","Slot_NBC_GasMask_Filter3" };
};
class gasmask_filter_improvised: Inventory_Base { //Gasmask_filter_improvised	
	itemSize[] = {2,2};
	inventorySlot[]+={"Slot_NBC_GasMask_Filter","Slot_NBC_GasMask_Filter2","Slot_NBC_GasMask_Filter3" };
};