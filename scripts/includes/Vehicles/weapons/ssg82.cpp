class CfgPatches
{
	class MoreDurableWeapons_Firearms_SSG82_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_SSG82"
		};
	};
};
class cfgWeapons
{
	class SSG82_Base;
	class SSG82: SSG82_Base
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
