#include <iostream>
#include <fstream>
#include <string>
#include "Computer.h"
using namespace std;

#pragma once
class HardDisk : public Computer {
public:
    int capacity;

    HardDisk() : Computer(), capacity(0) {}
    HardDisk(string m, double p, int c) : Computer(m, p), capacity(c) {}
    ~HardDisk() {}

    void SaveData(ofstream& out) {
        Computer::SaveData(out);
        out << "Hard Disk Capacity: " << capacity << " GB" << endl;
    }
};