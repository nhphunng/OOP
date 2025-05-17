#include "class.h"

int main()
{
    MangDHTT mdhtt;
    /// 1.0 điểm: không lỗi biên dịch
    mdhtt.ThemDHTT(new DongHoTheThao(11, 101,
    -222));
    mdhtt.ThemDHTT(new DongHoTheThao("09:11:78"));
    mdhtt.ThemDHTT(new DongHoTheThao(11011));
    mdhtt.ThemDHTT(new DongHoTheThao);
    /// 1.0 điểm: khởi tạo object hợp lý
    /// xuất ra dạng: 'x:x:x' ; vd: '2:8:75'
    /// phân tách các DongHoTheThao bằng "; "
    /// 1.0 điểm: xuất định dạng: mm/ss/pp
    cout << "MangDHTT: " << mdhtt << endl;
    /// 1.0 điểm
    delete mdhtt[3];
    mdhtt[3] = new DongHoTheThao(1234567);
    /// 1.5 điểm (lưu ý toán tử ++, +int áp dụng lên giây)
    mdhtt.ThemDHTT(*mdhtt[0] + *mdhtt[1]);
    mdhtt.ThemDHTT(*mdhtt[0] + 1111);
    mdhtt.ThemDHTT(1111 + *mdhtt[0]);
    /// 1.5 điểm
    mdhtt.ThemDHTT(11011 + ((*mdhtt[1])++ + ++(*mdhtt[2])));
    cout << "MangDHTT: " << mdhtt << endl;
    /// 2.0 điểm: xuất DHTT lớn nhất trong các thời gian đã tạo
    /// và tính toán ở trên (lưu ý operator)
    cout << "DHTT lon nhat: " << *mdhtt.DHTTLonNhat() << endl;
    /// 1.0 điểm: các giá trị luôn xuất đồng hồ dạng 2 chữ số và
    /// thêm thông tin Giờ (tức là có thêm giá trị giờ thì phút
    /// bị giới hạn tối đa 59)
    /// vd 63:8:97 thì xuất là: 01:04:08:97
    system("pause");
    return 0;
}