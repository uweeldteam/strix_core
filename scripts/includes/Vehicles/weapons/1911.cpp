class CfgPatches
{
	class MoreDurableWeapons_Pistols_1911_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_1911"
		};
	};
};
class cfgWeapons
{
	class Colt1911_Base;
	class Colt1911: Colt1911_Base
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
	class Engraved1911: Colt1911_Base
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
