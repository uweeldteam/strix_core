class Modular_Patch_Base: Clothing {
	scope = 0;
	displayName = "Identifier Patch";
	descriptionShort = STR_PATCH(DESC);
	model = MODELSFOLDER(patches\patch.p3d);
	itemSize[] = {2,1};
	inventorySlot[] = {"armband","patch_01","patch_02","patch_03","patch_04"};
	weight=0;
	hiddenSelections[] = {"zbytek","armband"};
	hiddenSelectionsTextures[] = { TEXTURESFOLDER(patches\patch_sl.paa), TEXTURESFOLDER(patches\armband_co.paa) };
	hiddenSelectionsMaterials[]= { TEXTURESFOLDER(patches\patch.rvmat), TEXTURESFOLDER(patches\armband.rvmat) };
	class DamageSystem {
		class GlobalHealth {
			class Health {
				hitpoints=100;
				healthLevels[] = 
				{
					{1.0,{TEXTURESFOLDER(patches\patch.rvmat),TEXTURESFOLDER(patches\armband.rvmat)}},
					{0.7,{TEXTURESFOLDER(patches\patch.rvmat),TEXTURESFOLDER(patches\armband.rvmat)}},
					{0.5,{TEXTURESFOLDER(patches\patch_damage.rvmat),TEXTURESFOLDER(patches\armband_damage.rvmat)}},
					{0.3,{TEXTURESFOLDER(patches\patch_damage.rvmat),TEXTURESFOLDER(patches\armband_damage.rvmat)}},
					{0.0,{TEXTURESFOLDER(patches\patch_destruct.rvmat),TEXTURESFOLDER(patches\armband_destruct.rvmat)}}
				};
			};
		};
	};		
	class ClothingTypes {
		male=MODELSFOLDER(patches\patch_m.p3d);
		female=MODELSFOLDER(patches\patch_m.p3d);
	};
	class AnimEvents {
		class SoundWeapon {
			class pickUpItem_Light {
				soundSet = "pickUpCourierBag_Light_SoundSet";
				id = 796;
			};
			class pickUpItem {
				soundSet = "pickUpCourierBag_SoundSet";
				id = 797;
			};
		};
	};
};
class Modular_Patch_Base_2: Clothing {
	scope = 0;
	displayName = "Country Flag";
	descriptionShort = "$STR_STRIX_PATCH_DESC";
	model = MODELSFOLDER(patches\country_patch.p3d);
	itemSize[] = {2,1};
	inventorySlot[] = {"armband","patch_01","patch_02","patch_03","patch_04"};
	weight=0;
	hiddenSelections[] = {"zbytek","armband"};
	hiddenSelectionsTextures[] = {TEXTURESFOLDER(patches\patch_sl.paa),TEXTURESFOLDER(patches\armband_co.paa)};
	hiddenSelectionsMaterials[]= {TEXTURESFOLDER(patches\country_patch.rvmat),TEXTURESFOLDER(patches\armband.rvmat)};
	class DamageSystem {
		class GlobalHealth {
			class Health {
				hitpoints=100;
				healthLevels[] = {
					{1.0,{TEXTURESFOLDER(patches\country_patch.rvmat),TEXTURESFOLDER(patches\armband.rvmat)}},
					{0.7,{TEXTURESFOLDER(patches\country_patch.rvmat),TEXTURESFOLDER(patches\armband.rvmat)}},
					{0.5,{TEXTURESFOLDER(patches\country_patch_damage.rvmat),TEXTURESFOLDER(patches\armband_damage.rvmat)}},
					{0.3,{TEXTURESFOLDER(patches\country_patch_damage.rvmat),TEXTURESFOLDER(patches\armband_damage.rvmat)}},
					{0.0,{TEXTURESFOLDER(patches\country_patch_destruct.rvmat),TEXTURESFOLDER(patches\armband_destruct.rvmat)}}
				};
			};
		};
	};		
	class ClothingTypes {
		male=MODELSFOLDER(patches\patch_m2.p3d);
		female=MODELSFOLDER(patches\patch_m2.p3d);
	};
	class AnimEvents {
		class SoundWeapon {
			class pickUpItem_Light {
				soundSet = "pickUpCourierBag_Light_SoundSet";
				id = 796;
			};
			class pickUpItem {
				soundSet = "pickUpCourierBag_SoundSet";
				id = 797;
			};
		};
	};
};

