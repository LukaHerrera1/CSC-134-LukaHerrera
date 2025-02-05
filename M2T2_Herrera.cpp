// CSC 134
// M2T2
// Luka Herrera
// 2/5/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string name = "Luka";
    int num_apples = 100;
    double cost_each = 0.25;

    string user_name; 
    int apples_to_buy;

    cout << "Hello! Whats your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

    cout << "Welcome to the " << name << "'s apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock" << endl; 
    cout << "They each cost $" << cost_each << endl;

    cout << setprecision(2) << fixed;

    double total_price = num_apples * cost_each;
     
    cout << "The price for all of them is $" << total_price << endl;
    
    cout << "How many apples would you like? ";
    cin >> apples_to_buy;

    total_price = apples_to_buy * cost_each;
    // 
    cout << "Thank you! " << apples_to_buy << " apples comes to $" << total_price << endl;
    cout << "Have a nice day!" << endl;
    cout << endl; 
    return 0;
}