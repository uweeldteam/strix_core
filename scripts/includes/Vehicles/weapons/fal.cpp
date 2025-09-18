class CfgPatches
{
	class MoreDurableWeapons_Firearms_FAL_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_FAL"
		};
	};
};
class cfgWeapons
{
	class FAL_Base;
	class FAL: FAL_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
				};
			};
		};
	};
};
