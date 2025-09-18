class CfgPatches
{
	class MoreDurableWeapons_Pistols_FNX45_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_FNX45"
		};
	};
};
class cfgWeapons
{
	class FNX45_Base;
	class FNX45: FNX45_Base
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
