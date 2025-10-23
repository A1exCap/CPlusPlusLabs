#include <iostream>
#include <thread>
#include "DigitalClock.h"
using namespace std;


int main() {
    DigitalClock clock;

    clock.dateCtrl.SetDate(18, 9, 2025);
    clock.timeCtrl.SetTime(10, 30, 0);
    clock.alarm.SetAlarm(10, 30, 5);

    while (true) {
        clock.Tick();
        clock.Show();	
		this_thread::sleep_for(chrono::seconds(1));
        if(clock.alarm.Check(clock.timeCtrl.hour, clock.timeCtrl.minute, clock.timeCtrl.second)) break;
    }

    return 0;
}