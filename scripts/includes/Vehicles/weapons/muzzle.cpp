class CfgPatches
{
	class MoreDurableWeapons_Muzzles_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Muzzles"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor;
	class AK_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=375;
				};
			};
		};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=375;
				};
			};
		};
	};
	class Mosin_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=375;
				};
			};
		};
	};
	class SKS_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=375;
				};
			};
		};
	};
	class Mosin_Compensator: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
	class MP5_Compensator: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1;
				};
			};
		};
	};
	class M4_Suppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
				};
			};
		};
	};
	class PistolSuppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=12.5;
				};
			};
		};
	};
};
