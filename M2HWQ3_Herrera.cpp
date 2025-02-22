// CSC 134
// M2HW1 - Gold (Question 3)
// Luka Herrera
// 2/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int vistors, pizzas_order, slice_per_pizza;

    // user input
    cout << "Pizza Party Caculator" << endl;
    cout << "Caculates for 3 slices of pizza per person." << endl;
    cout << "To get started enter the number of vistors: ";
    cin >> vistors;
    cout << "How many pizza's did you order: ";
    cin >> pizzas_order;
    cout << "How many slices per pizza: ";
    cin >> slice_per_pizza;

    // caculations
    int pizzas_left_over = (pizzas_order * slice_per_pizza)-(vistors * 3);
    cout << "There are " << pizzas_left_over << " slices of pizza left over." << endl;

    return 0;
}