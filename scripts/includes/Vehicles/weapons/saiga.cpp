class CfgPatches
{
	class MoreDurableWeapons_Firearms_SaigaK_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_SaigaK"
		};
	};
};
class cfgWeapons
{
	class Saiga_Base;
	class Saiga: Saiga_Base
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
