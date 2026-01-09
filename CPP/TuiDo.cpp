#include "TuiDo.h"

TuiDo::TuiDo(int toida){
    this ->succhuatoida = toida;
    this ->soluonghientai = 0;
}

bool TuiDo::themvatpham(VatPham* vatphammoi){
    if (soluonghientai < succhuatoida){
        this->tuido.push_back(vatphammoi);
        soluonghientai = tuido.size();
        return true;
    }
    return false;
}
void TuiDo::bovatpham(int idx){
    if (tuido.size() > idx and idx >= 0){
    delete tuido[idx];
    tuido.erase(tuido.begin() + idx);
    }
    soluonghientai = tuido.size();
}