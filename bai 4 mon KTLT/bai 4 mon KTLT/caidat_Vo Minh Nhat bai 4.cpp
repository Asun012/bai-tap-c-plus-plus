#include "Thuvien_Vo Minh Nhat.h"

void nhapChuyenBay(CHUYENBAY& x) {
	cin.ignore();
	cout << "Ma Chuyen Bay:";
	cin.getline(x.ma, 5);
	cout << "noi di:";
	cin.getline(x.noidi, 20);
	cout << "noi den:";
	cin.getline(x.noiden, 20);
	cout << "gio:";
	cin >> x.gio;
	cout << "phut:";
	cin >> x.phut;
	cout << "ngay:";
	cin >> x.ngay;
	cout << "thang:";
	cin >> x.thang;
	cout << "nam:";
	cin >> x.nam;

}
void xuatChuyenBay(CHUYENBAY x) {
	cout << "Ma Chuyen Bay" << x.ma << endl;
	cout << "Noi di:" << x.noidi << endl;
	cout << "Noi den:" << x.noiden << endl;
	cout << "Thoi gian" << x.gio << "gio" << x.phut << "phut" << endl;
	cout << "Ngay Bay:" << x.ngay << "ngay" << x.thang << "thang" << x.nam << "nam" << endl;

}
void nhapDSCB(CHUYENBAY a[], int n) {
	for (int i = 0;i < n;i++)
	{
		cout << "\n\n\t\tChuyen Bay Thu:" << i + 1 << endl;
		nhapChuyenBay(a[i]);
	}
}
void XuatDSCB(CHUYENBAY a[], int n) {
	for (int i = 0;i < n;i++)
	{
		cout << "\n\n\t\t Thong Tin Chuyen Bay Thu:" << i + 1 << endl;
		xuatChuyenBay(a[i]);
	}
}
void timMCB(CHUYENBAY a[], int n) {
	char ma[5];
	cout << "nhap ma chuyen bay can tim la:";
	cin.ignore();
	cin.getline(ma, 5);
	for (int i = 0;i < n;i++)
	{
		if (strcmp(ma, a[i].ma) == 0)
		{
			cout << "chuyen bay tim thay:";
			xuatChuyenBay(a[i]);
		}
	}
}

void timNgayCoNhieuChuyenBayNhat(CHUYENBAY a[], int n) {
	int MAX = a[0].ngay;
	for (int i = 0;i < n;i++) {
		if (MAX < a[i].ngay);
		MAX = a[i].ngay;
		cout << "ngay co nhieu chuyen bay nhat:";
		xuatChuyenBay(a[i]);
	}
}
void hoanVi(chuyenbay& x, chuyenbay& y) {
	CHUYENBAY tg;
	tg = x;
	x = y;
	y = tg;
}
void sapXepTheoNgay(CHUYENBAY a[], int n) {
	for (int i = 0;i < n - 1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i].ngay > a[j].ngay) {
				hoanVi(a[i],a[j]);
			}
		}
	}
}