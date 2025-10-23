#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Figure {
public:
    virtual double Area() = 0;
};

class Rectangle : public Figure {
public: 
	double width;
	double height;
	Rectangle(double w, double h) : width(w), height(h) {}
    double Area() override {
		return width * height;
	}
};

class Circle : public Figure {
public:
	double radius;

	Circle(double r) : radius(r) {}
	double Area() override {
		return 3.14 * radius * radius;
	}
};

class RightTriangle : public Figure {
public:
	double leg_1;
	double leg_2;

	RightTriangle(double l1, double l2) : leg_1(l1), leg_2(l2) {}
	double Area() override {
		return (leg_1 * leg_2) / 2;
	}
};

class Trapeze : public Figure {
public:
	double base_1;
	double base_2;
	double height;

	Trapeze(double b1, double b2, double h) : base_1(b1), base_2(b2), height(h) {}
	double Area() {
		return ((base_1 + base_2) / 2) * height;
	}
};

int main() {
	Rectangle rect(5,4);
	Circle circ(6);
	RightTriangle rt(4,3);
	Trapeze trap(4,8,3);

	cout << "Rectangle area: " << rect.Area() << endl;	
	cout << "Circle area: " << circ.Area() << endl;
	cout << "Right Triangle area: " << rt.Area() << endl;
	cout << "Trapeze area: " << trap.Area() << endl;
}