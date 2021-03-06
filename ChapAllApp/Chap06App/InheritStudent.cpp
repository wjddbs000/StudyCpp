#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

class Student : public Human
{
private:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
	void report() {
		printf("이름 : %s, 나이 : %d, 학번 : %d\n", name, age, stunum);
	}
	void intro() {
		Human::intro();
		printf("학번 : %d, 이름 : %s\n", stunum, name);
	}
};

class Graduate : public Student
{
protected:
	char thesis[32];

public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) : 
		Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	}
	void research() {
		printf("%s을 연구하고 논문을 쓴다.\n", thesis);
	}
};

class Boxer : public Human {
protected:
	int height, weight;
public:
	Boxer(const char* aname, int aage, int aheight, int aweight) :
		Human(aname, aage) {
		height = aheight;
		weight = aweight;
	}
	void intro() {
		printf("키 %dcm 몸무게 %dkg 인 %s 선수 입니다.\n",
			height, weight, name);
	}
	void fight() {
		puts("레프트,라이트,쨉쨉");
	}
};

int main()
{
	Human kim("김상형", 29);
	kim.intro();
	Student han("김한결", 15, 123456);
	han.intro();
	han.study();

	Graduate moon("문종민", 45, 920629, "게임방 상권 분석");
	moon.research();

	Boxer park("박종팔", 61, 178, 65);
	park.intro();
	park.fight();
}
