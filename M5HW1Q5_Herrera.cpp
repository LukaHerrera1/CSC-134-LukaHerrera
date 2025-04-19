// CSC 134
// M5HW1 - Question 5
// Luka Herrera
// 4/19/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int speed, time;
    cout << "What is the speed of the vehicle in Mph: ";
    cin >> speed;
    while (speed < 0) {
        cout << "Please only enter postive numbers." << endl;
        cin >> speed;
    }
    cout << "How many hours has it traveled: ";
    cin >> time;
    while (time < 1) {
        cout << "Please only enter postive numbers." << endl;
        cin >> time;
    }

    cout << "Hour Distance Traveled" << endl;
    cout << "-----------------------" << endl;

    for (int hour = 1; hour <= time; hour++) {
        int distance = speed * hour;
        cout << setw(5) << hour << setw(15) << distance << endl;
    }
    return 0;
}