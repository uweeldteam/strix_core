class CfgPatches
{
	class MoreDurableWeapons_Firearms_MP5_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_MP5"
		};
	};
};
class cfgWeapons
{
	class MP5K_Base;
	class MP5K: MP5K_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};
};
