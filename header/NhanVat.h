#pragma once
#include <string>
#include "TrangBi.h"
#include "ThuCuoi.h"
#include "VuKhi.h"
#include "TuiDo.h"
#include "HeThongChiSo.h"
#include "HeThongCapDo.h"
#include "Unit.h"
class NhanVat:public Unit{
    protected:
        HeThongCapDo bangcapdo;
        HeThongChiSo bangchiso;
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

        int nhankinhnghiem(long long);

        void gantrangbi(TrangBi*);
        void thaotrangbi();

        virtual long long tancong(NhanVat* muctieu);
        virtual long long bitancong(long long );
};
