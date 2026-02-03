#include "VuKhi.h"

VuKhi::VuKhi(string ten,long gia,long satthuong,double tychimangbonus,int tamdanhtoida,int tamdanhtoithieu,int dochinhxacbonus):TrangBi(ten,gia){
    this ->satthuong = satthuong;
    this ->tychimangbonus = tychimangbonus;
    this ->tamdanhtoida = tamdanhtoida;
    this ->tamdanhtoithieu = tamdanhtoithieu;
    this ->dochinhxacbonus = dochinhxacbonus;
}

long VuKhi::laysatthuong(){
    return satthuong;
}

double VuKhi::laytychimangbonus(){
    return tychimangbonus;
}

int VuKhi::laytamdanhtoida(){
    return tamdanhtoida;
}

int VuKhi::laytamdanhtoithieu(){
    return tamdanhtoithieu;
}

int VuKhi::laydochinhxacbonus(){
    return dochinhxacbonus;
}