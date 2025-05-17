#include "class.h"

int main()
{
    // • Tạo topping Trân châu trắng giá 5.000đ
    Topping* tranchauTrang = new Topping("tran chau trang", 5000);
    // • Tạo topping Bánh Flan giá 10.000đ.
    Topping* banhFlan = new Topping("banh flan", 10000);
    // • Tạo thức uống Trà sữa với giá cơ bản là 20.000đ, size L.
    DoUong* traSua = new DoUong("trasua", 20000, 'L');
    // • Thêm topping Trân châu trắng và Bánh Flan cho thức uống Trà sữa ở trên.
    traSua->themTopping(tranchauTrang);
    traSua->themTopping(banhFlan);
    // • Tạo thức uống Trà đào, giá cơ bản là 17.000đ, size M.
    DoUong *traDao = new DoUong("tradao", 17000, 'M');
    // • Thêm topping Trân châu trắng cho Trà đào.
    traDao->themTopping(tranchauTrang);
    // • Tạo Quán tên Minh, ở TP HCM.
    Quan Minh("Minh", "Thanh pho Ho Chi Minh");
    // • Thêm 2 đối tượng thức uống Trà sữa và Trà đào vào menu quán Minh (TP HCM).
    Minh.themDoUong(traSua);
    Minh.themDoUong(traDao);
    // • In thông tin quán Minh (TP HCM) và menu
    Minh.displayThongTinQuan();
    // • Tạo Quán Minh 2 (Hà Nội).
    Quan Minh2("Minh 2", "Ha Noi");
    // • Copy menu từ Quán Minh (TP HCM) sang Minh 2 (Hà Nội) bằng toán tử =
    Minh2 = Minh; 
    // • In thông tin quán Minh2 (Hà Nội) và menu
    Minh2.displayThongTinQuan();
    // • Tạo thức uống Trà sữa ở trên bán kèm với Ly Cầu Vồng có giá cộng thêm là 3.000đ
    LyLuuNiem ly("ly cau vong", 3000, traSua);
    // • In giá thức uống vừa tạo ra
    ly.displayLyLuuNiem();
    return 0; 
}