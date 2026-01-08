#pragma once
#include <string>
#include <iostream>
#include "VatPham.h"
using namespace std;
class VuKhi:public VatPham{
    protected:
        long satthuong;
        double tylebao;
    public:
        long long tinhsatthuong();
        string layten();
        void hienthi();
};

class DaiKiem:public VuKhi{};
class TruongKiem:public VuKhi{};
class Riu:public VuKhi{};
class Giao:public VuKhi{};
class CungTen:public VuKhi{};
class :public VuKhi{};
class HuyetKiem:public VuKhi{};