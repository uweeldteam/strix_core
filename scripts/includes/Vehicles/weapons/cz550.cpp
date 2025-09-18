class CfgPatches
{
	class MoreDurableWeapons_Firearms_CZ550_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_CZ550"
		};
	};
};
class cfgWeapons
{
	class CZ550_Base;
	class CZ550: CZ550_Base
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
