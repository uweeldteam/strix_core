class CfgPatches
{
	class MoreDurableWeapons_Archery_Crossbow_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Archery_Crossbow"
		};
	};
};
class cfgWeapons
{
	class Archery_Base;
	class Crossbow_Base: Archery_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=625;
				};
			};
		};
	};
};
