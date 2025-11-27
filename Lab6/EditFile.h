#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma once
template <typename Type>
class EditFile {
public:
	string fileName;
	EditFile(string name) : fileName(name) {}

	void RemoveLine(Type index) {
		ifstream infile(fileName);
		ofstream temp("result.txt");

		string line;
		Type current = 1;

		while (getline(infile, line)) {
			if (current != index) {
				temp << line << endl;
			}
			current++;
		}

		infile.close();
		temp.close();

		remove(fileName.c_str());
		rename("result.txt", fileName.c_str());
	}
};