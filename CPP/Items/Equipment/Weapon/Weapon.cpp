#include "Weapon.h"

Weapon::Weapon(std::string ten,long gia,long satthuong,double tychimangbonus,int tamdanhtoida,int tamdanhtoithieu,int dochinhxacbonus):Equipment(ten,gia){
    this ->damage = satthuong;
    this ->critRateBonus = tychimangbonus;
    this ->maxAttackRange = tamdanhtoida;
    this ->minAttackRange = tamdanhtoithieu;
    this ->accuracyBonus = dochinhxacbonus;
}

long Weapon::getDamage(){
    return damage;
}

double Weapon::getCritRateBonus(){
    return critRateBonus;
}

int Weapon::getMaxAttackRange(){
    return maxAttackRange;
}

int Weapon::getMinAttackRange(){
    return minAttackRange;
}

double Weapon::getAccuraccyBonus(){
    return accuracyBonus;
}