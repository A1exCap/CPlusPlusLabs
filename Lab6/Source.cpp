#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template <typename Type>
Type Minimum(Type a[], int size) {
	Type min = a[0];
	for (int i = 0; i < size; i++) {
		if(a[i] < min) min = a[i];
	}
	return min;
}


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

int main() {
	
	// Exercise 1

	int arrInt[5] = { 5, 3, 8, 1, 4 };

	double arrDouble[5] = { 5.5, 3.3, 8.8, 4.4, 1.1};

	cout << "Minimum int: " << Minimum(arrInt, 5) << endl;
	cout << "Minimum double: " << Minimum(arrDouble, 5) << endl << endl;

	// Exercies 2

	string file = "lab6.txt";
	EditFile<int> fileEditor(file);

	fileEditor.RemoveLine(3);

	return 0;
}