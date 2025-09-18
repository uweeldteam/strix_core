class CfgPatches
{
	class MoreDurableWeapons_Pistols_Derringer_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_Derringer"
		};
	};
};
class cfgWeapons
{
	class Pistol_Base;
	class Derringer_Base: Pistol_Base
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
