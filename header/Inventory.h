#pragma once
#include <vector>
#include "Items.h"
class Inventory{
    protected:
        int capacity;
        int quantity;
        std::vector<Items*> inventory;
    public:
        Inventory(int);
        ~Inventory();
        bool addItem(Items*);
        void removeItem(int idx);
        int getQuantity();
};