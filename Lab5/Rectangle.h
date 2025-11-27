#include "Figure.h"

#pragma once
class Rectangle : public Figure {
public:
	double width;
	double height;
	Rectangle(double w, double h) : width(w), height(h) {}
	double Area() override {
		return width * height;
	}
};