#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>
using namespace std;
class PhanSo {
private:
    int tu;
    int mau;

public:

    PhanSo();
    PhanSo(int tu, int mau);

    PhanSo operator+(const PhanSo& ps) const;
    PhanSo operator+=(const PhanSo& ps);
    PhanSo operator+(int iNum) const;
    PhanSo operator++(); 
    operator int() const;
    friend ostream& operator<<(ostream& os, const PhanSo& ps);

    ~PhanSo();
};

#endif
