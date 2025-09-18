class CfgPatches
{
	class MoreDurableWeapons_Firearms_AK74_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_AK74"
		};
	};
};
class cfgWeapons
{
	class AK74_Base;
	class AK74: AK74_Base
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
	class AK74_Black: AK74
	{
		displayName="$STR_cfgWeapons_AK740";
		descriptionShort="$STR_cfgWeapons_AK741";
	};
	class AK74_Green: AK74
	{
		displayName="$STR_cfgWeapons_AK740";
		descriptionShort="$STR_cfgWeapons_AK741";
	};
	class AKS74U: AK74_Base
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
	class AKS74U_Black: AKS74U
	{
		displayName="$STR_cfgWeapons_AKS74U0";
		descriptionShort="$STR_cfgWeapons_AKS74U1";
	};
	class AKS74U_Green: AKS74U
	{
		displayName="$STR_cfgWeapons_AKS74U0";
		descriptionShort="$STR_cfgWeapons_AKS74U1";
	};
};
