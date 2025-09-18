class CfgPatches
{
	class MoreDurableWeapons_Firearms_AKM_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_AKM"
		};
	};
};
class cfgWeapons
{
	class AKM_Base;
	class AKM: AKM_Base
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
