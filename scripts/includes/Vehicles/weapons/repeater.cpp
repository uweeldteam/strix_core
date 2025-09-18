class CfgPatches
{
	class MoreDurableWeapons_Firearms_Repeater_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_Repeater"
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class Repeater_Base: Rifle_Base
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
