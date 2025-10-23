#include "Screen.h"
#include "TimeController.h"
#include "DateController.h"
#include "Alarm.h"
using namespace std;

class DigitalClock {
public:
    Screen* screen;
    TimeController* timeCtrl;
    DateController* dateCtrl;
    Alarm* alarm;

    DigitalClock() {
        screen = new Screen();
        timeCtrl = new TimeController();
        dateCtrl = new DateController();
        alarm = new Alarm();
    }

    void Tick() {
        timeCtrl->second++;
        if (timeCtrl->second >= 60) { timeCtrl->second = 0; timeCtrl->minute++; }
        if (timeCtrl->minute >= 60) { timeCtrl->minute = 0; timeCtrl->hour++; }
        if (timeCtrl->hour >= 24) { timeCtrl->hour = 0; }

        if (alarm->Check(timeCtrl->hour, timeCtrl->minute, timeCtrl->second)) {
            screen->ShowAlarm();
        }
    }

    void Show() {
        screen->ShowDate(dateCtrl->day, dateCtrl->month, dateCtrl->year);
        screen->ShowTime(timeCtrl->hour, timeCtrl->minute, timeCtrl->second);
    }

    ~DigitalClock() {
        delete screen;
        delete timeCtrl;
        delete dateCtrl;
        delete alarm;
    }
};
