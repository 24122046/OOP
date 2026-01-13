#include <string>
#pragma once
#include "TuiDo.h"
class VatPham{
    protected:
        std::string ten;
        long giaban;
        friend class TuiDo;
    public:
        VatPham(string,long);
        virtual ~VatPham();
        std::string layten();
        long laygiaban();
};