#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    // Nhập hai phân số
    cout << "Nhập phân số thứ nhất:" << endl;
    Fraction f1 = Fraction::input();
    cout << "Nhập phân số thứ hai:" << endl;
    Fraction f2 = Fraction::input();

    // Cộng phân số
    Fraction result = f1 + f2;
    cout << "Kết quả phép cộng: ";
    result.displayFraction();
    cout << "Dưới dạng thập phân: ";
    result.displayDecimal();

    // Trừ phân số
    result = f1 - f2;
    cout << "Kết quả phép trừ: ";
    result.displayFraction();
    cout << "Dưới dạng thập phân: ";
    result.displayDecimal();

    // Nhân phân số
    result = f1 * f2;
    cout << "Kết quả phép nhân: ";
    result.displayFraction();
    cout << "Dưới dạng thập phân: ";
    result.displayDecimal();

    // Chia phân số
    result = f1 / f2;
    cout << "Kết quả phép chia: ";
    result.displayFraction();
    cout << "Dưới dạng thập phân: ";
    result.displayDecimal();

    return 0;
}
