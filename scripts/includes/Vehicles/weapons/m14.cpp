class CfgPatches
{
	class MoreDurableWeapons_Firearms_M14_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_M14"
		};
	};
};
class cfgWeapons
{
	class M14_Base;
	class M14: M14_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=625;
				};
			};
		};
	};
};
