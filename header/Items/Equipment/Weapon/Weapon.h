#pragma once
#include <string>
#include <iostream>
#include "Items.h"
#include "Equipment.h"
using namespace std;
class Weapon:public Equipment{
    protected:
        long damage;
        double critRateBonus;
        int maxAttackRange;
        int minAttackRange;
        double accuracyBonus;
        int staminaCost;
    public:
        Weapon(string,long,long,double,int,int,int);
        virtual ~Weapon();
        long getDamage();
        double getCritRateBonus();
        int getMaxAttackRange();
        int getMinAttackRange();
        double getAccuraccyBonus();
        int getStaminaCost();

        void equip(Character*) override;
        void unequip(Character*) override;
        
        void display();
};
