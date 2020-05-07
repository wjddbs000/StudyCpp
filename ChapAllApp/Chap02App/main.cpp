#include <stdio.h>

//class Human {
//public :
//	char name[12];
//	int age;
//
//	void intro() {
//		printf("이름 %s, 나이 %d\n", name, age);
//	}
//};
//
//int main() {
//	Human h = {"송정윤",22};
//	h.intro();
//
//	return 0;
//}
#include "Time.h"
#include "Date.h"
int main() {
	Time now;
	now.SetTime(12, 30, 40);
	now.OutTime();
	Date today;
	today.SetDate(2018, 6, 29);
	today.OutDate();
	return 0;
}