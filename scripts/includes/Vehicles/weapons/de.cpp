class CfgPatches
{
	class MoreDurableWeapons_Pistols_Deagle_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_DE"
		};
	};
};
class cfgWeapons
{
	class Deagle_Base;
	class Deagle: Deagle_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=550;
				};
			};
		};
	};
	class Deagle_Gold: Deagle
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=550;
				};
			};
		};
	};
};
