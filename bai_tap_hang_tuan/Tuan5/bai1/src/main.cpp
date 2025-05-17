#include "class.h"

int main() {
    // Tạo các đối tượng PhanSo
    PhanSo ps1(1, 2); // 1/2
    PhanSo ps2(3, 4); // 3/4

    // In các phân số
    cout << "PhanSo 1: " << ps1 << endl;
    cout << "PhanSo 2: " << ps2 << endl;

    // Phép cộng
    PhanSo ps3 = ps1 + ps2;
    cout << "Tong: " << ps3 << endl;

    // Phép trừ
    PhanSo ps4 = ps1 - ps2;
    cout << "Hieu: " << ps4 << endl;

    // Phép nhân
    PhanSo ps5 = ps1 * ps2;
    cout << "Tich: " << ps5 << endl;

    // Phép chia
    PhanSo ps6 = ps1 / ps2;
    cout << "Thuong: " << ps6 << endl;

    // Kiểm tra các phép so sánh
    cout << "ps1 == ps2: " << (ps1 == ps2) << endl;
    cout << "ps1 < ps2: " << (ps1 < ps2) << endl;
    cout << "ps1 > ps2: " << (ps1 > ps2) << endl;

    // Tăng phân số
    ps1++;
    cout << "ps1 sau khi tang: " << ps1 << endl;
    ++ps1; 
    cout << "ps1 sau khi tang: " << ps1 << endl;
    // Kiểm tra phép gán
    PhanSo ps7 = ps2;
    cout << "ps7 (sao chep ps2): " << ps7 << endl;

    // Nhập phân số từ người dùng
    PhanSo ps8;
    cout << "Nhap phan so (tuso mauso): ";
    cin >> ps8;
    cout << "Phan so vua nhap: " << ps8 << endl;
 
    PhanSo ps9 = ps2.operator+(1); 
    cout << ps9 << endl; 
    PhanSo ps10 = 1 +  ps2; 
    cout << ps10 << endl; 
    return 0;
}