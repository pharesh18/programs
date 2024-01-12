#include <iostream>
using namespace std;

double metersToKilometers(double meters) {
    const double metersToKilometersFactor = 0.001;
    return meters * metersToKilometersFactor;
}

double gramsToKilograms(double grams) {
    const double gramsToKilogramsFactor = 0.001;
    return grams * gramsToKilogramsFactor;
}

int main() {
    int choice;

    do {
        cout << "\n\nUnit Conversion Menu:\n";
        cout << "1. Convert Distance (Meters to Kilometers)\n";
        cout << "2. Convert Weight (Grams to Kilograms)\n";
        cout << "0. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double meters, kilometers;
                cout << "Enter distance in meters: ";
                cin >> meters;
                kilometers = metersToKilometers(meters);
                cout << meters << " meters is equal to " << kilometers << " kilometers";
                break;
            }
            case 2: {
                double grams, kilograms;
                cout << "Enter weight in grams: ";
                cin >> grams;
                kilograms = gramsToKilograms(grams);
                cout << grams << " grams is equal to " << kilograms << " kilograms";
                break;
            }
            case 0:
                break;
            default:
                cout << "Invalid choice. Please enter a valid option";
        }

    } while (choice != 0);

    return 0;
}
