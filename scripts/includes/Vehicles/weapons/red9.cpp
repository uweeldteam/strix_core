class CfgPatches
{
	class MoreDurableWeapons_Pistols_Red9_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_Red9"
		};
	};
};
class cfgWeapons
{
	class Red9_Base;
	class Red9: Red9_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
				};
			};
		};
	};
};
