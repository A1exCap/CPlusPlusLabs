#include <iostream>
#include <fstream>
#include <string>
#include "Computer.h"
using namespace std;

#pragma once
class Processor : public Computer {
public:
    string brand;
    double frequency;

    Processor() : Computer(), brand("Unknown"), frequency(0.0) {}
    Processor(string m, double p, string b, double f) : Computer(m, p), brand(b), frequency(f) {}
    ~Processor() {}

    void SaveData(ofstream& out) {
        Computer::SaveData(out);
        out << "Processor Brand: " << brand << endl;
        out << "Frequency: " << frequency << " GHz" << endl;
    }
};