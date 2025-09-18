class CfgPatches
{
	class MoreDurableWeapons_Firearms_M4_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_M4"
		};
	};
};
class cfgWeapons
{
	class M4A1_Base;
	class M4A1: M4A1_Base
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
	class M4A1_Green: M4A1
	{
		displayName="$STR_cfgWeapons_M4A10";
		descriptionShort="$STR_cfgWeapons_M4A11";
	};
	class M4A1_Black: M4A1
	{
		displayName="$STR_cfgWeapons_M4A10";
		descriptionShort="$STR_cfgWeapons_M4A11";
	};
};
