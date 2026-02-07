struct CombatStats {
    int damage;
    int armor;
    int speed;
    double critRate;
};

struct MobilityStats {
    int minMoveRange;
    int maxMoveRange;
    double accuracy;
    double dodgeRate;
};

struct Stats {
    CombatStats combat;
    MobilityStats mobility;
};
