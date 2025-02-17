// CSC 134
// M2HW1 - Gold (Question 1)
// Luka Herrera
// 2/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    string username;
    double account_balance, amount_of_deposit, amount_of_withdraw;
   
    cout << "Hello welcome to Square Bank." << endl;
    cout << "Please enter your name to start your transaction." << endl;
    cout << "Name: ";
    cin >> username;

    cout << "Please enter your account balance: ";
    cin >> account_balance;

    cout << "Enter deposit amount: ";
    cin >> amount_of_deposit;

    cout << "Enter withdraw amount: ";
    cin >> amount_of_withdraw;

    double final_balance = (account_balance + amount_of_deposit) - amount_of_withdraw;
 
    cout << "Your final balance is: $" << final_balance << endl;

    return 0;
}