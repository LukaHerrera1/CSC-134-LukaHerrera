// CSC 134
// M5HW1 - Question 1
// Luka Herrera
// 4/18/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string first_month, second_month, third_month;
    double first_month_rainfall, second_month_rainfall, third_month_rainfall;

    cout << "Enter month: ";
    cin >> first_month;
    cout << "Enter rainfall for " << first_month << ": ";
    cin >> first_month_rainfall;
    cout << "Enter month: ";
    cin >> second_month;
    cout << "Enter rainfall for " << second_month << ": ";
    cin >> second_month_rainfall;
    cout << "Enter month: ";
    cin >> third_month;
    cout << "Enter rainfall for " << third_month << ": ";
    cin >> third_month_rainfall;

    cout << fixed << setprecision(2);
    double average_rainfall = (first_month_rainfall + second_month_rainfall + third_month_rainfall) / 3.0;

    cout << "The average rainfall for " << first_month << ", " << second_month << ", and " << third_month;
    cout << " is " << average_rainfall << " inches." << endl;

    return 0;
}