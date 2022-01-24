#include "thuvien_Vo Minh Nhat bai 3.h"

int main() {
	string str;
	cout << "\n nhap chuoi:";
	getline(cin, str);
	cout << "\n chuoi nhan duoc:" << str;
	cout << "\n do dai chuoi:" << str.length();

//	xoakhoangtrangdauvacuoichuoi(str);
	xoakhoangchanduthuaogiuacactu(str);
	cout << "\n chuoi da xu ly:" << str;
	system("pause");
	return 0;
}