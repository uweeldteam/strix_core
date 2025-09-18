class CfgPatches
{
	class MoreDurableWeapons_Pistols_PB6P9_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Pistols_pb6p9"
		};
	};
};
class cfgWeapons
{
	class MakarovPB_Base;
	class MakarovPB: MakarovPB_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
				};
			};
		};
	};
};
