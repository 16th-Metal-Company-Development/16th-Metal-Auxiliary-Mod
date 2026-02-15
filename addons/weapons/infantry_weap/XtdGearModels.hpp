class XtdGearModels {
    class CfgWeapons {
        // DC-15A Blaster Rifle
        class dc15a {
            label = "DC-15A";
            author = "16th Mod Team";
            options[] = { "Gen", "GL", "Stock" };
            class Gen {
                values[] = {
                    "Mk I", "Mk II"
                };
            };
            class GL {
                values[] = {
                    "Removed", "Installed"
                };
            };
            class Stock {
                values[] = {
                    "Plastic", "Wood"
                };
            };
        };

        // DC-15C Blaster Rifle
        class dc15c {
            label = "DC-15C";
            author = "16th Mod Team";
            options[] = { "GL" };
            class GL {
                values[] = {
                    "Removed", "Installed"
                };
            };
        };

        // DC-15S Blaster Rifle
        class dc15s {
            label = "DC-15S";
            author = "16th Mod Team";
            options[] = { "Gen", "GL" };
            class Gen {
                values[] = {
                    "Mk I", "Mk II"
                };
            };
            class GL {
                values[] = {
                    "Removed", "Installed"
                };
            };
        };

        // DC-19 Blaster Rifle
        class dc19e {
            label = "DC-19E";
            author = "16th Mod Team";
            options[] = { "Stock" };
            class Stock {
                values[] = {
                    "Out", "In"
                };
            };
        };

        // Scatter Blasters
        class dpseries {
            label = "Scatter Blasters";
            author = "16th Mod Team";
            options[] = { "Gen", "GL", "Pattern" };
            class Gen {
                values[] = {
                    "Mk I", "Mk II"
                };
            };
            class GL {
                values[] = {
                    "Removed", "Installed"
                };
            };
            class Pattern {
                values[] = {
                    "DP-12", "DP-23"
                };
            };
        };

        // Westar M-5 Blaster Rifle
        class westarm5 {
            label = "Westar M-5";
            author = "16th Mod Team";
            options[] = { "Block", "GL" };
            class Block {
                values[] = {
                    "I", "II"
                };
            };
            class GL {
                values[] = {
                    "Removed", "GL", "DP-23", "DP-12"
                };
            };
        };

        // Z6 Blaster Rifle
        class z6 {
            label = "Z6";
            author = "16th Mod Team";
            options[] = { "Gen" };
            class Gen {
                values[] = {
                    "Mk I", "Mk II"
                };
            };
        };
        // E-11 Blaster Rifle
        /*class e11 {
            label = "E-11 Blaster Rifle";
            author = "16th Mod Team";
            options[] = { "Mod", "Power_Pack", "Stock", "GL" };
            class Mod {
                label = "Mod";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "LLTE", "3AS", "WM", "IDA"
                };
            };
            class Power_Pack {
                label = "Power Pack";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "Mk I", "Mk II"
                };
            };
            class Stock {
                label = "Stock";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "Removed", "Folded", "Fixed"
                };
            };
            class GL {
                label = "Grenade Launcher";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "Removed", "GL"
                };
            };
        };*/
    };
};