#include <vector>
#include "VatPham.h"
class TuiDo{
    protected:
        vector<VatPham*> tuido;
    public:
        void themvatpham(VatPham*);
        void bovatpham(VatPham*);
};