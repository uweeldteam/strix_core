class CfgPatches
{
	class MoreDurableWeapons_Firearms_Famas_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_Famas"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base;
	class Famas_Base: Rifle_Base
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
	class SawedoffFAMAS: Famas_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=450;
				};
			};
		};
	};
};
