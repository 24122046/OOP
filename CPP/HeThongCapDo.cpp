#include "HeThongCapDo.h"
#include "GameConfig.h"
void HeThongCapDo::lencap(int socap){
    this ->cap += socap;
}

void HeThongCapDo::tinhkinhnghiemyeucau(){
    this ->kinhnghiemyeucau = long(this->kinhnghiemyeucau * this->cap * GameConfig::HeSoLenKinhNghiem);
}
int HeThongCapDo::nhankinhnghiem(long long sokinhnghiem){
        int count = 0;
        this ->kinhnghiemhientai += sokinhnghiem;
        while (this->kinhnghiemhientai >= this->kinhnghiemyeucau)
        {
            this ->kinhnghiemhientai -= kinhnghiemyeucau;
            this->lencap(1);
            this ->tinhkinhnghiemyeucau();
            count += 1;
        }
        return count;
    }    
