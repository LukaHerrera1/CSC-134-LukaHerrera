// CSC 134
// M3HW1 - Question 2 - Gold
// Luka Herrera
// 3/7/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () { 

    int amount_of_burgers, amount_of_fries, location;

    cout << "Welcome to Jaines Burgers." << endl;
    cout << "Each burger costs $7.99 and a bag of fries cost $1.99." << endl;
    cout << "How many burgers would you like?" << endl;
    cin >> amount_of_burgers;

    cout << "How many fries would you like?" << endl;
    cin >> amount_of_fries;

    cout << "Are you dining in today or is this for takeout?" << endl;
    cout << "Type 1 for dining in or 2 for takeout." << endl;
    cin >> location;

    double intial_price = (7.99 * amount_of_burgers) + (1.99 * amount_of_fries);
    double tax_price = (intial_price * 0.07);

    cout << setprecision(2) << fixed;

    if (location == 1) {
        double after_tip_price = (intial_price * 0.15);
        double final_price = after_tip_price + tax_price + intial_price;
        cout << "You order has been placed for here." << endl;
        cout << "Your final price is: $" << final_price << "." << endl;

    }
    else if (location == 2) {
        double final_price = intial_price + tax_price;
        cout << " You order has been placed for takeout." << endl;
        cout << "Your final price is: $" << final_price << "." << endl;
    }
    else {
        cout << "Please try again. Enter 1 or 2." << endl;
    }

return 0;
}
