#pragma once
#include <string>
#include "Items.h"
class Mount:public Items{
    protected:
        std::string name;
        double dodgeRateBonus;
        int moveRangeBonus;
        int speedBonus;
    public:
        Mount(std::string,double,int,int);
        virtual ~Mount();

        std::string getName();
        double getDodgeRateBonus();
        int getMoveRangeBonus();
        int getSpeedBonus();

};