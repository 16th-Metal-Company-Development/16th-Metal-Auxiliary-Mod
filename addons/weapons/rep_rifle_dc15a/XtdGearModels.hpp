class XtdGearModels {
    class CfgWeapons {
        // DC-15A Blaster Rifle
        class dc15a {
            label = "DC-15A";
            author = "16th Mod Team";
            options[] = { "Gen", "GL", "Stock" };
            class Gen {
                values[] = {
                    "Mk I", "Mk II", "Mk III"
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
        class dc15le {
            label = "DC-15LE";
            author = "16th Mod Team";
            options[] = { "Gen" };
            class Gen {
                values[] = {
                    "Mk II", "Mk III"
                };
            };
        };
    };
};