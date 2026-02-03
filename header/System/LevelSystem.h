#pragma once
#include "Character.h"
#include "../GameConfig/GameConfig.h"
class LevelSystem{
    private:
        int level = 1;
        long long currentExp = 0;
        long long expToNextLevel = GameConfig::KinhNghiemCoBan;
    public:
        void levelUp(int);
        void gainExp(long long);
        void calculateExpForNextLevel();
};