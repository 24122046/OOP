#pragma once
#include "Weapon.h"
#include "Equipment.h"
class EnergyWeapon : public Weapon{
    protected:
        long manaCost;
    public:
        long getManaCost();
};
