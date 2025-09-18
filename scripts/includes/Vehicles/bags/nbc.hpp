class NBCBag: DrysackBag_ColorBase { //NBCBag
    itemSize[] = {2,2};
	scope=2;
    displayName=STR_MAIN(NBC_BAG);
    descriptionShort=STR_MAIN(NBC_BAG_DESC);
	itemsCargoSize[] ={6,7};
    hiddenSelectionsTextures[] = { TEXTURESFOLDER(nbc_bag\nbcbag_co.paa),TEXTURESFOLDER(nbc_bag\nbcbag_co.paa),TEXTURESFOLDER(nbc_bag\nbcbag_co.paa) };//camoGround camoMale camoFemale
    attachments[] = {
        "NBC_Hood",//Капюшон химзы
        "NBC_GasMask",//Противогаз
        "NBC_Jacket",//Куртка химзы
        "NBC_Gloves",//Перчатки химзы
        "NBC_Boots",//Ботинки химзы
        "NBC_Pants",//Штаны химзы
        "NBC_GasMask_Filter",//Фильтр противогаза
        "NBC_GasMask_Filter2",//Фильтр противогаза
        "NBC_GasMask_Filter3"//Фильтр противогаза
    };
};