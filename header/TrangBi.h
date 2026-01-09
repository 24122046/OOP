#include "VatPham.h"
class TrangBi:public VatPham{
    public:
        TrangBi();
        ~TrangBi();
        virtual void gantrangbi();
        virtual void thaotrangbi();
};