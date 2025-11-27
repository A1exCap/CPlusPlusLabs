#include "Figure.h"

#pragma once
class RightTriangle : public Figure {
public:
	double leg_1;
	double leg_2;

	RightTriangle(double l1, double l2) : leg_1(l1), leg_2(l2) {}
	double Area() override {
		return (leg_1 * leg_2) / 2;
	}
};