class cfgPatches
{
	class MoreDurableWeapons_Firearms_SKS_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_SKS"
		};
	};
};
class cfgWeapons
{
	class SKS_Base;
	class SKS: SKS_Base
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
	class SKS_Black: SKS
	{
		displayName="$STR_cfgWeapons_SKS0";
		descriptionShort="$STR_cfgWeapons_SKS1";
	};
	class SKS_Green: SKS
	{
		displayName="$STR_cfgWeapons_SKS0";
		descriptionShort="$STR_cfgWeapons_SKS1";
	};
};
