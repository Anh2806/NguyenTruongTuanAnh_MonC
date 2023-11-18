#include "PhanSo.h"

// Implementations of PhanSo class methods

PhanSo::PhanSo() {
    tu = 0;
    mau = 1;
}

PhanSo::PhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = (mau != 0) ? mau : 1;
}

PhanSo PhanSo::operator+(const PhanSo& ps) const {
    PhanSo result(tu * ps.mau + mau * ps.tu, mau * ps.mau);
    return result;
}

PhanSo PhanSo::operator+=(const PhanSo& ps) {
    tu = tu * ps.mau + mau * ps.tu;
    mau *= ps.mau;
    return *this;
}

PhanSo PhanSo::operator+(int iNum) const {
    PhanSo result(tu + iNum * mau, mau);
    return result;
}

PhanSo PhanSo::operator++() {
    tu += mau;
    return *this;
}

PhanSo::operator int() const {
    return tu / mau;
}

std::ostream& operator<<(std::ostream& os, const PhanSo& ps) {
    os << ps.tu << "/" << ps.mau;
    return os;
}

PhanSo::~PhanSo() {
    tu = 0;
    mau = 1;
}
