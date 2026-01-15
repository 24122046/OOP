#pragma once
#include <string>
#include "VatPham.h"
class ThuCuoi:public VatPham{
    protected:
        std::string ten;
        double tylenedonbonus;
        int tamdichuyenbonus;
        int tocdobonus;
    public:
        ThuCuoi(std::string,double,int,int);
        virtual ~ThuCuoi();

        std::string layten();
        double laytylenedon();
        int laytamdichuyen();
        int laytocdo();

};