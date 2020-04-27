#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class Human {
protected:
	char name[12];//이름
	int age;//나이
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		printf("%s은(는) %d살 입니다.\n",name,age);
	}
};

class Student : public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}
	void intro() {
		printf("%d번, %s입니다\n", stunum, name);
	}
};
int main() {
	Human h("송정윤", 22);
	Student s("최상식", 24, 25);
	Human* pH;
	Student* pS;

	int sel = 0;
	cout << "원하는 수를 고르세요(1:Human 2:Student)";
	cin >> sel;

	if (sel == 1) {
		pH = &h;
	}
	else if (sel == 2) {
		pH = &s;
	}
	else {
		cout << "맞는 수가 없습니다" << endl;
		exit(-1);
	}
	pH->intro();
}