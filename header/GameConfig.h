#pragma once

class GameConfig {
public:
    // ==========================================
    // 1. CHỈ SỐ NHÂN VẬT (Cập nhật cho TBS)
    // ==========================================
    
    // --- ĐẤU SĨ (Tanker - Đi chậm, khó né, nhưng chính xác cao) ---
    static const int DAUSI_HP = 1200;       
    static const int DAUSI_MP = 50;         
    static const int DAUSI_GIAP = 40;       
    static const int DAUSI_MOV = 3;         // Chỉ đi được 3 ô (Giáp nặng)
    static const int DAUSI_ACC = 90;        // Chính xác cơ bản 90%
    static const int DAUSI_EVA = 5;         // Né tránh thấp (5%)

    // --- CUNG THỦ (Hit & Run - Đi xa, né tốt) ---
    static const int CUNGSI_HP = 700;
    static const int CUNGSI_MP = 100;
    static const int CUNGSI_GIAP = 15;
    static const int CUNGSI_MOV = 6;        // MỚI: Đi được 6 ô (Cơ động)
    static const int CUNGSI_ACC = 85;       // Cung bắn xa khó trúng hơn kiếm
    static const int CUNGSI_EVA = 25;       // Né tránh cao (25%)

    // --- PHÁP SƯ (Glass Cannon - Đi trung bình) ---
    static const int PHAPSU_HP = 450;
    static const int PHAPSU_MP = 500;       
    static const int PHAPSU_GIAP = 5;       
    static const int PHAPSU_MOV = 4;        // Đi được 4 ô
    static const int PHAPSU_ACC = 80;       // Phép thuật có thể trượt
    static const int PHAPSU_EVA = 10;

    // ==========================================
    // 2. TẦM ĐÁNH VŨ KHÍ (RANGE)
    // ==========================================
    // Range Min-Max: 1-1 là đánh cận chiến, 2-3 là bắn xa
    
    // Đại Kiếm: Cận chiến
    static const int RANGE_MIN_KIEM = 1;
    static const int RANGE_MAX_KIEM = 1;

    // Giáo: Đánh xuyên 2 ô
    static const int RANGE_MIN_GIAO = 1;
    static const int RANGE_MAX_GIAO = 2;

    // Cung: Không bắn được gần (Min = 2)
    static const int RANGE_MIN_CUNG = 2;
    static const int RANGE_MAX_CUNG = 4;

    // Phép: Tầm xa đa dạng
    static const int RANGE_MIN_GAYPHEP = 1;
    static const int RANGE_MAX_GAYPHEP = 3;

    // cấp độ
    static constexpr int EXP_BASE = 100; // Mốc EXP cơ bản
    static constexpr float EXP_MULTIPLIER = 1.2f; // Hệ số khó dần (tăng 20% mỗi cấp)
};