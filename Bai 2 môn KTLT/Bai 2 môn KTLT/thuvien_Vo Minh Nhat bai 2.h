//bai 2: Kiểm tra ma trận có đối xứng qua đường chéo phụ hay không ?
#include<iostream>
using namespace std;
const int MAX = 50;
struct MTVUONG {
	int list[MAX][MAX];
	int n;
};
void nhapMang(MTVUONG& a);
void xuatMang(MTVUONG a);
int kiemtradoixungquaduongcheophu(MTVUONG a);