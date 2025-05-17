#include "hero.h"

int main()
{
    // Tạo đối tượng Hero
    Hero hero;

    // Nhập thông tin hero
    cout << "Nhap thong tin cho hero:\n";
    hero.input();

    // Xuất thông tin hero
    cout << "\nThong tin hero:\n";
    hero.output();

    // Hiển thị các kỹ năng có thể sử dụng
    //cout << "\nCac ky nang hero co the su dung:\n";
    hero.displayAvailableSkills();

    // Xóa n kỹ năng (ví dụ: xóa 1 kỹ năng)
    unsigned int n;
    cout << "\nNhap so luong ky nang muon xoa: ";
    cin >> n;
    hero.delNSkills(n);

    // Xuất thông tin hero sau khi xóa kỹ năng
    cout << "\nThong tin hero sau khi xoa ky nang:\n";
    hero.output();

    return 0;
}