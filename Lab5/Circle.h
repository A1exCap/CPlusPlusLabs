#include "Figure.h"

#pragma once
class Circle : public Figure {
public:
	double radius;

	Circle(double r) : radius(r) {}
	double Area() override {
		return 3.14 * radius * radius;
	}
};