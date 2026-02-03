#include "Inventory.h"

Inventory::Inventory(int toida){
    this ->capacity = toida;
    this ->quantity = 0;
}

bool Inventory::addItem(Items* vatphammoi){
    if (quantity < capacity){
        this->inventory.push_back(vatphammoi);
        quantity = inventory.size();
        return true;
    }
    return false;
}
void Inventory::removeItem(int idx){
    if (inventory.size() > idx and idx >= 0){
    delete inventory[idx];
    inventory.erase(inventory.begin() + idx);
    }
    quantity = inventory.size();
}