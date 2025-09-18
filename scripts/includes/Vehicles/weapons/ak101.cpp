class CfgPatches
{
	class MoreDurableWeapons_Firearms_AK101_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_AK101"
		};
	};
};
class CfgWeapons
{
	class AK101_Base;
	class AK101: AK101_Base
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
	class AK101_Black: AK101
	{
		displayName="$STR_CfgWeapons_AK1010";
		descriptionShort="$STR_CfgWeapons_AK1011";
	};
	class AK101_Green: AK101
	{
		displayName="$STR_CfgWeapons_AK1010";
		descriptionShort="$STR_CfgWeapons_AK1011";
	};
};
