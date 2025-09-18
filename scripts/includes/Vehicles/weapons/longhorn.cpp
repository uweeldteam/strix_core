class CfgPatches
{
	class MoreDurableWeapons_Pistols_Encore_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_Encore"
		};
	};
};
class cfgWeapons
{
	class LongHorn_Base;
	class LongHorn: LongHorn_Base
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
