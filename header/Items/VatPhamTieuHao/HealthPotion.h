#pragma once
#include "Items.h"
#include "Character.h"
#include "Consumable.h"
class HealthPotion:public Consumable{
    protected:
        long healAmount = 50; 
    public:
        long healAmount();
        void consume(Character*) override;
};