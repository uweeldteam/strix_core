class PlateCarrierVest: Clothing { //Плитный жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class SmershVest: Clothing { //Смерш жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class PressVest_ColorBase: Clothing { //Жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class UKAssVest_ColorBase: Clothing { //Жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class PoliceVest: Clothing { //Жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class HighCapacityVest_ColorBase: Clothing { //Жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class LeatherStorageVest_ColorBase: Clothing { //Кожаные жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class HuntingVest: Clothing { //Жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class ReflexVest: Clothing { //Жилет
	itemSize[] = {3,3};
	itemsCargoSize[] = {0,0};
};
class PlateCarrierHolster: Clothing { //Плитный кобура	
	itemSize[] = {3,3};
	itemsCargoSize[] = {3,2};
};
class Chestplate: Inventory_Base { //Chestplate	
	itemSize[] = {1,1};
};
class ModularVestSystem_Base: PlateCarrierVest {
	scope = 0;
	displayName = "$STR_CfgVehicles_PlateCarrierBlank0";
	descriptionShort = "The Modular Vest System (MVS) is a plate carrier designed to accept multiple pouches to enhance warfighter capabilities.";
	model = "\ModularVestSystem\data\ModularVestSystem_g.p3d";
	attachments[] = {"Belt_Left","VestGrenadeA","VestPouch","modular_pouch_2","modular_pouch_4","modular_pouch_5","modular_pouch_6","patch_01"};
	inventorySlot[] = {"Vest","MVS_vest"};
	hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co.paa",
		"\ModularVestSystem\data\vestTextures\vest_co.paa",
		"\ModularVestSystem\data\vestTextures\vest_co.paa"
	};
	hiddenSelectionsMaterials[]= {
		"ModularVestSystem\data\vestTextures\vest.rvmat"
	};
	class DamageSystem {
		class GlobalHealth {
			class Health
			{
				hitpoints=225;
				healthLevels[] = 
				{
					{1.0,{"ModularVestSystem\data\vestTextures\vest.rvmat"}},
					{0.7,{"ModularVestSystem\data\vestTextures\vest.rvmat"}},
					{0.5,{"ModularVestSystem\data\vestTextures\vest_damage.rvmat"}},
					{0.3,{"ModularVestSystem\data\vestTextures\vest_damage.rvmat"}},
					{0.0,{"ModularVestSystem\data\vestTextures\vest_destruct.rvmat"}}
				};
			};
		};
		class GlobalArmor {
			class Projectile
			{
				class Health
				{
					damage = 0.3;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.6;
				};
			};
			class Melee
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class Infected
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage = 0.5;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.26;
				};
			};
		};
	};		
	class ClothingTypes {
		male = "\ModularVestSystem\data\ModularVestSystem.p3d";
		female = "\ModularVestSystem\data\ModularVestSystem.p3d";
	};
};
class ModularVestSystem_Heavy: PlateCarrierVest {
	scope = 0;
	displayName = "$STR_CfgVehicles_PlateCarrierBlank0";
	descriptionShort = "The Modular Vest System (MVS) is a plate carrier designed to accept multiple pouches to enhance warfighter capabilities.";
	model = "\ModularVestSystem\data\ModularVestSystemHeavy_g.p3d";
	attachments[] = {"Belt_Left","VestGrenadeA","modular_pouch_11","modular_pouch_6","Belt_Right","patch_01"};
	inventorySlot[] = {"Vest","MVS_vest"};		
	hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co.paa"
	};	
	hiddenSelectionsMaterials[]= {
		"ModularVestSystem\data\vestTextures\MVSHeavy.rvmat"
	};
	class DamageSystem {
		class GlobalHealth {
			class Health
			{
				hitpoints=300;
				healthLevels[] = 
				{
					{1.0,{"ModularVestSystem\data\vestTextures\MVSHeavy.rvmat"}},
					{0.7,{"ModularVestSystem\data\vestTextures\MVSHeavy.rvmat"}},
					{0.5,{"ModularVestSystem\data\vestTextures\MVSHeavy_damage.rvmat"}},
					{0.3,{"ModularVestSystem\data\vestTextures\MVSHeavy_damage.rvmat"}},
					{0.0,{"ModularVestSystem\data\vestTextures\MVSHeavy_destruct.rvmat"}}
				};
			};
		};
		class GlobalArmor {
			class Projectile
			{
				class Health
				{
					damage = 0.15;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.3;
				};
			};
			class Melee
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class Infected
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage = 0.5;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.26;
				};
			};
		};
	};
	class ClothingTypes {
		male = "\ModularVestSystem\data\ModularVestSystemHeavy.p3d";
		female = "\ModularVestSystem\data\ModularVestSystemHeavy.p3d";
	};
};
class MVS_Combat_Vest_Heavy_OD: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - OD";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co.paa"
	};
};

