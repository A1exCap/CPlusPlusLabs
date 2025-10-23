#include <iostream>
#include <thread>
using namespace std;

class Alarm {
private:
    int hour, minute, second;
public:
    Alarm() : hour(0), minute(0), second(0) {}
    void SetAlarm(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    bool Check(int h, int m, int s) {
        return h == hour && m == minute && s == second;
    }

    ~Alarm() {   
        
    }
};