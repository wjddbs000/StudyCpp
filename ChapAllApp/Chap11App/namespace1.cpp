#include<stdio.h>
#include<iostream>
using namespace std;

class MyClass {
public:
	MyClass() { ; }
	void OutTime() { printf("~~"); }
	
};
class OtherClass {
public:
	void OutTime() { printf("~~"); }
};

namespace A {
	double value;
	void OutTime() { printf("~~"); }
}

namespace B {
	int value;
	void OutTime() { printf("~~"); }
}
int value;

using namespace A;
using namespace B;
int main() {
	A::value = 3.14159;
	B::value = 3;
	
	
	
	/*
	int value;
	::MyClass mc;
	
	mc.value = 3.14159;
	B::value = 10;

	value = 1;
	::value = 12;
	mc.value = 12.5;

	printf("%f\n", mc.value);
	printf("%d\n", B::value);

	cout << "  ";
	 */
	return 0;
}