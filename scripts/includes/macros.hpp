// macros_paths.hpp — шорткаты путей для Strix Mod
// Работает в config.cpp/*.hpp. Без конкатенации через '+'.
// Меняем только PREFIX (и/или $PBOPREFIX$ PBO), всё остальное подтянется автоматически.

// Хелперы для квотинга
#define STR(s) #s
#define QUOTE(s) STR(s)
#define JOIN(a,b) a##b

// Стабильный корень путей = твой $PBOPREFIX$ для этого PBO.
// Поменяешь префикс — меняешь ТОЛЬКО эту строку.
#define PREFIX strix_mod

// === ШОРТКАТЫ (как просил): ===
// Использование:
//   model = MODELSFOLDER(vests\combatvest.p3d);
//   hiddenSelectionsTextures[] = {
//       TEXTURESFOLDER(vests\MVSHeavy_co.paa),
//       TEXTURESFOLDER(vests\MVSHeavy_co.paa),
//       TEXTURESFOLDER(vests\MVSHeavy_co.paa)
//   };
//
// ВАЖНО: аргументы передаются БЕЗ кавычек и БЕЗ ведущего '\'.
#define TEXTURESFOLDER(path) QUOTE(PREFIX\data\textures\path)
#define MODELSFOLDER(path)   QUOTE(PREFIX\data\models\path)

// localization_macros.hpp
#define DEF_FLAG(CLASS, DISP, RELPATH) \
class CLASS: Modular_Patch_Base_2 { \
    scope = 2; \
    displayName = DISP; \
    hiddenSelectionsTextures[] = { RELPATH, TEXTURESFOLDER(patches\armband_co.paa) }; \
};

#define DEF_PATCH(CLASS, DISP, RELPATH) \
class CLASS: Modular_Patch_Base { \
    scope = 2; \
    displayName = DISP; \
    hiddenSelectionsTextures[] = { RELPATH, TEXTURESFOLDER(patches\armband_co.paa) }; \
};

#define STR_MAIN(ID) QUOTE(JOIN($STR_STRIX_,ID))
#define STR_FLAG(ID)  QUOTE(JOIN($STR_STRIX_FLAG_,ID))
#define STR_PATCH(ID) QUOTE(JOIN($STR_STRIX_PATCH_,ID))
