#include "../System/LevelSystem.h"
#include "../GameConfig/GameConfig.h"
void LevelSystem::levelUp(int number){
    this ->level += number;
}

void LevelSystem::calculateExpForNextLevel(){
    this ->expToNextLevel = long(this->expToNextLevel * this->level * GameConfig::HeSoLenKinhNghiem);
}
void LevelSystem::gainExp(long long sokinhnghiem){
        this ->currentExp += sokinhnghiem;
        while (this->currentExp >= this->currentExp)
        {
            this ->currentExp -= this ->expToNextLevel;
            this->levelUp(1);
            this ->calculateExpForNextLevel();
        }
    }    
