class CfgPatches
{
	class MoreDurableWeapons_Firearms_Winchester70_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_Winchester70"
		};
	};
};
class cfgWeapons
{
	class Winchester70_Base;
	class Winchester70: Winchester70_Base
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
	class Winchester70_Black: Winchester70
	{
		displayName="$STR_cfgWeapons_Winchester700";
		descriptionShort="$STR_cfgWeapons_Winchester701";
	};
	class Winchester70_Green: Winchester70
	{
		displayName="$STR_cfgWeapons_Winchester700";
		descriptionShort="$STR_cfgWeapons_Winchester701";
	};
};
