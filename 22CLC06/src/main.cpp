#include "class.h"

int main() {
    // Khởi tạo trang trại và người chơi
    TrangTrai farm;
    Player p1;

    // Tạo các cây trồng
    CayTrong cay1("Cay Xoai", "cay an qua", 10, 10000, 20, 60);
    cay1.PTTC(0, 0); // Đặt vị trí cho cây 1

    CayTrong cay2("Cay Man", "cay an qua", 20, 10000, 20, 70);
    cay2.PTTC(0, 1); // Đặt vị trí cho cây 2

    CayTrong cay3("Cay Cao Su", "cay cong nghiep", 50, 100000, 20, 90);
    cay3.PTTC(1, 0); // Đặt vị trí cho cây 3

    // Kiểm tra các chức năng của cây trồng
    cout << "Thông tin Cây 1:\n" << cay1;
    cout << "Thông tin Cây 2:\n" << cay2;
    cout << "Thông tin Cây 3:\n" << cay3;

    // Kiểm tra giamThoiGian
    cay1.giamThoiGian();
    cout << "Thời gian thu hoạch của Cây 1 sau khi giảm: " << cay1.getTGTH() << endl;

    // Kiểm tra chức năng của Player
    cout << "Cấp độ của người chơi: " << p1.getLevel() << endl;
    p1.PTTN(&cay1); // Giảm thời gian thu hoạch cây 1
    cout << "Thời gian thu hoạch của Cây 1 sau khi người chơi tác động: " << cay1.getTGTH() << endl;

    // Kiểm tra xóa vị trí cây
    farm.themViTri(0, 0);
    farm.xoaViTri(0, 0); // Xóa vị trí của cây 1
    farm.themViTri(0, 1);
    farm.xoaViTri(0, 1); // Xóa vị trí của cây 2

    // Kiểm tra danh sách cây trồng
    DSCayTrong dsCay;
    dsCay.addCayvaoDanhsach(&cay1);
    dsCay.addCayvaoDanhsach(&cay2);
    dsCay.addCayvaoDanhsach(&cay3);
    dsCay.capNhatThoiGian(); // Cập nhật thời gian cho tất cả cây trong danh sách

    // Xóa cây khỏi danh sách
    dsCay.xoaCaykhoiDanhsach(&cay1); // Xóa cây 1 khỏi danh sách

    return 0;
}