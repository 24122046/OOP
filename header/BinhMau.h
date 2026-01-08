#pragma once
#include "VatPham.h"
class BinhMau:public VatPham{
    protected:
        long luonghoi; 
    public:
        void chinhluongmauhoi(long luongmoi){
            luonghoi = luongmoi;
        }
};