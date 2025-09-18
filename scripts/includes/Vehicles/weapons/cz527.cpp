class CfgPatches
{
	class MoreDurableWeapons_Firearms_CZ527_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_CZ527"
		};
	};
};
class cfgWeapons
{
	class CZ527_Base;
	class CZ527: CZ527_Base
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
	class CZ527_Black: CZ527
	{
		displayName="$STR_cfgWeapons_CZ5270";
		descriptionShort="$STR_cfgWeapons_CZ5271";
	};
	class CZ527_Green: CZ527
	{
		displayName="$STR_cfgWeapons_CZ5270";
		descriptionShort="$STR_cfgWeapons_CZ5271";
	};
	class CZ527_Camo: CZ527
	{
		displayName="$STR_cfgWeapons_CZ5270";
		descriptionShort="$STR_cfgWeapons_CZ5271";
	};
};
