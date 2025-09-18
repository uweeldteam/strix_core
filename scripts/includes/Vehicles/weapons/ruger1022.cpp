class CfgPatches
{
	class MoreDurableWeapons_Firearms_Ruger1022_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_Ruger1022"
		};
	};
};
class cfgWeapons
{
	class Ruger1022_Base;
	class Ruger1022: Ruger1022_Base
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
