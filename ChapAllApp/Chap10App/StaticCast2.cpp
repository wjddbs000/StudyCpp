#include <stdio.h>

class Parent {  };

class Child : public Parent{};

int main() {
	Parent P, * pP;
	Child C, * pC;
	int i = 1234;

	pP = static_cast<Parent*>(&C);
	pC = static_cast<Child*>(&P);//허용은 하지만 위험하다.
	//pP = static_cast<Parent*>(&i); //에러
	//pC = static_cast<Child*>(&i); //에러

	return 0;
}