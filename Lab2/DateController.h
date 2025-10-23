#include <iostream>
#include <thread>
using namespace std;

class DateController {
public:
    int day, month, year;
    DateController() : day(1), month(1), year(2025) {}
    void SetDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    ~DateController() {
        
    }
};