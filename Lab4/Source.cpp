#include <iostream>
#include <fstream>
#include <string>
#include "Processor.h"
#include "HardDisk.h"
using namespace std;

int main() {
    ofstream outfile("lab4_result.txt");

    Processor cpu("GamingPC", 1200, "Intel i7", 3.6);
    HardDisk hdd("OfficePC", 800, 1024);

    cpu.SaveData(outfile);
    hdd.SaveData(outfile);

    outfile.close();

    cout << "Data saved to lab4_result.txt";

    return 0;
}