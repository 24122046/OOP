#include <cmath>

struct GridPosition
{
    int x;
    int y;

    GridPosition(int a = 0,int b = 0){
        this->x = a;
        this ->y = b;
    }

    bool operator==(GridPosition& position){
        return x == position.x and y == position.y;
    }
    bool operator!=(GridPosition& position){
        return x != position.x or y != position.y;
    }
    
    double khoangcach(GridPosition& position){
        return sqrt((position.x - x)*(position.x - x) + (position.y-y)*(position.y-y));
    }
};