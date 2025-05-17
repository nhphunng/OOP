#include "bai1.h"



int main() {
	vector<NhanSu*> KHTN;
	int choice, sum = 0;

	while (1) {
		cout << "Chuc danh (1: Giang vien; 2: Tro giang; 3: Nghien cuu vien; 4: Chuyen vien; 5: Thuc Tap Sinh; 0: Thoat) " << endl;
		cout << "Vui long nhap lua chon cua ban (bang so): ";
		cin >> choice;
		cin.ignore();
		if (choice == 0) {
			cout << LINE_BREAK;
			break;
		}

		switch (choice)
		{
			// 1: Giang vien; 2: Tro giang; 3: Nghien cuu vien; 4: Chuyen vien; 0: close
		case 1:
		{
			GiangVien* tmp = new GiangVien();
			tmp->nhapThongTinNhanSu();
			KHTN.push_back(tmp);
			sum += tmp->tinhLuong();
			cout << LINE_BREAK;
			break;
		}
		case 2:
		{
			TroGiang* tmp = new TroGiang();
			tmp->nhapThongTinNhanSu();
			KHTN.push_back(tmp);
			sum += tmp->tinhLuong();
			cout << LINE_BREAK;
			break;
		}
		case 3:
		{
			NghienCuuVien* tmp = new NghienCuuVien();
			tmp->nhapThongTinNhanSu();
			KHTN.push_back(tmp);
			sum += tmp->tinhLuong();
			cout << LINE_BREAK;
			break;
		}
		case 4:
		{
			ChuyenVien* tmp = new ChuyenVien();
			tmp->nhapThongTinNhanSu();
			KHTN.push_back(tmp);
			sum += tmp->tinhLuong();
			cout << LINE_BREAK;
			break;
		}
		case 5:
		{
			ThucTapSinh* tmp = new ThucTapSinh();
			tmp->nhapThongTinNhanSu();
			KHTN.push_back(tmp);
			sum += tmp->tinhLuong();
			cout << LINE_BREAK;
			break;
		}
		case 0:
		{
			break;
		}
		default:
			break;
		}
	}

	//Xuat tong tien luong
	cout << endl << "------------------------Tong tien luong can tra: " << sum << endl << endl;
	
	//In danh sach sinh vien
	cout << "------------------------------------Danh sach nhan su: " << endl;
	for (auto it : KHTN) {
		it->xuatThongTinNhanSu();
		cout << "Luong: " << it->tinhLuong() << endl;
	}

	//In ra luong nhan vien co luong cao nhat
	int target = 0;
	for (int i = 1; i < KHTN.size(); i++) {
		if (KHTN[i]->tinhLuong() > KHTN[target]->tinhLuong()) target = i;
	}
	cout << "--------------------------------Nhan vien co luong cao nhat" << endl;
	KHTN[target]->xuatThongTinNhanSu();
	cout << "Tien luong: " << KHTN[target]->tinhLuong();

	//huy
	for (auto it : KHTN) delete it;
	KHTN.clear();
	return 0;
}