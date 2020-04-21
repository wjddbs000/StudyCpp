#include <stdio.h>
#include <string.h>
class Human {
private:
	char name[12];
	int age;
public:
	//생성자
	Human(const char* name, int age) {
		strcpy(this->name, name);
		this->age = age;
	}
	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

int main() {
	Human h = Human("송정윤",22);
	h.intro();

	return 0;
}