#include <iostream>
#include <fstream>
#include <string>
#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapeze.h"
using namespace std;

int main() {
    Figure* figures[] = {
        new Rectangle(5,4),
        new Circle(6),
        new RightTriangle(4,3),
        new Trapeze(4,8,3)
    };

    for (Figure* f : figures) {
        cout << "Area: " << f->Area() << endl;
    }
}