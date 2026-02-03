#include "../Equipment.h"
#include "Character.h"
Equipment::Equipment(string ten,long gia):Items(ten,gia){};

void Equipment::equip(Character* nguoichoi){
    nguoichoi->equip(this);
}

void Equipment::unequip(Character* nguoichoi){
    nguoichoi->unequip();
}