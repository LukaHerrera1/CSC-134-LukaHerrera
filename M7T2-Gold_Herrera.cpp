// CSC 134
// M7T2 - Gold
// Luka Herrera
// 5/4/2025

#include<iostream>
using namespace std;

class Box {
    private:
        double width;
        double length;
        double height;
    public:
        void setWidth(double);
        void setLength(double);
        void setHeight(double);
        double getWidth() const;
        double getLength() const;
        double getHeight() const;
        double getVolume() const;
};

void Box::setWidth(double w) {
    width = w;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setHeight(double hei){
    height = hei;
}

double Box::getWidth() const {
    return width;
}

double Box::getLength() const {
    return length;
} 

double Box::getHeight() const {
    return height;
}

double Box::getVolume() const {
    return width * length * height;
}

int main() {
    Box box;
    double boxWidth;
    double boxLength;
    double boxHeight;

    cout << "This program will caculate the volume of a\n";
    cout << "box. What is the width? ";
    cin >> boxWidth;
    cout << "What is the length? ";
    cin >> boxLength;
    cout << "What is the height? ";
    cin >> boxHeight;

    while (boxWidth <= 0 || boxLength <= 0 || boxHeight <= 0) {
        cout << "Error no value can be zero or negative." << endl;
        cout << "Re-enter values." << endl;
        cout << "Width: ";
        cin >> boxWidth;
        cout << "Length: "; 
        cin >> boxLength;
        cout << "Height: ";
        cin >> boxHeight;
    }


    box.setWidth(boxWidth);
    box.setLength(boxLength);
    box.setHeight(boxHeight);

    cout << "Here is the rectangle's data: \n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Height: " << box.getHeight() << endl;
    cout << "Volume: " << box.getVolume() << endl;

    return 0;
}