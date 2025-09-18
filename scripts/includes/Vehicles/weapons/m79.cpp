class CfgPatches
{
	class MoreDurableWeapons_Launchers_M79_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Launchers_M79"
		};
	};
};
class cfgWeapons
{
	class M79_Base;
	class M79: M79_Base
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
