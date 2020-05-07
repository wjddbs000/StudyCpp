#include <stdio.h>

class Calc
{
public:
	void Op1(int a, int b) { printf("%d\n", a + b); }
	void Op2(int a, int b) { printf("%d\n", a - b); }
	void Op3(int a, int b) { printf("%d\n", a * b); }
	void Op4(int a, int b) { printf("%d\n", a / b); }

	void DoCalc(void (Calc::* fp)(int, int), int a, int b) {
		puts("지금부터 연산 결과를 발표하겠습니다.");
		printf("%d와 %d의 연산 결과 : ", a, b);
		(this->*fp)(a, b);
		puts("이상입니다.");
	}

};

int main()
{
	int ch;
	Calc c; 
	int a = 3, b = 4;
	void (Calc:: * aOp[4])(int, int) = { &Calc::Op1,&Calc::Op2,&Calc::Op3,&Calc::Op4};
	while(true){
		printf("연산 방법을 선택하시오. 1=더하기, 2=빼기, 3=곱하기, 0=종료 : ");
		scanf("%d", &ch);

		if (ch >= 1 && ch < 5) {
			c.DoCalc(aOp[ch],a,b);
		}
		else if (ch == 0) {
			return 0;
		}

		//switch (ch) {
		//case 1:
		//	(c.*aOp[0])(a,b);
		//	break;
		//case 2:
		//	(c.*aOp[1])(a, b);
		//	break;
		//case 3:
		//	(c.*aOp[2])(a, b);
		//	break;
		//case 0:
		//	return 0;
		//	break;
		//}
	}
	return 0;
}
