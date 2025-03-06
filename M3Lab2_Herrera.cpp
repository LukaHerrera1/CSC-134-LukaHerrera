// CSC-134 
// M3Lab2
// Luka Herrera
// 3/6/2025

#include <iostream>
using namespace std;

int main() {

    int numbergrade;

    cout << "Enter your number grade: ";
    cin >> numbergrade; 

    if (numbergrade >= 90 && numbergrade <= 100) {
        cout << "Your letter grade is an A." << endl;
    }
    else if (numbergrade >= 80 && numbergrade <= 89) {
        cout << "Your letter grade is a B." << endl;
    }
    else if (numbergrade >= 70 && numbergrade <= 79){
        cout << "Your letter grade is a C." << endl;
    }
    else if (numbergrade >= 60 && numbergrade <= 69) {
        cout << "Your letter grade is a D." << endl;
    }
    else if (numbergrade >= 0 && numbergrade <= 59) {
        cout << "Your letter grade is a F." << endl;
    }
    else {
        cout << "Not a valid choice. Please select a number from 0 to 100." << endl;
    }
    return 0;
}