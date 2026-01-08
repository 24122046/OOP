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
    public:
        NhanVat(string,long, long long, long,VuKhi*,thucuoi*,TuiDo*){};
        NhanVat(const nhanvat &nhanvatkhac);
        NhanVat operator=(const NhanVat&);
        virtual ~NhanVat();
        void hoimau();
        void trangbivukhi(VuKhi* vukhi);
        void trangbithucuoi(ThuCuoi* thucuoi);
        virtual long long tancong(nhanvat* muctieu);
        virtual long long bitancong();
};

class DauSi:public NhanVat{};
class PhapSu:public NhanVat{};
class Cungsi:public NhanVat{};