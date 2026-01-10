#include "VatPham.h"

VatPham::VatPham(string ten,long giaban){
    this ->ten = ten;
    this ->giaban = giaban;
}

string VatPham::layten(){
    return ten;
}

long VatPham::laygiaban(){
    return giaban;
}