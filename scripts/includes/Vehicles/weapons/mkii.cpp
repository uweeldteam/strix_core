class CfgPatches
{
	class MoreDurableWeapons_Pistols_MKII_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_mkii"
		};
	};
};
class cfgWeapons
{
	class MKII_Base;
	class MKII: MKII_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
};
