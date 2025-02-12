// CSC 134
// M2T2
// Luka Herrera
// 2/5/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{ 
    string name;
    int num_apples;
    double price_per_apple;

    // User input of apple farm information
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "How many apples are for sale?" << endl;
    cin >> num_apples;
    cout << setprecision(2) << fixed;
    cout << "How much are each apple?" << endl;
    cin >> price_per_apple;

    // Greeting message for the apple farm
    cout << "Welcome to " << name << "'s apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock" << endl;
    cout << "They each cost $" << price_per_apple << endl;

    cout << setprecision(2) << fixed;

    double total_price = num_apples * price_per_apple;
    
    cout << "The price for all of them is $" << total_price << endl;

    return 0;
}