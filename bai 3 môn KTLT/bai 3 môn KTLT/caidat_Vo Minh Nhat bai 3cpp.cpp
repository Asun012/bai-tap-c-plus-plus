#include "thuvien_Vo Minh Nhat bai 3.h"

void xoakhoangtrangdauvacuoichuoi(string& str) {
	while (str[0] == ' ')
	{
		str.erase(str.begin() + 0);
	}
	while (str.length() - 1 == ' ')
	{
		str.erase(str.begin() + str.length() - 1);
	}
}
void xoakhoangchanduthuaogiuacactu(string& str) {
	for (int i = 0;i < str.length();i++) {
		if (str[i] == ' ' && str[i + 1] == ' ') {
			str.erase(str.begin() + i);
			i--;
		}
	}
}