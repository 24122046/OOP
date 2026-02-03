#include <string>
#include "GridPosition.h"
class Unit{
    protected:
        std::string name;

        long long maxHp;
        long long currentHp;

        long maxStamina;
        long currentStamina;
        
        GridPosition position;
    public:
        Unit();
        virtual ~Unit();
        bool isAlive();
        GridPosition getPosition();
        void setPosition();
};