class CfgPatches
{
	class MoreDurableWeapons_Firearms_IZH18_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_IZH18"
		};
	};
};
class cfgWeapons
{
	class Izh18_Base;
	class Izh18: Izh18_Base
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