//patches_cis_popular.hpp
// Требует: macros_paths.hpp с DEF_FLAG / TEXTURESFOLDER / GETPATCHPREFIX
// === СНГ и близкие ===
DEF_FLAG(CountryFlag_Armenia,       STR_FLAG(ARMENIA),       TEXTURESFOLDER(patches\armenia.paa))
DEF_FLAG(CountryFlag_Azerbaijan,    STR_FLAG(AZERBAIJAN),    TEXTURESFOLDER(patches\azerbaijan.paa))
DEF_FLAG(CountryFlag_Afghanistan,   STR_FLAG(AFGHANISTAN),   TEXTURESFOLDER(patches\afghanistan.paa))
DEF_FLAG(CountryFlag_Belarus,       STR_FLAG(BELARUS),       TEXTURESFOLDER(patches\belarus.paa))
DEF_FLAG(CountryFlag_Bulgaria,      STR_FLAG(BULGARIA),      TEXTURESFOLDER(patches\bulgaria.paa))
DEF_FLAG(CountryFlag_China,         STR_FLAG(CHINA),         TEXTURESFOLDER(patches\china.paa))
DEF_FLAG(CountryFlag_Czech,         STR_FLAG(CZECH),         TEXTURESFOLDER(patches\czech.paa))
DEF_FLAG(CountryFlag_Canada,        STR_FLAG(CANADA),        TEXTURESFOLDER(patches\canada.paa))
DEF_FLAG(CountryFlag_Estonia,       STR_FLAG(ESTONIA),       TEXTURESFOLDER(patches\estonia.paa))
DEF_FLAG(CountryFlag_Finland,       STR_FLAG(FINLAND),       TEXTURESFOLDER(patches\finland.paa))
DEF_FLAG(CountryFlag_France,        STR_FLAG(FRANCE),        TEXTURESFOLDER(patches\france.paa))
DEF_FLAG(CountryFlag_Germany,       STR_FLAG(GERMANY),       TEXTURESFOLDER(patches\germany.paa))
DEF_FLAG(CountryFlag_Greece,        STR_FLAG(GREECE),        TEXTURESFOLDER(patches\greece.paa))
DEF_FLAG(CountryFlag_Hungary,       STR_FLAG(HUNGARY),       TEXTURESFOLDER(patches\hungary.paa))
DEF_FLAG(CountryFlag_Israel,        STR_FLAG(ISRAEL),        TEXTURESFOLDER(patches\israel.paa))
DEF_FLAG(CountryFlag_Italy,         STR_FLAG(ITALY),         TEXTURESFOLDER(patches\italy.paa))
DEF_FLAG(CountryFlag_Iran,          STR_FLAG(IRAN),          TEXTURESFOLDER(patches\iran.paa))
DEF_FLAG(CountryFlag_Japan,         STR_FLAG(JAPAN),         TEXTURESFOLDER(patches\japan.paa))
DEF_FLAG(CountryFlag_Kazakhstan,    STR_FLAG(KAZAKHSTAN),    TEXTURESFOLDER(patches\kazakhstan.paa))
DEF_FLAG(CountryFlag_Kyrgyzstan,    STR_FLAG(KYRGYZSTAN),    TEXTURESFOLDER(patches\kyrgyzstan.paa))
DEF_FLAG(CountryFlag_Latvia,        STR_FLAG(LATVIA),        TEXTURESFOLDER(patches\latvia.paa))
DEF_FLAG(CountryFlag_Lithuania,     STR_FLAG(LITHUANIA),     TEXTURESFOLDER(patches\lithuania.paa))
DEF_FLAG(CountryFlag_Moldova,       STR_FLAG(MOLDOVA),       TEXTURESFOLDER(patches\moldova.paa))
DEF_FLAG(CountryFlag_Mongolia,      STR_FLAG(MONGOLIA),      TEXTURESFOLDER(patches\mongolia.paa))
DEF_FLAG(CountryFlag_Norway,        STR_FLAG(NORWAY),        TEXTURESFOLDER(patches\norway.paa))
DEF_FLAG(CountryFlag_Poland,        STR_FLAG(POLAND),        TEXTURESFOLDER(patches\poland.paa))
DEF_FLAG(CountryFlag_Portugal,      STR_FLAG(PORTUGAL),      TEXTURESFOLDER(patches\portugal.paa))
DEF_FLAG(CountryFlag_Romania,       STR_FLAG(ROMANIA),       TEXTURESFOLDER(patches\romania.paa))
DEF_FLAG(CountryFlag_Russia,        STR_FLAG(RUSSIA),        TEXTURESFOLDER(patches\russia.paa))
DEF_FLAG(CountryFlag_Serbia,        STR_FLAG(SERBIA),        TEXTURESFOLDER(patches\serbia.paa))
DEF_FLAG(CountryFlag_Slovakia,      STR_FLAG(SLOVAKIA),      TEXTURESFOLDER(patches\slovakia.paa))
DEF_FLAG(CountryFlag_Spain,         STR_FLAG(SPAIN),         TEXTURESFOLDER(patches\spain.paa))
DEF_FLAG(CountryFlag_Sweden,        STR_FLAG(SWEDEN),        TEXTURESFOLDER(patches\sweden.paa))
DEF_FLAG(CountryFlag_SouthKorea,    STR_FLAG(SOUTH_KOREA),   TEXTURESFOLDER(patches\southkorea.paa))
DEF_FLAG(CountryFlag_Tajikistan,    STR_FLAG(TAJIKISTAN),    TEXTURESFOLDER(patches\tajikistan.paa))
DEF_FLAG(CountryFlag_Turkmenistan,  STR_FLAG(TURKMENISTAN),  TEXTURESFOLDER(patches\turkmenistan.paa))
DEF_FLAG(CountryFlag_Turkey,        STR_FLAG(TURKEY),        TEXTURESFOLDER(patches\turkey.paa))
DEF_FLAG(CountryFlag_USSR,          STR_FLAG(USSR),          TEXTURESFOLDER(patches\ussr.paa))
DEF_FLAG(CountryFlag_Ukraine,       STR_FLAG(UKRAINE),       TEXTURESFOLDER(patches\ukraine.paa))
DEF_FLAG(CountryFlag_Uzbekistan,    STR_FLAG(UZBEKISTAN),    TEXTURESFOLDER(patches\uzbekistan.paa))
DEF_FLAG(CountryFlag_UnitedKingdom, STR_FLAG(UNITED_KINGDOM),TEXTURESFOLDER(patches\unitedkingdom.paa))
DEF_FLAG(CountryFlag_UnitedStates,  STR_FLAG(UNITED_STATES), TEXTURESFOLDER(patches\unitedstates.paa))

