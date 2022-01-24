#include"thuvien_Vo MInh Nhat Bai 1.h"

void nhapMang(int a[], int n) {
	for (int i = 0;i < n;i++) {
		cout << "\n nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0;i < n;i++)
		cout << " ";
}
bool kiemTraSoHoanThien(int n) {
	int tong = 0;
	for (int i = 1;i < n;i++) 
		if (n % i == 0)
			tong = tong + i;
		if (tong == n)
			return 1;
		return 0;
}
int soHoanThienDau(int a[], int n) {
	for (int i = 0;i < n;i++)
		if (kiemTraSoHoanThien(a[i]) == 1)
			return i;
	return -1;
}
int timSoHoanThienLonNhat(int a[], int n, int soHoanThienDau) {
	int hoanThienMax = a[soHoanThienDau];
	for (int i = soHoanThienDau + 1;i < n;i++)
	{
		if (kiemTraSoHoanThien(a[i]) == 1 && a[1] > hoanThienMax) {
			hoanThienMax = a[i];
		}
	}
	return hoanThienMax;
}