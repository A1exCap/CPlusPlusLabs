#include <iostream>
#include <thread>
using namespace std;

#pragma once
class Screen {
public:
    void ShowTime(int h, int m, int s) {
        cout << "Time: " << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << ":" << (s < 10 ? "0" : "") << s << endl;
    }

    void ShowDate(int d, int m, int y) {
        cout << "Date: " << (d < 10 ? "0" : "") << d << "." << (m < 10 ? "0" : "") << m << "." << y << endl;
    }

    void ShowAlarm() {
        cout << "Alarm!!" << endl;
    }
    ~Screen() {
        cout << "Screen Deleted!" << endl;
	}
};