#pragma once
#include <string>
#include "VatPham.h"
using namespace std;
class ThuCuoi:public VatPham{
    protected:
        string ten;
        double tylenedonbonus;
        int tamdichuyenbonus;
        int tocdobonus;
    public:
        ThuCuoi(string,double,int,int);
        virtual ~ThuCuoi();

        string layten();
        double laytylenedon();
        int laytamdichuyen();
        int laytocdo();

};