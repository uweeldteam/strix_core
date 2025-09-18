class CfgPatches
{
	class MoreDurableWeapons_Pistols_Glock_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_Glock"
		};
	};
};
class cfgWeapons
{
	class Glock19_Base;
	class Glock19: Glock19_Base
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
};
