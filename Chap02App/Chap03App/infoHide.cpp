#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	int GetHour() { return hour; }
	void setHour(int h) {
		if (h >= 0 && h < 24) {
			hour = h;
		}
		else {
			hour = 0;
		}
	}
	int GetMinute() { return min; }
	void SetMinute(int m) {
		if (m >= 0 && m < 60) {
			min = m;
		}
		else {
			min = 0;
		}
	}
	int GetSecond() { return sec; }
	void setSecond(int s){
		if (s >= 0 && s < 24) {
			sec = s;
		}
		else {
			sec = 0;
		}
	}


	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

int main() {
	Time now(14, 2, 24);
	now.OutTime();

	now.setHour(40);
	now.OutTime();
	now.setHour(9);
	now.OutTime();
}