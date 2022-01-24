#include"thuvien_Vo Minh Nhat bai 2.h"

void nhapMang(MTVUONG& a) {
	cout << "nhap cap cua ma tran:";
	cin >> a.n;
	for(int i=0;i<a.n;i++)
		for (int j = 0;j < a.n;j++)
		{
			cout << "a[" << i << "],[" << j << "]=";
			cin >> a.list[i][j];
		}
}
void xuatMang(MTVUONG a) {
	cout << "\n ma tran vua nhap:";
		for (int i = 0;i < a.n;i++) {
			cout << endl;
			for (int j = 0;j < a.n;j++)
				cout << a.list[i][j] << "\t";
		}
}
int kiemtradoixungquaduongcheophu(MTVUONG a) {
	for (int i = 0;i < a.n;i++) {
		for (int j = 0;j < a.n;j++) {
			if (a.list[i][j] != a.list[a.n - 1 - j][a.n - 1 - i]) {
				return 0;
			}
		}
	}
	return 1;
}