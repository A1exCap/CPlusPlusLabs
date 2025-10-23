#include <iostream>
#include <thread>
using namespace std;

class TimeController {
public:
	int hour, minute, second;
	TimeController() : hour(0), minute(0), second(0) {}
	void SetTime(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	~TimeController() {
		cout << "TimeController Deleted!" << endl;
	}
};