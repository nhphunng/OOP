#include "class.h"
#include <iostream>

int main() {
    QuanLy quanLy;

    // Tạo danh sách nhân viên
    NhanVien nv1(1, "Nguyen Van A", 3.5);
    NhanVien nv2(4, "Tran Thi B", 2.8);
    NhanVien nv3(3, "Le Van C", 4.0);

    // Thêm nhân viên vào danh sách
    quanLy.addNhanVien(nv1);
    quanLy.addNhanVien(nv2);
    quanLy.addNhanVien(nv3);

    // Hiển thị danh sách ban đầu
    std::cout << "Danh sách nhân viên ban đầu:\n";
    quanLy.displayList();

    // Sắp xếp danh sách nhân viên theo mã số
    quanLy.sortList();
    std::cout << "\nDanh sách nhân viên sau khi sắp xếp:\n";
    quanLy.displayList();

    // Xóa nhân viên theo mã số
    quanLy.delNhanVien(4);
    std::cout << "\nDanh sách nhân viên sau khi xóa mã số 4:\n";
    quanLy.displayList();

    return 0;
}
