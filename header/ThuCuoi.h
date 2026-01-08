#include <string>
#include "VatPham.h"
using namespace std;
class ThuCuoi:public VatPham{
    protected:
        string ten;
        double tylenedon;
        int sucben;
        int tancong;
    public:
        int hotrotancong(){
            return tancong;
        }
};