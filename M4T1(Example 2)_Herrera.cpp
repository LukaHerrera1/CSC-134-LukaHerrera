// CSC - 134
// M4T1 - Example Two
// Luka Herrera
// 3/13/2025

#include <iostream>
using namespace std;

// Example Two

int main() {

    const int MIN_NUMBER = 1, 
              MAX_NUMBER = 10;
    int num = MIN_NUMBER;

    cout << "Number Number Squared\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num ++;
    }
    return 0;
}