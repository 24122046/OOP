struct CombatStats {
    long   damage;
    double critRateBonus;
    double accuracyBonus;
};

struct RangeStats {
    int minAttackRange;
    int maxAttackRange;
};

struct CostStats {
    int staminaCost;
    long manaCost;
};

struct WeaponConfig{
    CombatStats combat;
    RangeStats range;
    CostStats cost;
};

constexpr WeaponConfig WEAPON_CONFIGS[] = {};