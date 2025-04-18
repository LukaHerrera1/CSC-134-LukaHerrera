// CSC 134
// M5HW1 - Question 2
// Luka Herrera
// 4/18/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error! No side can be zero or less" << endl;
    } else {
        double block_volume = width * length * height;
        cout << "The volume of the block is: " << block_volume << endl;
    }

    return 0;
}