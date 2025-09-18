class CfgPatches
{
	class MoreDurableWeapons_Firearms_aug_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_aug"
		};
	};
};
class cfgWeapons
{
	class Aug_Base;
	class Aug: Aug_Base
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
	class AugShort: Aug_Base
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
