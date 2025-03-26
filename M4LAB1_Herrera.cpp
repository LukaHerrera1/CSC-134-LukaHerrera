// CSC - 134
// M4TLAB1
// Luka Herrera
// 3/25/2025

#include <iostream>
using namespace std;

int main() {
    
    int width, height;

    cout << "Enter width: ";
    cin >> width;
    
    cout << "Enter height: ";
    cin >> height;

    cout << "One Row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    cout << "One Column" << endl;
for (int j=0; j < height; j++) { 
    cout << "*" << endl;
}

cout << "The Entire Block" << endl;
for (int j=0; j < height; j++) {
    
    for (int i=0; i < width; i++){
        cout << "*" << " ";
    }
    cout << endl;
}
return 0;
}
