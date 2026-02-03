#include "Items.h"
#include "Character.h"
class Equipment:public Items{
    public:
        Equipment(string,long);
        virtual ~Equipment();
        virtual void equip(Character*);
        virtual void unequip(Character*);
};