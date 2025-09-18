class CfgPatches
{
	class MoreDurableWeapons_Firearms_B95_COnfig
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_B95"
		};
	};
};
class cfgWeapons
{
	class B95_Base;
	class B95: B95_Base
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
	class B95_Black: B95
	{
		displayName="$STR_cfgWeapons_B950";
		descriptionShort="$STR_cfgWeapons_B951";
	};
	class B95_Green: B95
	{
		displayName="$STR_cfgWeapons_B950";
		descriptionShort="$STR_cfgWeapons_B951";
	};
	class SawedoffB95: B95_Base
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
