#pragma once
#include <string>
#include "TrangBi.h"
#include "ThuCuoi.h"
#include "VuKhi.h"
#include "TuiDo.h"
#include "HeThongCapDo.h"
class NhanVat{
    protected:
        std::string ten;
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
        double dochinhxac;
        double tylenedon;
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
        void hoimau(long);
        //các hàm tăng chỉ số
        void tangsatthuong(long);
        void tangmautoida(long);
        void tangnoinangtoida(long);
        void tanggiap(long);
        void tangtocdo(long);
        void tangdochinhxac(double);
        void tangtylenedon(double);
        void tangtylechimang(double);


        int nhankinhnghiem(long long);

        void gantrangbi(TrangBi*);
        void thaotrangbi();

        virtual long long tancong(NhanVat* muctieu);
        virtual long long bitancong(long long satthuong);
};