// === Патчи/шевроны ===
DEF_PATCH(Patch_SquadLeader,   STR_PATCH(SQUAD_LEADER),         TEXTURESFOLDER(patches\patch_sl.paa))
DEF_PATCH(Patch_TeamLeader,    STR_PATCH(TEAM_LEADER),          TEXTURESFOLDER(patches\patch_tl.paa))
DEF_PATCH(Patch_Machinegunner, STR_PATCH(MACHINEGUNNER),        TEXTURESFOLDER(patches\patch_gnr.paa))
DEF_PATCH(Patch_Medic,         STR_PATCH(MEDIC),                TEXTURESFOLDER(patches\patch_med.paa))
DEF_PATCH(Patch_Sniper,        STR_PATCH(SNIPER),               TEXTURESFOLDER(patches\patch_snpr.paa))
DEF_PATCH(Patch_Rifleman,      STR_PATCH(RIFLEMAN),             TEXTURESFOLDER(patches\patch_rfl.paa))

DEF_PATCH(Patch_US,            STR_PATCH(US),                          TEXTURESFOLDER(patches\patch_US.paa))
DEF_PATCH(Patch_UK,            STR_PATCH(UK),                          TEXTURESFOLDER(patches\patch_UK.paa))
DEF_PATCH(Patch_AUS,           STR_PATCH(AUS),                         TEXTURESFOLDER(patches\patch_AUS.paa))

