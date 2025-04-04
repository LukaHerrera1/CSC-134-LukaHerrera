// CSC-134
// M4HW1 - Part 3
// Luka Herrera
// 2/2/2025

#include <iostream>
using namespace std;

int main() {
    
    int number, answer;
   
    cout << "Enter a number from 1 to 12" << endl;
    cin >> number;
    
    while (number < 1 || number > 12) {
        cout << "Invalid number. Please enter a number from 1 to 12." << endl;
        cout << "Enter a number from 1 to 12" << endl;
        cin >> number;
    }

     for (int i=1; i<= 12; i ++) {
        answer = number * i;
        cout << number << " * " << i << " = " << answer << endl;
    }
    return 0;
}