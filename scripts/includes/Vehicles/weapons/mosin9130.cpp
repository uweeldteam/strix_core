class CfgPatches
{
	class MoreDurableWeapons_Firearms_MosinNagant_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_MosinNagant"
		};
	};
};
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
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
	class Mosin9130: Mosin9130_Base
	{
	};
	class Mosin9130_Black: Mosin9130
	{
		displayName="$STR_cfgWeapons_Mosin91300";
		descriptionShort="$STR_cfgWeapons_Mosin91301";
	};
	class Mosin9130_Green: Mosin9130
	{
		displayName="$STR_cfgWeapons_Mosin91300";
		descriptionShort="$STR_cfgWeapons_Mosin91301";
	};
	class Mosin9130_Camo: Mosin9130
	{
		displayName="$STR_cfgWeapons_Mosin91300";
		descriptionShort="$STR_cfgWeapons_Mosin91301";
	};
	class SawedoffMosin9130: Mosin9130_Base
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
	class SawedoffMosin9130_Black: SawedoffMosin9130
	{
		displayName="$STR_cfgWeapons_SawedoffMosin91300";
		descriptionShort="$STR_cfgWeapons_SawedoffMosin91301";
	};
	class SawedoffMosin9130_Green: SawedoffMosin9130
	{
		displayName="$STR_cfgWeapons_SawedoffMosin91300";
		descriptionShort="$STR_cfgWeapons_SawedoffMosin91301";
	};
	class SawedoffMosin9130_Camo: SawedoffMosin9130
	{
		displayName="$STR_cfgWeapons_SawedoffMosin91300";
		descriptionShort="$STR_cfgWeapons_SawedoffMosin91301";
	};
};
