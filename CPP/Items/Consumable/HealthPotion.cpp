#include "HealthPotion.h"
void HealthPotion::consume(Character* nguoichoi){
    nguoichoi->heal(healAmount);
}

long HealthPotion::getHealAmount(){
    return healAmount;
}

void HealthPotion::setHealAmount(long number){
    this ->healAmount = number;
}
