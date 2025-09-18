class CfgPatches
{
	class MoreDurableWeapons_Pistols_Flaregun_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_Flaregun"
		};
	};
};
class cfgWeapons
{
	class Flaregun_Base;
	class Flaregun: Flaregun_Base
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
