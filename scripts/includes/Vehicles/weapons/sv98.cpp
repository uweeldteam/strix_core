class CfgPatches
{
	class MoreDurableWeapons_Firearms_SV98_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_SV98"
		};
	};
};
class cfgWeapons
{
	class SV98_Base;
	class SV98: SV98_Base
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
