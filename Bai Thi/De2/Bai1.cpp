#include <iostream>
#include "PhanSo.h"
#include <cstdlib>
using namespace std;



int main() {
    PhanSo a(1, 3), c;
    int b = 8;
    c = a + b;
    std::cout << "c = " << a << " + " << b << " = " << c << std::endl;
    std::cout << "++c: ";
    std::cout << "c = " << ++c << std::endl;
    std::cout << "a = " << a << " + " << c << std::endl;
    a += c;
    std::cout << "a = " << a << std::endl;
    b = a;
    std::cout << "b = " << b << std::endl;

    return 0;
}
