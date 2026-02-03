
class GameConfig{   
public:
    // ==================================================
    // =============== ĐẤU SĨ (TANKER) ==================
    // ==================================================
    static constexpr long DAUSI_SATTHUONG = 60;

    static constexpr long long DAUSI_MAU_TOIDA = 1200;
    static constexpr long long DAUSI_MAU_KHOIDAU = 1200;

    static constexpr long DAUSI_NOI_NANG_TOIDA = 80;
    static constexpr long DAUSI_NOI_NANG_KHOIDAU = 80;

    static constexpr long DAUSI_GIAP = 40;
    static constexpr long DAUSI_TOCDO = 20;

    static constexpr int DAUSI_TAM_DICHUYEN = 3;
    static constexpr int DAUSI_DOCHINHXAC = 90;
    static constexpr int DAUSI_TYLENEDON = 5;
    static constexpr double DAUSI_TYLECHIMANG = 0.10; // 10%


    // ==================================================
    // =============== CUNG SĨ (MOBILE DPS) ==============
    // ==================================================
    static constexpr long CUNGSI_SATTHUONG = 45;

    static constexpr long long CUNGSI_MAU_TOIDA = 800;
    static constexpr long long CUNGSI_MAU_KHOIDAU = 800;

    static constexpr long CUNGSI_NOI_NANG_TOIDA = 120;
    static constexpr long CUNGSI_NOI_NANG_KHOIDAU = 120;

    static constexpr long CUNGSI_GIAP = 20;
    static constexpr long CUNGSI_TOCDO = 35;

    static constexpr int CUNGSI_TAM_DICHUYEN = 6;
    static constexpr int CUNGSI_DOCHINHXAC = 85;
    static constexpr int CUNGSI_TYLENEDON = 25;
    static constexpr double CUNGSI_TYLECHIMANG = 0.25; // 25%


    // ==================================================
    // =============== PHÁP SƯ (GLASS CANNON) ============
    // ==================================================
    static constexpr long PHAPSU_SATTHUONG = 80;

    static constexpr long long PHAPSU_MAU_TOIDA = 500;
    static constexpr long long PHAPSU_MAU_KHOIDAU = 500;

    static constexpr long PHAPSU_NOI_NANG_TOIDA = 400;
    static constexpr long PHAPSU_NOI_NANG_KHOIDAU = 400;

    static constexpr long PHAPSU_GIAP = 10;
    static constexpr long PHAPSU_TOCDO = 30;

    static constexpr int PHAPSU_TAM_DICHUYEN = 4;
    static constexpr int PHAPSU_DOCHINHXAC = 80;
    static constexpr int PHAPSU_TYLENEDON = 10;
    static constexpr double PHAPSU_TYLECHIMANG = 0.15; // 15%


// ||||||||||||kiếm|||||||||||||||
// Damage & Crit
static const long KIEM_SATTHUONG = 30;
static const double KIEM_CHIMANG = 0.05;
static const int KIEM_ACC_BONUS = 5;

// Range
static const int RANGE_MIN_KIEM = 1;
static const int RANGE_MAX_KIEM = 1;


// ||||||||||Đại Kiếm|||||||||||||
static const long DAIKIEM_SATTHUONG = 45;
static const double DAIKIEM_CHIMANG = 0.15;
static const int DAIKIEM_ACC_BONUS = -5;

static const int RANGE_MIN_DAIKIEM = 1;
static const int RANGE_MAX_DAIKIEM = 1;


// ||||||||||Rìu||||||||||||||||||
static const long RIU_SATTHUONG = 50;
static const double RIU_CHIMANG = 0.10;
static const int RIU_ACC_BONUS = -10;

static const int RANGE_MIN_RIU = 1;
static const int RANGE_MAX_RIU = 1;


//||||||||||Giáo||||||||||||||||||
static const long GIAO_SATTHUONG = 35;
static const double GIAO_CHIMANG = 0.05;
static const int GIAO_ACC_BONUS = 0;

static const int RANGE_MIN_GIAO = 1;
static const int RANGE_MAX_GIAO = 2;


//|||||||||||Cung Tên||||||||||||||
static const long CUNG_SATTHUONG = 25;
static const double CUNG_CHIMANG = 0.20;
static const int CUNG_ACC_BONUS = 10;

static const int RANGE_MIN_CUNG = 2;
static const int RANGE_MAX_CUNG = 5;


//||||||||||Gậy Phép|||||||||||||||
static const long GAYPHEP_SATTHUONG = 40;
static const double GAYPHEP_CHIMANG = 0.10;
static const int GAYPHEP_ACC_BONUS = 5;

static const int RANGE_MIN_GAYPHEP = 1;
static const int RANGE_MAX_GAYPHEP = 3;
static const int GAYPHEP_NOI_NANG = 15;

//||||||||||Quyền Trượng|||||||||||
static const long QUYENTRUONG_SATTHUONG = 55;
static const double QUYENTRUONG_CHIMANG = 0.30;
static const int QUYENTRUONG_ACC_BONUS = -5;

static const int RANGE_MIN_QUYENTRUONG = 2;
static const int RANGE_MAX_QUYENTRUONG = 4;
static const int QUYENTRUONG_NOI_NANG = 30;

// Kinh Nghiệm
static const int KinhNghiemCoBan = 100;
static const double HeSoLenKinhNghiem = 1.2;
};
