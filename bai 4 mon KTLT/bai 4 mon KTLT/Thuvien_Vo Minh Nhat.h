#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


struct chuyenbay {
	char ma[5];
	char noidi[20];
	char noiden[20];
	int gio, phut;
	int ngay, thang, nam;
};
typedef struct chuyenbay CHUYENBAY;

void nhapChuyenBay(CHUYENBAY& x);
void xuatChuyenBay(CHUYENBAY x);
void nhapDSCB(CHUYENBAY a[], int n);
void XuatDSCB(CHUYENBAY a[], int n);
void timMCB(CHUYENBAY a[],int n);
void timNgayCoNhieuChuyenBayNhat(CHUYENBAY a[], int n);
void hoanVi(chuyenbay& x, chuyenbay& y);
void sapXepTheoNgay(CHUYENBAY a[],int n);