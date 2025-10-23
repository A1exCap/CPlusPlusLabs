#include <iostream>
using namespace std;

#pragma once
class Medicine {
public:
    string name;
    int quantity;
    double price;

    Medicine(string n, int q, double p) {
        if (n.empty()) throw "Name cannot be empty";
        if (q < 0) throw "Quantity cannot be negative";
        if (p < 0) throw "Price cannot be negative";

        name = n;
        quantity = q;
        price = p;
    }
    Medicine& operator+=(int q) { quantity += q; return *this; }
    Medicine& operator-=(int q) {
        if (quantity - q < 0)
            throw "Quantity cannot be negative";
        quantity -= q;
        return *this;
    }

    Medicine operator+(double p) const {
        return Medicine(name, quantity, price + p);
    }
    Medicine operator-(double p) const {
        if (price - p < 0.0)
            throw "Price cannot be negative";
        return Medicine(name, quantity, price - p);
    }
    void ShowInfo() const {
        cout << "Name: " << name
            << ", Quantity: " << quantity
            << ", Price per unit: " << price << endl << endl;
    }
};