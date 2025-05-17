#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

int Fraction::gcd(int a, int b) 
{
    if (b == 0)
    {
        return abs(a);
    }
    return gcd(b, a % b);
}

void Fraction::reduce() 
{
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

Fraction::Fraction(int num, int denom)
{
    numerator = num; 
    denominator = denom;
    reduce();
}

Fraction Fraction::input() 
{
    int numerator, denominator;
    std::cout << "Nhập tử số: ";
    cin >> numerator;
    cout << "Nhập mẫu số: ";
    cin >> denominator;
    if (denominator == 0) {
        cout << "Lỗi: Mẫu số không được bằng 0. Tự động đặt mẫu số thành 1." << endl;
        denominator = 1;
    }
    return Fraction(numerator, denominator);
}

void Fraction::displayFraction() 
{
    cout << numerator << "/" << denominator << endl;
}

void Fraction::displayDecimal() 
{
    cout << static_cast<double>(numerator) / denominator << endl;
}

Fraction Fraction::operator+(const Fraction& other) 
{
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::operator-(const Fraction& other)
{
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::operator*(const Fraction& other)
{
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::operator/(const Fraction& other)
{

    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return Fraction(num, denom);
}
