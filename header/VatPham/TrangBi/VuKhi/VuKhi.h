#pragma once
#include <string>
#include <iostream>
#include "VatPham.h"
#include "TrangBi.h"
using namespace std;
class VuKhi:public TrangBi{
    protected:
        long satthuong;
        double tychimangbonus;
        int tamdanhtoida;
        int tamdanhtoithieu;
        int dochinhxacbonus;
    public:
        VuKhi(string,long,long,double,int,int,int);
        virtual ~VuKhi();
        long laysatthuong();
        double laytychimangbonus();
        int laytamdanhtoida();
        int laytamdanhtoithieu();
        int laydochinhxacbonus();

        void hienthi();
};
