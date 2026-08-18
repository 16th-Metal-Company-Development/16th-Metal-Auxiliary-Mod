class XtdGearModels {
    class CfgWeapons {
        // Z6 Blaster Rifle
        class z6 {
            label = "Z6";
            author = "16th Mod Team";
            options[] = { "Gen", "Size", "Heavy" };
            class Gen {
                label = "Generation";
                values[] = {
                    "Mk I", "Mk II"
                };
            };
            class Size {
                values[] = {
                    "Full", "Para"
                };
            };
            class Heavy {
                label = "Heavy Weapon Stance";
                changeingame = 1; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                changedelay = 0; //If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; //If can changeingame, action group icon in ACE menu
                values[] = {
                    "No", "Yes"
                };
            };
        };
    };
};