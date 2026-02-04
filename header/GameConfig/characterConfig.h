#pragma once
#include "characterEnums.h"

struct VitalStats {
    int baseHP;
    int baseMana;
    int stamina;
};

struct CombatStats {
    long baseDamage;
    long baseArmor;
    double baseCritRate;
    int baseSpeed;
};

struct MobilityStats {
    int minRangeMove;
    int maxRangeMove;
    double baseAccuracy;
    double baseDodgeRate;
};


struct CharacterConfig {
    VitalStats vital;
    CombatStats combat;
    MobilityStats mobility;
};
constexpr CharacterConfig CHARACTER_CONFIGS[] = {
    //Warrior
    {
        // VitalStats
        {
            1200,   // baseHP
            80,     // baseMana
            1200    // stamina
        },

        // CombatStats
        {
            60,     // baseDamage
            40,     // baseArmor
            0.10,   // baseCritRate
            20      // baseSpeed
        },

        // MobilityStats
        {
            2,      // minRangeMove
            3,      // maxRangeMove
            0.90,   // baseAccuracy
            0.05    // baseDodgeRate
        }
    },

    //Mage
    {
        // VitalStats
            {
                700,    // baseHP
                300,    // baseMana
                800     // stamina
            },

        // CombatStats
            {
                95,     // baseDamage
                15,     // baseArmor
                0.25,   // baseCritRate
                25      // baseSpeed
            },

        // MobilityStats
            {
                3,      // minRangeMove
                4,      // maxRangeMove
                0.95,   // baseAccuracy
                0.10    // baseDodgeRate
            }
    },

    //Archer
    {
        // VitalStats
            {
                850,    // baseHP
                150,    // baseMana
                900     // stamina
            },

        // CombatStats
            {
                85,     // baseDamage
                25,     // baseArmor
                0.30,   // baseCritRate
                30      // baseSpeed
            },

        // MobilityStats
            {
                4,      // minRangeMove
                5,      // maxRangeMove
                0.98,   // baseAccuracy
                0.15    // baseDodgeRate
            }
    }
};