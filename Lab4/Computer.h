#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma once
class Computer {
public:
	string model;
	double price;
	Computer() : model("Unknown"), price(0.0) {}
	Computer(string m, double p) : model(m), price(p) {}

	~Computer() {}

	void SaveData(ofstream& out) {
		out << "Computer Model: " << model << endl;
		out << "Price: " << price << " USD" << endl;
	}
};
