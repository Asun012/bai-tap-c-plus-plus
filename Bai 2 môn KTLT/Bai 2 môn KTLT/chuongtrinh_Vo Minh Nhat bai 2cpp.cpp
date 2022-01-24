#include"thuvien_Vo Minh Nhat bai 2.h"

int main() {
	MTVUONG a;
	nhapMang(a);
	xuatMang(a);
	if (kiemtradoixungquaduongcheophu(a) == 1)
		cout << " mang doi xung qua duong cheo phu :";
	else
		cout << "mang khong doi xung qua duong cheo phu:";
	system("pause");
	return 0;
}