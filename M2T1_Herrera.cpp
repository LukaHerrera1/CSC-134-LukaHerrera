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
    double price_each = 0.25;

    cout << "Welcome to the " << name << "'s apple farm!" << endl;
    cout << "We have " << num_apples << " in stock" << endl; 
    cout << "Each apple costs $" << price_each << endl;

    double total_price = num_apples * price_each;
     
    cout << "The total price for all " << num_apples;
    cout << " is: $" << total_price << endl; 
    cout << "Thanks for coming by!" << endl;

    return 0;
}