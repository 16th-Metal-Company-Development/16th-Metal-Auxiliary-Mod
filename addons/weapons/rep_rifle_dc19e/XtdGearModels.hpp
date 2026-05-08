class XtdGearModels {
    class CfgWeapons {
        // DC-19 Blaster Rifle
        class dc19e {
            label = "DC-19E";
            author = "16th Mod Team";
            options[] = { "Stock" };
            class Stock {
                label = "Stock";
                changeingame = 1; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                changedelay = 1; //If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; //If can changeingame, action group icon in ACE menu
                values[] = {
                    "Out", "In"
                };
            };
        };
    };
};