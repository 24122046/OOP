#pragma once
#include "VatPham.h"
#include "NhanVat.h"
class BinhMau:public VatPham{
    protected:
        long luonghoi = 50; 
    public:
        long luonghoimau();
};