class MVS_Combat_Vest_Heavy_ERDL: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - ERDL";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_ERDL.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_ERDL.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_ERDL.paa"
	};
};
class MVS_Combat_Vest_Heavy_Tan: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - Tan";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Tan.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Tan.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Tan.paa"
	};
};
class MVS_Combat_Vest_Heavy_Black: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - Black";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Black.paa"
	};
};
class MVS_Combat_Vest_Heavy_Snow: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - Snow";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Snow.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Snow.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_Snow.paa"
	};
};
class MVS_Combat_Vest_Heavy_Multicam: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - Multicam";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC.paa"
	};
};
class MVS_Combat_Vest_Heavy_Multicam_Tropic: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - Multicam Tropic";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Tropic.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Tropic.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Tropic.paa"
	};
};
class MVS_Combat_Vest_Heavy_Multicam_Black: ModularVestSystem_Heavy {
	scope = 2;
	displayName = "MVS Heavy - Multicam Black";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Black.paa"
	};
};
class MVS_Combat_Vest_OD: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - OD";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co.paa",
		"\ModularVestSystem\data\vestTextures\vest_co.paa",
		"\ModularVestSystem\data\vestTextures\vest_co.paa"
	};
};
class MVS_Combat_Vest_ERDL: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - ERDL";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_ERDL.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_ERDL.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"
	};
};
class MVS_Combat_Vest_Tan: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - Tan";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_tan.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_tan.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_tan.paa"
	};
};
class MVS_Combat_Vest_Black: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - Black";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_2.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_2.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_2.paa"
	};
};
class MVS_Combat_Vest_Snow: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - Snow";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_snow.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_snow.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_snow.paa"
	};
};
class MVS_Combat_Vest_Multicam: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - Multicam";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_MC.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_MC.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_MC.paa"
	};
};
class MVS_Combat_Vest_Multicam_Black: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - Multicam Black";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"
	};
};
class MVS_Combat_Vest_Multicam_Tropic: ModularVestSystem_Base {
	scope = 2;
	displayName = "MVS - Multicam Tropic";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa",
		"\ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"
	};
};
class ModularChestRig_Base: HighCapacityVest_ColorBase {
	scope = 0;
	displayName = "$STR_CfgVehicles_PlateCarrierBlank0";
	descriptionShort = "The Modular Vest System (MVS) is a chest rig designed to accept multiple pouches to enhance warfighter capabilities.";
	model = "\ModularVestSystem\data\ModularVestRig_g.p3d";
	attachments[] = {"Belt_Left","VestGrenadeA","modular_pouch_2","VestPouch","modular_pouch_4","modular_pouch_5","modular_pouch_6","patch_01"};
	inventorySlot[] = {"Vest","MVS_vest"};
	hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa"
	};
	hiddenSelectionsMaterials[]= {
		"ModularVestSystem\data\vestTextures\chestrig.rvmat"
	};
	class DamageSystem {
		class GlobalHealth {
			class Health
			{
				hitpoints=100;
				healthLevels[] = 
				{
					{1.0,{"ModularVestSystem\data\vestTextures\chestrig.rvmat"}},
					{0.7,{"ModularVestSystem\data\vestTextures\chestrig.rvmat"}},
					{0.5,{"ModularVestSystem\data\vestTextures\chestrig_damage.rvmat"}},
					{0.3,{"ModularVestSystem\data\vestTextures\chestrig_damage.rvmat"}},
					{0.0,{"ModularVestSystem\data\vestTextures\chestrig_destruct.rvmat"}}
				};
			};
		};
	};		
	class ClothingTypes {
		male = "\ModularVestSystem\data\ModularVestRig.p3d";
		female = "\ModularVestSystem\data\ModularVestRig_f.p3d";
	};
};
class MVS_ChestRig_OD: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - OD";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa"
	};
};
class MVS_ChestRig_ERDL: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - ERDL";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_ERDL.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_ERDL.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_ERDL.paa"
	};
};
class MVS_ChestRig_Tan: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - Tan";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Tan.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Tan.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Tan.paa"
	};
};
class MVS_ChestRig_Black: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - Black";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Black.paa"
	};
};
class MVS_ChestRig_Snow: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - Snow";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Snow.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Snow.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Snow.paa"
	};
};
class MVS_ChestRig_Multicam: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - Multicam";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC.paa"
	};
};
class MVS_ChestRig_Multicam_Tropic: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - Multicam Tropic";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Tropic.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Tropic.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Tropic.paa"
	};
};
class MVS_ChestRig_Multicam_Black: ModularChestRig_Base {
	scope = 2;
	displayName = "MVS Chestrig - Multicam Black";
	hiddenSelectionsTextures[] =  {
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Black.paa",
		"\ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Black.paa"
	};
};