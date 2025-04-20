// CSC 134
// M5HW1 - Question 6
// Luka Herrera
// 4/20/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    cout << "1. Rainfall average caculator." << endl;
    cout << "2. Volume of a block caculator." << endl;
    cout << "3. Roman Numeral caculator." << endl;
    cout << "4. Geometry caculator." << endl;
    cout << "5. Hour per distance caculator." << endl;
    cout << "6. Quit and close operation." << endl;
    cin >> choice;

    while (choice < 1 || choice > 6) {
        cout << "Not a valid choice. Please try again and choose a number between 1-6." << endl;
        cin >> choice;
    }

    if (choice == 1) {
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

    } else if (choice == 2) {
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
    } else if (choice == 3) {
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
    } else if (choice == 4) {
            int choice;
            cout << "Geometry Caculator" << endl;
            cout << "1. Caculate the Area of a Circle" << endl;
            cout << "2. Caculate the Area of a Rectangle" << endl;
            cout << "3. Caculate the Area of a Triangle" << endl;
            cout << "4. Quit" << endl;
            cout << "Enter your choice (1-4): ";
            cin >> choice; 
        
            if (choice < 1 || choice > 4) {
                cout << "Error! Only enter numbers from 1-4." << endl;
            } else if (choice == 1) { 
                double radius;
                cout << "What is the radius of the circle: ";
                cin >> radius;
                if (radius < 1) {
                    cout << "Error! No negative numbers." << endl;
                } else {
                    double area_circle = (radius * radius) * 3.14159;
                    cout << fixed << setprecision(2);
                    cout << "The area of the circle is: " << area_circle << endl;
                }
            } else if (choice == 2) {
                double length, width;
                cout << "What is the length of the rectangle: ";
                cin >> length;
                cout << "What is the width of the rectangle: ";
                cin >> width;
                if (length < 1 || width < 1) {
                    cout << "Error! No negative numbers." << endl;
                } else {
                    cout << fixed << setprecision(2);
                    double area = length * width;
                    cout << "The area of the rectangle is: " << area << endl;
                }
            } else if (choice == 3) { 
                double base_length, height;
                cout << "What is the length of the triangles base: ";
                cin >> base_length;
                cout << "What is the height of the triangle: ";
                cin >> height;
                if (base_length < 1 || height < 1){
                    cout << "Error! No negative numbers." << endl;  
                } else {
                    cout << fixed << setprecision(2);
                    double area = base_length * height * 0.5;
                    cout << "The area of the triangle is: " << area << endl;
                }   
            } else if (choice == 4) {
                cout << "Quitting. Thank you for using the Geometry Caculator." << endl;
            }
        } else if (choice == 5) {
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
    } else if (choice == 6) {
        cout << "Thank you for using the operation! Quitting out." << endl;
    }
    return 0;
}