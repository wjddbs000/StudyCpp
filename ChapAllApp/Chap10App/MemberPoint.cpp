#include <stdio.h>

class MyClass
{
public:
	int i, j;
	double d;
};

int main()
{
	MyClass C;
	int MyClass::* pi;
	double MyClass::* pd;
	int num;

	pi = &MyClass::i;
	C.*pi = 10;
	pi = &MyClass::j;
	C.*pi = 300;
	pd = &MyClass::d;
	C.*pd = 3.14;

	printf("%d, %d, %f", C.i, C.j, C.d);

	//pd=&MyClass::i;
	//pi=&MyClass::d;
	//pi=&num;


}

