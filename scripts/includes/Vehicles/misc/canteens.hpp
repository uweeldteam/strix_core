class MVS_Canteen_Base: Canteen {
		scope=0;
		displayName="MVS Canteen";
		model="\ModularVestSystem\data\canteen\MVS_Canteen.p3d";
		hiddenSelections[] = {"zbytek",};
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co.paa"
		};	
        hiddenSelectionsMaterials[]= {
            "ModularVestSystem\data\canteen\canteen.rvmat"
        };
		class DamageSystem {
			class GlobalHealth {
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\canteen\canteen.rvmat"}},
                        {0.7,{"ModularVestSystem\data\canteen\canteen.rvmat"}},
                        {0.5,{"ModularVestSystem\data\canteen\canteen_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\canteen\canteen_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\canteen\canteen_destruct.rvmat"}}
                    };
				};
			};
		};		
	};
	class MVS_Canteen_OD: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - OD";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co.paa"
		};		
	};
	class MVS_Canteen_ERDL: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - ERDL";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_ERDL.paa"
		};		
	};
	class MVS_Canteen_Tan: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - Tan";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_Tan.paa"
		};		
	};
	class MVS_Canteen_Black: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - Black";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_Black.paa"
		};		
	};
	class MVS_Canteen_Snow: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - Snow";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_Snow.paa"
		};		
	};
	class MVS_Canteen_Multicam: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - Multicam";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_MC.paa"
		};		
	};
	class MVS_Canteen_Multicam_Tropic: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - Multicam Tropic";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_MC_Tropic.paa"
		};		
	};
	class MVS_Canteen_Multicam_Black: MVS_Canteen_Base {
		scope=2;
		displayName="MVS Canteen - Multicam Black";
		hiddenSelectionsTextures[] =  {
			"\ModularVestSystem\data\canteen\canteen_co_MC_Black.paa"
		};		
	};