#include "HeThongCapDo.h"
class HeThongChiSo{
    protected:
        long satthuongcoban;
        long giapcoban;
        long tocdocoban;
        int tamdichuyen;
        double dochinhxaccoban;
        double tylenedoncoban;
        double tylechimangcoban;
    public:
        long laysasatthuong();
        long laygiap();
        long laytocdo();
        int laytamdichuyen();
        double laydochinhxac();
        double laytylenedon();
        double laytylechimang();
};