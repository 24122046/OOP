#pragma once
#include "VatPham.h"
#include "NhanVat.h"
#include "VatPhamTieuHao.h"
class BinhMau:public VatPhamTieuHao{
    protected:
        long luonghoi = 50; 
    public:
        long luonghoimau();
        void sudung(NhanVat*) override;
};