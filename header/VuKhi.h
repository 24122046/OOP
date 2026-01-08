#pragma once
#include <string>
#include <iostream>
#include "VatPham.h"
using namespace std;
class VuKhi:public VatPham{
    protected:
        long satthuong;
        double tylebao;
        int tamdanhtoida;
        int tamdanhtoithieu;
        int dochinhxacbonus;
    public:
        long long tinhsatthuong();
        string layten();
        void hienthi();
};

class DaiKiem:public VuKhi{};
class TruongKiem:public VuKhi{};
class Kiem:public VuKhi{};
class Riu:public VuKhi{};
class Giao:public VuKhi{};
class CungTen:public VuKhi{};