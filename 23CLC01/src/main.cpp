#include "thanhpho.h" 
#include "congtrinh.h"
#include "cudan.h"
#include "player.h"

int main()
{
    //Khoi tao trang trai
    Player player(15, 0, 1);//
    ThanhPho city(5, 6);
    // Khoi tao cong trinh
    CongTrinh *ct1 = new CongTrinh("bitexco", "cong trinh thuong mai", 100, 80, 1, 1000, 5);
    CongTrinh *ct2 = new CongTrinh("landmark", "cong trinh dan dung", 90, 90, 1, 100, 10);
    // CongTrinh ct3; // thu nhap ten cong trinh khong hop le
    // cin >> ct3; 
    // Khoi tao cu dan
    CuDan cd1("le thanh tam", 20, "ban ve so", 0);
    CuDan cd2("nguyen hoang phi hung", 19, "hoc sinh", 10);
    // xay cong trinh
    ct1->xayDungCongTrinh(city, player, 0 , 0);
    ct2->xayDungCongTrinh(city, player, 0, 1);
    // nang cap cong trinh
    ct1->nangcapCongTrinh(player);
    ct2->nangcapCongTrinh(player);
    // them cu dan
    cd1.vaoCongTrinh(ct1);
    cd2.vaoCongTrinh(ct2);
    ct2->giamThoiGian(5);
    // // phuong thuc thu hoach
    ct1->phuongthucThuHoach(city, player);
    ct2->phuongthucThuHoach(city, player);
    // Xuat ra thong tin nguoi choi
    player.displayNguoiChoi();
    // cout << endl; 
    ct1->phahuyCongTrinh(city, player);
    player.displayNguoiChoi();

    return 0; 
}