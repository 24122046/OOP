#pragma once
#include <string>
#include "Equipment.h"
#include "Mount.h"
#include "Weapon.h"
#include "Inventory.h"
#include "Stats.h"
#include "LevelSystem.h"
#include "Unit.h"
#include "characterEnums.h"
class Character:public Unit{
    protected:
        LevelSystem level;
        Stats stats;
        characterType Type;
        // các trang bị
        Weapon* weapon = nullptr;
        Mount* mount = nullptr;

        Inventory inventory;
        
    public:
        // các hàm cơ bản
        Character(string,long, long long, long,Weapon*,Mount*,Inventory*);
        Character(const Character &nhanvatkhac);
        Character operator=(const Character&);
        virtual ~Character();

        characterType getType();

        void heal(long);

        int gainExp(long long);

        void equip(Equipment*);
        void unequip();

        virtual long long attack(Character* muctieu);
        virtual long long takeDamage(long long );
};
