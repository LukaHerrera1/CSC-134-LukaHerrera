// CSC 134
// M5HW1 - Question 3
// Luka Herrera
// 4/18/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int number;
    cout << "Enter a number (1 - 10): ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Please choose a number between 1 - 10." << endl;
    } else if (number == 1) {
        cout << "The Roman numeral version of 1 is I." << endl;
    } else if (number == 2) {
        cout << "The Roman numeral version of 2 is II." << endl;
    } else if (number == 3) {
        cout << "The Roman numeral version of 3 is III." << endl;
    } else if (number == 4) {
        cout << "The Roman numeral version of 4 is IV." << endl;
    } else if (number == 5) {
        cout << "The Roman numeral version of 5 is V." << endl;
    } else if (number == 6) {
        cout << "The Roman numeral version of 6 is VI." << endl;
    } else if (number == 7) {
        cout << "The Roman numeral version of 7 is VII." << endl;
    } else if (number == 8) {
        cout << "The Roman numeral version of 8 is VIII." << endl;
    } else if (number == 9) {
        cout << "The Roman numeral version of 9 is IX." << endl;
    } else if (number == 10) {
        cout << "The Roman numeral version of 10 is X." << endl;
    }
        
    return 0;
    }
