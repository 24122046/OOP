#include "VatPham.h"
#include "NhanVat.h"
class TrangBi:public VatPham{
    public:
        TrangBi(string,long);
        virtual ~TrangBi();
        virtual void gantrangbi(NhanVat*);
        virtual void thaotrangbi(NhanVat*);
};