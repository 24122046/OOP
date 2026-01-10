#include <string>
#pragma once
#include "TuiDo.h"
using namespace std;
class VatPham{
    protected:
        string ten;
        long giaban;
        friend class TuiDo;
    public:
        VatPham(string,long);
        virtual ~VatPham();
        string layten();
        long laygiaban();
};