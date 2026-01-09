#include "VatPham.h"
#include "NhanVat.h"
class VatPhamTieuHao:public VatPham{
    public:
        VatPhamTieuHao();
        virtual ~VatPhamTieuHao();
        virtual void sudung(NhanVat*) = 0;
};