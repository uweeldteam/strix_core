class CfgPatches
{
	class MoreDurableWeapons_Pistols_CZ75_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_CZ75"
		};
	};
};
class cfgWeapons
{
	class CZ75_Base;
	class CZ75: CZ75_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=425;
				};
			};
		};
	};
};
