// CSC 134
// M3T2
// Luka Herrera
// 2/19/2025

#include <iostream>
using namespace std;

int main() {

    // declare variables
    int width_one, length_one, width_two, length_two;
    int area_one, area_two;

    // ask for user input
    cout << "Please enter the width and length of the first rectangle, seperated by";
    cout << " a space or new line." << endl;
    cin >> width_one >> length_one;

    cout << "Please enter the width and length of the second rectangle, seperated by";
    cout << " a space or new line." << endl;
    cin >> width_two >> length_two;

    // caculate results
    area_one = width_one * length_one;
    area_two = width_two * length_two;

    // display results
    cout << "Rectangle one has an area of " << area_one << "." << endl;
    cout << "Rectangle two has an area of " << area_two << "." << endl;

    // determines which is bigger
    if (area_one > area_two) {
        cout << "Rectangle one is bigger." << endl;

    }

    if (area_two > area_one) {
        cout << "Rectangle two is bigger." << endl;
    }

    if (area_one == area_two) {
        cout << "The rectangles are the same size." << endl;
    }

    return 0;
}