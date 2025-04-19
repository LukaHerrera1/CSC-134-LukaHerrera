// CSC 134
// M5HW1 - Question 4
// Luka Herrera
// 4/19/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

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
    
    return 0;
}