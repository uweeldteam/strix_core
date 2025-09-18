class CfgPatches
{
	class MoreDurableWeapons_Firearms_UMP_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_UMP"
		};
	};
};
class cfgWeapons
{
	class UMP45_Base;
	class UMP45: UMP45_Base
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
