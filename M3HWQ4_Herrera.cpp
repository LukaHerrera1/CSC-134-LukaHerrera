// CSC 134
// M3HW1 - Question 3 - Gold
// Luka Herrera
// 3/7/2025

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    int answer;

    srand(time(0));
    
    int random_number1 = (rand() % 9);
    
    int random_number2 = (rand() % 9);

    
    cout << "What is " << random_number1 << " + " << random_number2 << endl;
    cin >> answer;

    double correct_answer = random_number1 + random_number2;

    if (answer == correct_answer){
        cout << "Correct!" << endl;
    }
    else{
        cout << "Incorrect" << endl;
    }
    return 0;
}