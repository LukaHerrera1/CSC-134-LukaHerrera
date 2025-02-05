// CSC 134
// M2T2
// Luka Herrera
// 2/5/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    cout << "Please enter your name: ";
    cin >> name; 
    string
    int num_apples;
    double cost_each;

    string user_name; 
    int apples_to_buy;

    cout << "Hello! Whats your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

    cout << "Welcome to the " << name << "'s apple farm!" << endl;
    cout << "There are " << num_apples << " in stock" << endl; 
    cout << "They cost $" << cost_each << endl;

    cout << setprecision(2) << fixed;

    double total_price = num_apples * cost_each;
     
    cout << "The price for all of them is " << total_price << endl;
    
    cout << "How many apples would you like? ";
    cin >> apples_to_buy;

    total_price = apples_to_buy * cost_each;

    cout << "Thank you! " << apples_to_buy << " apples comes to $" << total_price << endl;
    cout << "Have a nice day!" << endl;
    cout << endl; 
    return 0;
}