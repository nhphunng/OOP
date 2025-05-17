#include "class.h"

int main()
{
    //Khoi tao trang trai
    TrangTrai farm(5, 6);
    // Khoi tao nguoi choi
    Player nguoichoi(15, 0, 5);
    //Khoi tao cay trong
    CayTrong xoai("xoai", "cay an qua", 10, 5, 40, 5);
    CayTrong caosu("caosu", "cay cong nghiep", 50, 4, 100, 10);
    CayTrong cachua("cachua", "rau", 50, 2, 1, 1); // cay khong hop le
    // tuoi cay 
    xoai.PTTC(farm, nguoichoi, 0, 0);
    caosu.PTTC(farm, nguoichoi, 0, 1);
    cachua.PTTC(farm, nguoichoi, 6, 6);
    // // thu hoach cay trong
    xoai.PTTN(nguoichoi);
    xoai.PTTH(farm, nguoichoi);
    caosu.PTTH(farm, nguoichoi); // cay khong the thu hoach
    // // khoi tao vat nuoi 
    VatNuoi heo("heo", 10, 1, 2);
    VatNuoi ga("ga", 10, 1, 3);
    // // phuong thuc cho vat nuoi an 
    heo.phuongthucNuoi(farm, nguoichoi, 0, 2);
    ga.phuongthucNuoi(farm, nguoichoi, 1, 4);
    heo.phuongthucChoAn(nguoichoi);
    ga.phuongthucChoAn(nguoichoi);
    // // phuong thuc thu hoach vat nuoi
    heo.phuongthucThuHoach(farm, nguoichoi);
    nguoichoi.displayTaiNguyen();
    return 0; 
}