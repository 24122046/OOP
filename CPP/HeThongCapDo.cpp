#include "HeThongCapDo.h"
void HeThongCapDo::lencap(int socap){
    this ->cap += socap;
}

void HeThongCapDo::tinhkinhnghiemyeucau(){
    this ->kinhnghiemyeucau = long(this->kinhnghiemyeucau * this->cap * 1.2);
}
void HeThongCapDo::nhankinhnghiem(long long sokinhnghiem){
    while (sokinhnghiem + this->kinhnghiemhientai > this->kinhnghiemyeucau)
    {
        this ->kinhnghiemhientai += sokinhnghiem;

    }
    
}