class CfgPatches
{
	class MoreDurableWeapons_Firearms_Scout_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_Scout"
		};
	};
};
class cfgWeapons
{
	class Scout_Base;
	class Scout: Scout_Base
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
	class Scout_Chernarus: Scout
	{
		displayName="$STR_cfgWeapons_Scout0";
		descriptionShort="$STR_cfgWeapons_Scout1";
	};
	class Scout_Livonia: Scout
	{
		displayName="$STR_cfgWeapons_Scout0";
		descriptionShort="$STR_cfgWeapons_Scout1";
	};
};
