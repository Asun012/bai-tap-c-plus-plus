#include"thuvien_Vo MInh Nhat Bai 1.h"

int main() {
	int a[100];
	int n;
	do {
		cout << "\n nhap so luong phan tu:";
		cin >> n;
	} while (n < 0 || n >> 100);
	cout << "\n\t nhap mang \n";
	nhapMang(a, n);
	cout << "\n\t xuat mang \n";
	xuatMang(a, n);
	int vitrihoanthiendau = soHoanThienDau(a, n);
	if (vitrihoanthiendau == -1)
		cout << "\n mang khong ton tai so hoan thien ";
	else
		cout << "\n vi tri hoan thien dau tien la:" <<vitrihoanthiendau;
	int hoanThienMax = timSoHoanThienLonNhat(a, n, vitrihoanthiendau);
	cout << "\n so hoan thien lon nhat:" << hoanThienMax;
	system("pause");
	return 0;
}