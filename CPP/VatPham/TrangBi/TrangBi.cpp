#include "../../../header/VatPham/TrangBi/TrangBi.h"
#include "NhanVat.h"
TrangBi::TrangBi(string ten,long gia):VatPham(ten,gia){};

void TrangBi::gantrangbi(NhanVat* nguoichoi){
    nguoichoi->gantrangbi(this);
}

void TrangBi::thaotrangbi(NhanVat* nguoichoi){
    nguoichoi->thaotrangbi();
}