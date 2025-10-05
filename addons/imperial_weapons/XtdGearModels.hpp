class XtdGearModels {
    class CfgWeapons {
        // DLT-19 Heavy Repeating Blaster
        class dlt19 {
            label = "DLT-19 Heavy Repeating Blaster";
            author = "16th Mod Team";
            options[] = { "Mod", "Stock" };
            class Mod {
                values[] = {
                    "LLTE", "3AS", "WM", "IDA"
                };
            };
            class Stock {
                values[] = {
                    "Plastic", "Wood"
                };
            };
        };
        // E-11 Blaster Rifle
        class e11 {
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
        };
        // E-10 Blaster Rifle
        class e10 {
            label = "E-10 Blaster Rifle";
            author = "16th Mod Team";
            options[] = { "Mod", "Power_Pack", "Stock", "GL" };
            class Mod {
                label = "Mod";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "LLTE", "IDA"
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
        };
        // E-11D Blaster Rifle
        class E11D {
            label = "E-11D Blaster Rifle";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                label = "Mod"; // Category Label in Arsenal
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {"LLTE", "WM", "IDA"};
                class LLTE
                {
                    label = "LLTE"; // displayed in Arsenal
                    description = "JM's Long Live the Empire"; // displayed as tooltip
                    // image = "xxx"; Background image in Arsenal
                    // icon = "xxx"; If can changeingame, action icon in ACE menu
                    // actionlabel = "xxx"; If can changeingame, action label in ACE menu 
                    // itemingame = "xxx"; If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
                    // changedelay = (inherited by default); If can changeingame, wait delay before change is effective
                    // faction[] = {"BLU_F", "BLU_T_F", "BLU_W_F"}; // shows this value only for selected factions, identified by their A3 code (optional)
                };
                class WM
                {
                    label = "WM"; // displayed in Arsenal
                    description = "Warmantle Armory"; // displayed as tooltip
                    // image = "xxx"; Background image in Arsenal
                    // icon = "xxx"; If can changeingame, action icon in ACE menu
                    // actionlabel = "xxx"; If can changeingame, action label in ACE menu 
                    // itemingame = "xxx"; If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
                    // changedelay = (inherited by default); If can changeingame, wait delay before change is effective
                    // faction[] = {"BLU_F", "BLU_T_F", "BLU_W_F"}; // shows this value only for selected factions, identified by their A3 code (optional)
                };
                class IDA
                {
                    label = "IDA"; // displayed in Arsenal
                    description = "Indecisive Armory"; // displayed as tooltip
                    // image = "xxx"; Background image in Arsenal
                    // icon = "xxx"; If can changeingame, action icon in ACE menu
                    // actionlabel = "xxx"; If can changeingame, action label in ACE menu 
                    // itemingame = "xxx"; If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
                    // changedelay = (inherited by default); If can changeingame, wait delay before change is effective
                    // faction[] = {"BLU_F", "BLU_T_F", "BLU_W_F"}; // shows this value only for selected factions, identified by their A3 code (optional)
                };
            };
        };
        // E-22 Heavy Blaster Rifle
        class e22 {
            label = "E-22 Heavy Blaster Rifle";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                values[] = {
                    "LLTE", "IDA"
                };
            };
        };
        // DLT-19X Sniper Rifle
        class dlt19x {
            label = "DLT-19X Sniper Rifle";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                values[] = {
                    "LLTE", "3AS", "WM"
                };
            };
        };
        // DLT-19D Sniper Rifle
        class dlt19d {
            label = "DLT-19D Sniper Rifle";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                values[] = {
                    "LLTE", "WM", "IDA"
                };
            };
        };
        // T-21 Battle Rifle
        class t21 {
            label = "T-21 Battle Rifle";
            author = "16th Mod Team";
            options[] = { "Mod", "Age" };
            class Mod {
                label = "Mod";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "LLTE", "WM", "IDA"
                };
            };
            class Age {
                label = "Age";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "Old", "New"
                };
            };
        };
        // TL-50 Repeating Blaster
        class tl50 {
            label = "TL-50 Repeating Blaster";
            author = "16th Mod Team";
            options[] = { "Type" };
            class Type {
                label = "Model";
                values[] = {
                    "Base", "Automatic Rifle"
                };
            };
        };
        // RK-3 Blaster Pistol
        class rk3 {
            label = "RK-3 Blaster Pistol";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                values[] = {
                    "LLTE", "3AS", "WM"
                };
            };
        };
        // EC-17 Holdout Blaster
        class ec17 {
            label = "EC-17 Holdout Blaster";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                values[] = {
                    "LLTE", "WM", "IDA"
                };
            };
        };
        // SE-14 Machine Pistol
        class se14 {
            label = "SE-14 Machine Pistol";
            author = "16th Mod Team";
            options[] = { "Mod", "Firemode" };
            class Mod {
                label = "Mod";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "LLTE", "3AS", "WM"
                };
            };
            class Firemode {
                label = "Firemode";
                changeingame = 0; // 1 if value can be changed in game via ACE menu
                alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
                // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
                // icon = "xxx"; If can changeingame, action group icon in ACE menu
                values[] = {
                    "Automatic", "Burst"
                };
            };
        };
        // HH-12 Guided Rocket Launcher
        class hh12 {
            label = "HH-12 Guided Rocket Launcher";
            author = "16th Mod Team";
            options[] = { "Mod" };
            class Mod {
                values[] = {
                    "LLTE", "3AS", "WM"
                };
            };
        };
    };
};