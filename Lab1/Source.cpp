#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float factorial(int x) {
	if (x == 0) return 1;
	return x * factorial(x - 1);
}

float a_task(float x, float y, float z, float b) {
	return ((2 * cos(pow(abs(x),1./3)) - pow(x,2) / 6) / (z/b + pow(sin(pow(y+z,3)),2))) + pow(log(pow(abs(z),0.6f)),2);
}
float b_task(float x, float y, float z) {
	return (pow(x,2) + pow(z,2) / pow(tan(pow(abs(x),0.3f)),2)) / (3 + x + pow(y,2) / factorial(2) + pow(z,3) / factorial(3))
	+ pow(fabs(log(pow(abs(y / z), 1. / 3))), 0.3f);;
}
int main()
{
	float x, y, z, b;
	x = 0.48 * 5;
	y = 0.47 * 5;
	z = -1.32 * 5;
	b = 5;

	cout << "Exercise 1:" << endl;
	cout << "a: " << a_task(x, y, z, b) << " b: " << b_task(x, y, z) << endl << endl;
	cout << "Exercise 2:" << endl;


	for (float x = -1; x <= 1; x += 0.2) {
		cout << "step " << x << " a: " << a_task(x, y, z, b) << " b: " << b_task(x, y, z) << endl;
	}

	return 0;
}