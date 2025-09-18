class CfgPatches
{
	class MoreDurableWeapons_Firearms_PP19_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_PP19"
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class PP19_Base: Rifle_Base
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
