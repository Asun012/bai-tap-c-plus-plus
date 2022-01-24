#include "Thuvien_Vo Minh Nhat.h"

int main() {
	CHUYENBAY a[100];
	int n;
	int menu;
	do {
		cout << "\n 0: thoat chuong trinh!!";
		cout << "\n 1: nhap danh sach chuyen bay";
		cout << "\n 2:xuat danh sach chuyen bay:";
		cout << "\n 3: tim ma chuyen bay";
		cout << "\n 4: ngay co nhieu chuyen bay nhat:";
		cout << "\n 5: sap sep danh sach chuyen bay tang dan theo ngay bay";
		cout << endl;
		cin >> menu;
		switch (menu) {
		case 0: {
			break;
		}
		case 1: { cout << "nhap so luong ve:";
			cin >> n;
			cout << "nhap thong tin chuyen bay";
			nhapDSCB(a, n);
			break;
		}
		case 2: {
			cout << "xuat danh sach chuyen bay:";
			XuatDSCB(a, n);
		}
		case 3: {
			timMCB(a, n);
			break;
		}
		case 4: {
			timNgayCoNhieuChuyenBayNhat(a, n);
			break;
		}
		case 5: {
			sapXepTheoNgay(a, n);
			cout << "danh sach chuyen bay tang theo ngay";
			XuatDSCB(a, n);
			break;
		}
		}
	} while (menu != 0);
	system("pause");
	return 0;
}