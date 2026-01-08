#include <string>
#include "NhanVat.h"
#include "TuiDo.h"
using namespace std;
class VatPham{
    protected:
        string ten;
        long giaban;
        friend class TuiDo;
    public:
        virtual void sudung(NhanVat* nguoichoi) = 0;
};