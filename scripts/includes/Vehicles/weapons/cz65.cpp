class CfgPatches
{
	class MoreDurableWeapons_Firearms_cz61_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_cz61"
		};
	};
};
class CfgWeapons
{
	class CZ61_Base;
	class CZ61: CZ61_Base
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
};
