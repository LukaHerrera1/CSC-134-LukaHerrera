// CSC-134
// M4HW1 - Part 1
// Luka Herrera
// 2/2/2025

#include <iostream>
using namespace std;

int main() {
    
    int number, answer;
    number = 5;

    for (int i=1; i<= 12; i ++) {
        answer = number * i;
        cout << number << " * " << i << " = " << answer << endl;
    }
    
return 0;
}