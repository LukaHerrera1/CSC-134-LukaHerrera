// CSC-134
// M3Lab1
// Luka Herrera
// 3/3/2025

#include <iostream>
using namespace std;

void gotocave();
void gotohouse();
void checkglobe();
void checkbookshelf();

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
    cout << "You also see a small house at the top of the mountain with light also shining out the windows." << endl;
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

void gotocave() {
    cout << "You have entered the cave walking across a narrow steep path, frightened and nervous ";
    cout<< "by the bats you slipped and fell down into the abyss." << endl;
    cout << endl;
    cout << "Game Over" << endl;
}

void gotohouse() {
    int choice2;
    cout << "You have climbed up the steep mountain and finally reached the house." << endl;
    cout << "You have entered the house to find a dusty globe and a bookshelf." << endl;
    cout << "What should you inspect next: 1 for the globe and 2 for the bookshelf." << endl;
    cin >> choice2;
    if (1==choice2){
        checkglobe();
    }
    else if (2==choice2) {
        checkbookshelf();
    }
    else {
        cout << "Not a valid choice. Please try again." << endl;
    }
}

void checkglobe() {
    cout << "You look at the globe and see a small lever to open it up." << endl;
    cout << "When you peak to look in the globe a massive spider leaps out unto your face." << endl;
    cout << "You go running out of the house screaming. You trip and fall off the side of the mountain." << endl;
    cout << endl;
    cout << "Game Over" << endl;
}
void checkbookshelf() {
    cout << "You inspect the bookshelf to find a hidden lever behind a book." << endl;
    cout << "You pull the lever for the bookshelf to swing open." << endl;
    cout << "A golden glow poured out for you to find the hidden treasure." << endl;
    cout << "You ran back to your boat filled to the brim with gold." << endl;
    cout << endl;
    cout << "Congrats you have won the game!" << endl;
}