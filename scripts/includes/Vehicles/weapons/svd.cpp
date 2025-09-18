class CfgPatches
{
	class MoreDurableWeapons_Firearms_SVD_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms_SVD"
		};
	};
};
class cfgWeapons
{
	class SVD_Base;
	class SVD: SVD_Base
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
	class SVD_Wooden: SVD_Base
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
