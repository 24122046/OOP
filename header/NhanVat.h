#pragma once
#include <string>
#include "ThuCuoi.h"
#include "VuKhi.h"
#include "TuiDo.h"
#include "HeThongCapDo.h"
using namespace std;
class NhanVat{
    protected:
        string ten;
        long satthuongcoban;

        long long mautoida;
        long long mau;
        
        long noinangtoida;
        long noinang;

        long giap;

        VuKhi* vukhidangcam = nullptr;
        ThuCuoi* thucuoidangcam = nullptr;

        HeThongCapDo capdo;
        TuiDo tuido;
        
        friend class HeThongCapDo;
    public:
        NhanVat(string,long, long long, long,VuKhi*,ThuCuoi*,TuiDo*){};
        NhanVat(const NhanVat &nhanvatkhac);
        NhanVat operator=(const NhanVat&);
        virtual ~NhanVat();
        void hoimau();
        void trangbivukhi(VuKhi* vukhi);
        void trangbithucuoi(ThuCuoi* thucuoi);
        virtual long long tancong(NhanVat* muctieu);
        virtual long long bitancong();
};

class DauSi:public NhanVat{};
class PhapSu:public NhanVat{};
class Cungsi:public NhanVat{};