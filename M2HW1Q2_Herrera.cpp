// CSC 134
// M2HW1 - Gold (Question 2)
// Luka Herrera
// 2/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int width, length, height;
    int volume;
    double charge, cost, profit;

    const double cost_per_cubic_foot = 0.30;
    const double charge_per_cubic_foot = 0.52;

    cout << "Please enter the dimensions of the crate below (in feet)." << endl;

    // User imput for dimensions of the crate
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Math used to find the volume, cost and price charged of the crate
    volume = width * length * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;

    // Results of input and math
    cout << setprecision(2) << fixed << showpoint; 
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "The cost to make a " << volume << " cubic foot crate is: $" << cost << "." << endl;
    cout << "The price it will be sold at is: $" << charge << "." << endl;
    cout << "The profit of the create is: $" << profit << "." << endl;

    return 0;
}