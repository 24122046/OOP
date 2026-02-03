#pragma once
#include "Items.h"
#include "Character.h"
#include "Consumable.h"
class HealthPotion:public Consumable{
    protected:
        long healAmount = 50; 
    public:
        long getHealAmount();
        void setHealAmount(long);
        void consume(Character*) override;
};