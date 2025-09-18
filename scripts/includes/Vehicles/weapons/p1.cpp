class CfgPatches
{
	class MoreDurableWeapons_Pistols_P1_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_p1"
		};
	};
};
class cfgWeapons
{
	class P1_Base;
	class P1: P1_Base
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
