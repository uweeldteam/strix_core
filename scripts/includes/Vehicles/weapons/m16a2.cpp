class CfgPatches
{
	class MoreDurableWeapons_Firearms_M16A2_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_M16A2"
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class M16A2_Base: Rifle_Base
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
