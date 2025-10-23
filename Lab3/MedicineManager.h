#include <iostream>
#include "Medicine.h"
using namespace std;

#pragma once
class MedicineManager
{
public:
    void FindMedicine(Medicine medicines[], double price, int size) {
        if (price < 0) throw "Price cannot be negative";
        for (int i = 0; i < size; i++) {
            if (medicines[i].price <= price) {
                cout << medicines[i].name << " | " << medicines[i].price << endl;
            }
        }
    }

    void FindMedicine(Medicine medicines[], string name, int size) {
        if (name.empty()) throw "Name cannot be empty";
        for (int i = 0; i < size; i++) {
            if (medicines[i].name == name) {
                cout << medicines[i].name << " | " << medicines[i].price << endl;
            }
        }
    }

    void PriceForRecipe(Medicine medicines[], string recipe[], int medSize, int recipeSize) {
        double total = 0;

        for (int i = 0; i < medSize; i++) {
            for (int j = 0; j < recipeSize; j++) {
                if (medicines[i].name == recipe[j]) {
                    total += medicines[i].price;
                }
            }
        }

        cout << "Total price for the recipe: " << total << endl;
    }
};

