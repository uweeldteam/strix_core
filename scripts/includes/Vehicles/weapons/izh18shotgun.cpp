class CfgPatches
{
	class MoreDurableWeapons_Shotguns_Izh18Shotgun_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Shotguns_Izh18Shotgun"
		};
	};
};
class cfgWeapons
{
	class Izh18Shotgun_Base;
	class Izh18Shotgun: Izh18Shotgun_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
				};
			};
		};
	};
	class SawedoffIzh18Shotgun: Izh18Shotgun_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
				};
			};
		};
	};
};
