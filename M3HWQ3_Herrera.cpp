// CSC 134
// M3HW1 - Question 3 - Gold
// Luka Herrera
// 3/7/2025

#include <iostream>
using namespace std;

int main() {

    int next;
    int choice1, choice2;

    cout << "You are an explorer looking for the hidden tomb of a great king.";
    cout << "It is mentioned to have great fortunes, but no one knows what it may be." << endl;
    cout << "Type 1 for next." << endl;
    cin >> next;
    
    cout << "You discover a deep cave in the Amazon jungle that has a manmade entrance." << endl;
    cout << "The cave floor is covered with pressure plates! There are 12 pressure plates in a row. ";
    cout << "With the first pressure plate being marked with the letter A on the very left plate (1st plate) and ";
    cout << "the last plate the symbol G flat (12th plate)." << endl;
    cout << "The wall in the cave seemed to have parrots singing in the G major scale." << endl;
    cout << endl;
    cout << "How should you, the great explorer, get around this obstacle?" << endl;
    cout << "Type 1 to press the plates 11, 1, 3, 4, 6, 8, 11. Or Type 2 to press the plates 11, 1, 2, 4, 6, 7, 9, 11." << endl;
    cin >> choice1;

    if (choice1 == 1) {
        cout << "You methodically press the plates and play the right G major scale." << endl;
        cout << "A secret door opens up to reveal a puzzle." << endl;
        cout << "This time there are 6 buttons, with the first button being G and the last being F flat." << endl;
        cout << "Above the buttons was written: The way is in the name of king Debac in an ancient Amazonian language." << endl;
        cout << "What buttons should you press?" << endl;
        cout << "Type 1 to press buttons 5, 6, 3, 2, 4. Or Type 2 to press buttons, 5, 2, 3, 6, 4." << endl;
        cin >> choice2;
        if (choice2 == 1){
            cout << "You have spelled Debac, the king's name." << endl;
            cout << "A small door opens up to reveal his tomb." << endl;
            cout << "In his tomb, you find a wooden flute laced with gold." << endl;
            cout << "Congratulations! You have found the hidden treasure of king Debac." << endl;
        }
        else if (choice2 == 2){
            cout << "You have spelled Dabec and the floor beneath you starts to shake and rumble." << endl;
            cout << "The floor gives out beneath you." << endl;
            cout << "Game Over" << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

    }
    else if (choice1 == 2) {
        cout << "You pressed the first two pressure plates and on the third, the ceiling above you came crashing down." << endl;
        cout << "Game Over" << endl;
    }
    else {
        cout << "Invalid choice. Please try again." << endl;
    }

return 0;
}