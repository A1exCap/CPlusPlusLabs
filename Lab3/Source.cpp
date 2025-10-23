#include <iostream>
#include "Medicine.h"
#include "MedicineManager.h"
using namespace std;


int main() {
	MedicineManager medicineManager;
    try {
        Medicine medicines[] = {
            Medicine("Aspirin", 100, 5.0),
            Medicine("Paracetamol", 200, 3.5),
            Medicine("Ibuprofen", 150, 5.5)
            // Medicine("InvalidMed", -10, -5) 
        };
        medicines[0].ShowInfo();
        medicines[0] += 1;
        medicines[0].ShowInfo();

        Medicine newOne = medicines[0] + 2.0;
        newOne.ShowInfo();

        medicineManager.FindMedicine(medicines, 4.5, 3);
        medicineManager.FindMedicine(medicines, "Aspirin", 3);

        string recipe[] = {"Aspirin", "Ibuprofen", "Aspirin"};
        medicineManager.PriceForRecipe(medicines, recipe, 3, 3);
    }
	catch (const char* msg) {
		cerr << "Error: " << msg << endl;
	}
    return 0;
}