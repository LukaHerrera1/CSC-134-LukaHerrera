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
   
    cout << "Hello welcome to Square Bank." << endl;
    cout << "Please enter your first and last name to start your transaction." << endl;
    cout << "First name: ";
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    cout << "Enter bank number: ";
    cin >> bank_number;

    cout << "Please enter your account balance: ";
    cin >> account_balance;

    cout << "Enter deposit amount: ";
    cin >> amount_of_deposit;

    cout << "Enter withdraw amount: ";
    cin >> amount_of_withdraw;

    double final_balance = (account_balance + amount_of_deposit) - amount_of_withdraw;

    cout << endl; 
    cout << setprecision(2) << fixed << showpoint;
    cout << "The account for " << first_name << " " << last_name << endl;
    cout << "Account number: " << bank_number << endl;
    cout << "This account has a balance of: $" << final_balance << endl;

    return 0;
}