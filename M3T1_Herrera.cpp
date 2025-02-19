// CSC 134
// M3T1
// Luka Herrera
// 2/18/2025

#include <iostream>
using namespace std;

int main() {

    int width_one, length_one, width_two, length_two;
    int area_one, area_two;

    cout << "Please enter the width and length of the first rectangle, seperated by";
    cout << " a space or new line." << endl;
    cin >> width_one >> length_one;

    cout << "Please enter the width and length of the second rectangle, seperated by";
    cout << " a space or new line." << endl;
    cin >> width_two >> length_two;

    area_one = width_one * length_one;
    area_two = width_two * length_two;

    cout << "Rectangle one has an area of " << area_one << "." << endl;
    cout << "Rectangle one has an area of " << area_two << "." << endl;

    return 0;
}