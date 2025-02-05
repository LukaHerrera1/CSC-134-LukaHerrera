// CSC 134
// M2T1 - Apple Orchard Part Two
// Luka Herrera
// 2/3/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name = "Luka";
    int num_apples = 10;
    double cost_each = 0.25;

    // Greeting message
    cout << "Welcome to the " << name << "'s apple farm!" << endl;
    cout << "We have " << num_apples << " in stock" << endl; 
    cout << "Each apple costs $" << cost_each << endl;

    cout << setprecision(2) << fixed;

    double total_price = num_apples * cost_each;
    
    // Final price for all apples
    cout << "The price for all " << num_apples;
    cout << " is: $" << total_price << endl;
    cout << "Thank you for coming by!" << endl;
    return 0;
}