DEF_PATCH(Patch_USIR,          STR_PATCH(US_IR),                       TEXTURESFOLDER(patches\patch_US_IR.paa))
DEF_PATCH(Patch_UKIR,          STR_PATCH(UK_IR),                       TEXTURESFOLDER(patches\patch_UK_IR.paa))
DEF_PATCH(Patch_AUSIR,         STR_PATCH(AUS_IR),                      TEXTURESFOLDER(patches\patch_AUS_IR.paa))

DEF_PATCH(Patch_RottensRaiders,STR_PATCH(ROTTENS_RAIDERS),             TEXTURESFOLDER(patches\patch_cobra.paa))
DEF_PATCH(Patch_A10Warthog,    STR_PATCH(A10_WARTHOG),                 TEXTURESFOLDER(patches\patch_a10.paa))
DEF_PATCH(Patch_EOD,           STR_PATCH(EOD),                         TEXTURESFOLDER(patches\patch_EOD.paa))
DEF_PATCH(Patch_FSU,           STR_PATCH(FSU),                         TEXTURESFOLDER(patches\patch_FSU.paa))
DEF_PATCH(Patch_NFG,           STR_PATCH(NFG),                         TEXTURESFOLDER(patches\patch_fcks.paa))
DEF_PATCH(Patch_ITOFTS,        STR_PATCH(ITOFTS),                      TEXTURESFOLDER(patches\patch_old.paa))
DEF_PATCH(Patch_WYC,           STR_PATCH(WYC),                         TEXTURESFOLDER(patches\patch_weyland.paa))
DEF_PATCH(Patch_TheWarriors,   STR_PATCH(THE_WARRIORS),                TEXTURESFOLDER(patches\patch_warriors.paa))
DEF_PATCH(Patch_Canada,        STR_PATCH(CANADA),                      TEXTURESFOLDER(patches\patch_CAN.paa))
DEF_PATCH(Patch_CanadaIR,      STR_PATCH(CANADA_IR),                   TEXTURESFOLDER(patches\patch_CAN_IR.paa))
DEF_PATCH(Patch_OBEY,          STR_PATCH(OBEY),                        TEXTURESFOLDER(patches\patch_obey.paa))
DEF_PATCH(Patch_Blackwater,    STR_PATCH(BLACKWATER),                  TEXTURESFOLDER(patches\patch_Blackwater.paa))
DEF_PATCH(Patch_LYACS,         STR_PATCH(LYACS),                       TEXTURESFOLDER(patches\patch_lagoon.paa))
DEF_PATCH(Patch_HCLI,          STR_PATCH(HCLI),                        TEXTURESFOLDER(patches\patch_HCLI.paa))
DEF_PATCH(Patch_Boogaloo,      STR_PATCH(BOOGALOO),                    TEXTURESFOLDER(patches\patch_boogaloo.paa))
DEF_PATCH(Patch_UN,            STR_PATCH(UN),                          TEXTURESFOLDER(patches\patch_UN.paa))
DEF_PATCH(Patch_Umbrella,      STR_PATCH(UMBRELLA),                    TEXTURESFOLDER(patches\patch_Umbrella.paa))
DEF_PATCH(Patch_UmbrellaSS,    STR_PATCH(UMBRELLA_SS),                 TEXTURESFOLDER(patches\patch_USS.paa))
DEF_PATCH(Patch_Romania,       STR_PATCH(ROMANIA),                     TEXTURESFOLDER(patches\patch_ROM.paa))
DEF_PATCH(Patch_Sweden,        STR_PATCH(SWEDEN),                      TEXTURESFOLDER(patches\patch_SWE.paa))
DEF_PATCH(Patch_Anarchy,       STR_PATCH(ANARCHY),                     TEXTURESFOLDER(patches\patch_AN.paa))
DEF_PATCH(Patch_RTO,           STR_PATCH(RTO),                         TEXTURESFOLDER(patches\patch_RTO.paa))
DEF_PATCH(Patch_TITW,          STR_PATCH(TITW),                        TEXTURESFOLDER(patches\patch_warrior.paa))
DEF_PATCH(Patch_Admin,         STR_PATCH(ADMIN),                       TEXTURESFOLDER(patches\admin_patch.paa))