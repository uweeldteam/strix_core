class CfgPatches
{
	class MoreDurableWeapons_Shotguns_MP133_Config
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Shotguns_MP133"
		};
	};
};
class cfgWeapons
{
	class Mp133Shotgun_Base;
	class Mp133Shotgun: Mp133Shotgun_Base
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
	class Mp133Shotgun_PistolGrip: Mp133Shotgun_Base
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
