#include "Items.h"
#include "Character.h"
class Consumable:public Items{
    public:
        Consumable();
        virtual ~Consumable();
        virtual void consume(Character*) = 0;
};