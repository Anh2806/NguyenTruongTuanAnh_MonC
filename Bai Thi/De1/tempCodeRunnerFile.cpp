#include <iostream>
using namespace std;

class MayLoc {
protected:
    float m_tgian;

public:
    float getThoiGian() {
        return this->m_tgian;
    }
};

class MayXucTac : public MayLoc {
private:
    int _luongHoaChat;
    float _congSuatLoc;

public:
    void nhap() {
        float thoiGian = 0;
        cout << "Nhap thoi gian hoat dong:";
        cin >> thoiGian;
        this->setTgian(thoiGian);
        cout << "Nhap Luong hoa chat:";
        cin >> this->_luongHoaChat;
        cout << "Nhap cong suat loc cua may:";
        cin >> this->_congSuatLoc;
    }

    void setTgian(float t) {
        this->m_tgian = t;
    }

    float CongSuatThucTe() {
        if (this->getThoiGian() >= 10) {
            return this->_congSuatLoc * (this->_luongHoaChat / 100) / (this->getThoiGian() / 10);
        } else {
            return this->_congSuatLoc * (this->_luongHoaChat / 100);
        }
    }

    static long DON_GIA_HOA_CHAT;
    static long DON_GIA_THUE;

    long tinhChoPhiThueMoiMay() {
        return DON_GIA_THUE * this->getThoiGian();
    }

    long tinhChiPhi() {
        return tinhChoPhiThueMoiMay() + this->_luongHoaChat * 10000;
    }

    float tinhLuongNuoc() {
        return this->getThoiGian() * this->CongSuatThucTe();
    }
};

// Định nghĩa hằng số DON_GIA_HOA_CHAT, DON_GIA_THUE bên ngoài lớp
long MayXucTac::DON_GIA_HOA_CHAT = 10000;
long MayXucTac::DON_GIA_THUE = 80000;

int main() {
    cout << "Don gia hoa chat: " << MayXucTac::DON_GIA_HOA_CHAT << endl;
    MayXucTac m;
    m.nhap();
    cout << "Chi phi su dung may:" << m.tinhChiPhi() << endl;
    cout << "Luong nuoc loc duoc: " << m.tinhLuongNuoc() << endl;

    return 0;
}
