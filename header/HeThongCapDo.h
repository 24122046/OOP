#pragma once
#include "NhanVat.h"
class HeThongCapDo{
    private:
        int cap = 1;
        long long kinhnghiemhientai = 0;
        long long kinhnghiemyeucau;
    public:
        void lencap(int);
        void nhankinhnghiem(long long);
        void tinhkinhnghiemyeucau();
};