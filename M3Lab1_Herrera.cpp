// CSC-134
// M3Lab1
// Luka Herrera
// 3/3/2025

#include <iostream>
using namespace std;

void gotocave();
void gotohouse();

int main () {

    int choice;
    int startgame, continuegame;

    cout << "Welcome to the Treasure Hunter Game!" << endl;
    cout << "To Start Press 1 and enter." << endl;
    cin >> startgame;
    cout << "You are a pirate looking for the lost treasure on this island." << endl;
    cout << "The only clue you have is this riddle: " << endl;
    cout << endl; 
    cout << "I stand still but I'm not a tree," << endl;
    cout << "I hold knowledge for all to see," << endl; 
    cout << "Look behind me, and you may find," << endl;
    cout << "The treasure waiting, yours to claim." << endl; 
    cout << endl; 
    cout << "To contiune press 2 and enter." << endl;
    cin >> continuegame;
    cout << "You have started on the beach of the island.";
    cout << " In front of you is a cave that has a waterfall for an entrance and";
    cout << " has light flicking off in the depths" << endl;
    cout << " You also see a small house at the top of the mountain with light also shining out the windows." << endl;
    cout << "Where do you want to explore first: type 1 for cave or type 2 for house." << endl;
    cin >> choice;

    if (1==choice) {
        gotocave();
    }
    else if (2==choice) {
        gotohouse();
    }
    else {
        cout << "Not a valid choice. Please try again." << endl;
    }

return 0;
}