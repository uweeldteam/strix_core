class CfgPatches
{
	class MoreDurableWeapons_Shotguns_Izh43_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Shotguns_Izh43"
		};
	};
};
class cfgWeapons
{
	class Izh43Shotgun_Base;
	class Izh43Shotgun: Izh43Shotgun_Base
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
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
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
