#pragma once
#include "NhanVat.h"
#include "GameConfig.h"
class HeThongCapDo{
    private:
        int cap = 1;
        long long kinhnghiemhientai = 0;
        long long kinhnghiemyeucau = GameConfig::KinhNghiemCoBan;
    public:
        void lencap(int);
        void nhankinhnghiem(long long);
        void tinhkinhnghiemyeucau();
};