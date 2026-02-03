#pragma once
#include <string>
#include "Inventory.h"
class Items{
    protected:
        std::string name;
        long cost;
        friend class Inventory;
    public:
        Items(std::string,long);
        virtual ~Items();
        std::string getName();
        long getCost();
};