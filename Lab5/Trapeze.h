#include "Figure.h"

#pragma once
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