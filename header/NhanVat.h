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
        //các chỉ số trong game
        long satthuongcoban;
        long long mautoida;
        long long mauhientai;
        long noinangtoida;
        long noinanghientai;
        long giap;
        long tocdo;
        HeThongCapDo capdo;
        int tamdichuyen;
        int dochinhxac;
        int tylenedon;
        double tylechimang;
        // các trang bị
        VuKhi* vukhidangcam = nullptr;
        ThuCuoi* thucuoidangcam = nullptr;

        TuiDo tuido;
        
    public:
        // các hàm cơ bản
        NhanVat(string,long, long long, long,VuKhi*,ThuCuoi*,TuiDo*);
        NhanVat(const NhanVat &nhanvatkhac);
        NhanVat operator=(const NhanVat&);
        virtual ~NhanVat();
        void hoimau();


        int nhankinhnghiem(long long);

        void trangbivukhi(VuKhi* vukhi);
        void trangbithucuoi(ThuCuoi* thucuoi);

        virtual long long tancong(NhanVat* muctieu);
        virtual long long bitancong();
};

class DauSi:public NhanVat{};
class PhapSu:public NhanVat{};
class Cungsi:public NhanVat{};