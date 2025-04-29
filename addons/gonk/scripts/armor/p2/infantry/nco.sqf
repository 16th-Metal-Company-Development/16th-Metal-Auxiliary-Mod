removeAllWeapons player;
removeAllItems player;
removeBackpack player;
removeVest player;
removeAllAssignedItems player;
removeUniform player;
removeHeadgear player;
removeGoggles player;

// Infantry : Clone Recruit //

// Headgear //
player addHeadgear "helmet_16th_nco";
// Weapons //

// Uniform //
player forceAddUniform "armor_16th_nco";

// Vest // 
player addVest "16_vest_nco";
player addItemToVest "nvg_16th_macro";

// Backpack // 

// Linked Items // 
player linkItem "ItemCompass";
player linkItem "ItemAndroid";
player linkItem "ItemMap";
player linkItem "ItemWatch";
player linkItem "JLTS_clone_comlink";
player linkItem "JLTS_CloneBinocular";