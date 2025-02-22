// CSC 134
// M2HW1 - Gold (Question 1)
// Luka Herrera
// 2/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    string first_name, last_name;
    double account_balance, amount_of_deposit, amount_of_withdraw;
    int bank_number;
   
    // greeting and user input
    cout << "Hello welcome to Square Bank." << endl;
    cout << "Please enter your first and then last name to start your transaction." << endl;
    cout << "First name: ";
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    cout << "Enter bank number: ";
    cin >> bank_number;

    // user input for money information
    cout << "Please Enter your account balance: ";
    cin >> account_balance;

    cout << "Enter deposit amount: ";
    cin >> amount_of_deposit;

    cout << "Enter withdraw amount: ";
    cin >> amount_of_withdraw;

    // caculation for balance
    double final_balance = (account_balance + amount_of_deposit) - amount_of_withdraw;

    // display results
    cout << endl; 
    cout << setprecision(2) << fixed << showpoint;
    cout << "The account for " << first_name << " " << last_name << endl;
    cout << "Account number: " << bank_number << endl;
    cout << "Has an account balance of: $" << final_balance << endl;

    return 0;
}