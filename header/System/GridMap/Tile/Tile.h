#include "GridPosition.h"
#include "tileEnums.h"
class Character;
class Tile{
    protected:
        GridPosition position;

        tileType type;

        Character* unitOnTile = nullptr;
    public:
        Tile(int ,int ,tileType );
        ~Tile();
        bool hasUnit();
        GridPosition getPosition();
        tileType getType();
        Character* getUnit();
};