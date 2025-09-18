class CfgPatches
{
	class MoreDurableWeapons_Pistols_Magnum_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_Magnum"
		};
	};
};
class cfgWeapons
{
	class Magnum_Base;
	class Magnum: Magnum_Base
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
	class SawedoffMagnum: Magnum_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=450;
				};
			};
		};
	};
};
