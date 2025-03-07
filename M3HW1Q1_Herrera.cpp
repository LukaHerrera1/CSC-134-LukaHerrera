// CSC 134
// M3HW1 - Question 1 - Gold
// Luka Herrera
// 3/7/2025

#include <iostream>
using namespace std;

int main () {
    
    string answer;

    cout << "Hello, I am C++ Program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    if (answer == "yes"){
        cout << "Thats great! I'm sure we'll can get along." << endl;
    }
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If your not sure... that's OK." << endl;
    }
    return 0;
}