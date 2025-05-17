#include"class.h"

using namespace std;

int main() {
    // Kiểm thử LyNuocCoSo
    cout << "=== Kiểm thử lớp LyNuocCoSo ===" << endl;
    LyNuocCoSo ly1("Hong Tra", "Dao", 300, 50, 20, 100, 50000);
    cout << ly1; // Xuất thông tin ly nước
    cout << "Tên ly nước: " << ly1.getName() << endl;

    // Kiểm thử LyNuocTuyBien
    cout << "\n=== Kiểm thử lớp LyNuocTuyBien ===" << endl;
    
    // Khởi tạo một vector rỗng cho toppingList
    vector<Topping*> emptyToppings;
    LyNuocTuyBien lyTuBien(ly1, 'M', 100, 150, emptyToppings, 1000);

    cout << lyTuBien; // Xuất thông tin ly nước tùy biến
    cout << "Giá ly nước tùy biến: " << lyTuBien.getPrice() << endl;

    // Nhập thông tin cho LyNuocTuyBien
    cout << "\nNhập thông tin cho LyNuocTuyBien:" << endl;
    cin >> lyTuBien; // Nhập thông tin từ bàn phím
    cout << "Thông tin ly nước tùy biến sau khi nhập:" << endl;
    cout << lyTuBien;

    // Kiểm thử DonHang
    cout << "\n=== Kiểm thử lớp DonHang ===" << endl;
    DonHang donHang;
    donHang.addLy(lyTuBien); // Thêm ly nước tùy biến vào đơn hàng
    cout << "Tổng giá đơn hàng: " << donHang.total() << endl;

    // Thêm một ly nước khác
    LyNuocTuyBien lyTuBien2(ly1, 'L', 50, 0, emptyToppings, 2000);
    donHang.addLy(lyTuBien2);
    cout << "Tổng giá đơn hàng sau khi thêm ly thứ hai: " << donHang.total() << endl;

    // Xóa ly nước
    donHang.delLy(lyTuBien.getName());
    cout << "Tổng giá đơn hàng sau khi xóa: " << donHang.total() << endl;

    // Tính giá sau khuyến mãi
    float discountPrice = donHang - 0.2;
    cout << "Giá tiền sau khuyến mãi: " << discountPrice << endl;

    return 0;
}