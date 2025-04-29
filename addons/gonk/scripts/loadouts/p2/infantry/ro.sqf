removeAllWeapons player;
removeAllItems player;
removeBackpack player;
removeVest player;
removeAllAssignedItems player;
removeUniform player;

// Infantry : Clone Recruit //

// Headgear //

// Weapons //
player addWeapon "MET_DC15A_PLASTIC";
player addPrimaryWeaponItem "MET_DC15A_mag";
player addWeapon "MET_DC17SA";
player addSecondaryWeaponItem "MET_blaster_pistol_battery";

// Uniform //
player forceAddUniform "armor_16th_cadet";
player addItemToUniform "ACE_EntrenchingTool";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "JLTS_stun_mag_long";
player addItemToUniform "MET_Weapons_Mags_flashnade";
for "_i" from 1 to 2 do {player addItemToUniform "MET_blaster_pistol_battery";};
for "_i" from 1 to 35 do {player addItemToUniform "LFP_item_bacta_bandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
for "_i" from 1 to 2 do {player addItemToUniform "LFP_item_injector_red";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_larynx";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_plasmaIV_500";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_painkillers";};
for "_i" from 1 to 3 do {player addItemToUniform "MET_Smoke_White";};
for "_i" from 1 to 3 do {player addItemToUniform "MET_Weapons_Mags_Thermal_Detonator";};
player addItemToUniform "MET_Smoke_Blue";
player addItemToUniform "MET_Smoke_Red";
player addItemToUniform "MET_Weapons_Mags_Thermal_Imploder";
player addItemToUniform "nvg_16th_macro";

// Vest // 
player addVest "16_vest_suspenders";
for "_i" from 1 to 9 do {player addItemToUniform "MET_DC15A_mag";};

// Backpack // 
player addBackpack "backpack_16th_rto";

// Linked Items // 
