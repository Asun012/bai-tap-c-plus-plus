//Bai 1:Viết hàm tìm số hoàn thiện lớn nhất trong mảng một chiều các số nguyên.Nếu mảng không có số hoàn thiện thì trả về giá trị - 1.
#include<iostream>
using namespace std;

void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int soHoanThienDau(int a[], int n);
int timSoHoanThienLonNhat(int a[], int n, int soHoanThienDau);