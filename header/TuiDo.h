#pragma once
#include <vector>
#include "VatPham.h"
class TuiDo{
    protected:
        int succhuatoida;
        int soluonghientai;
        vector<VatPham*> tuido;
    public:
        TuiDo(int);
        ~TuiDo();
        bool themvatpham(VatPham*);
        void bovatpham(int idx);
        int laysoluong();
};