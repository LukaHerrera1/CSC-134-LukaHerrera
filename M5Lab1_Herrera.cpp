// CSC - 134
// M5T1
// Luka Herrera
// 4/8/2025

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void sneak_to_back();
void you_got_hurt();
void opens_back_door();
void investigate_sound();
void choice_right_door();
void choice_left_door();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    // load up the main menu
    main_menu();
    // when we return here, we're done
    cout << "Thanks for playing!" << endl;
    return 0; // finished with no errors
  }
  void main_menu() {
   
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
      choice_front_door();
    } else if (2 == choice) {
      sneak_to_back();
    } else if (3 == choice) {
      choice_go_home();
    } else if (4 == choice) {
      cout << "Ok, quitting game" << endl;
      return; // go back to main()
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      main_menu();  // try again
    }
  }
  
  // FUNCTION DEFINITIONS
  // OK, we have the prototypes at the top, but
  // now we have to actually write the functions.
  // They go here, after main().
  void choice_front_door() {
    cout << "Try the front door." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back." << endl;
    cout << "2. Give up and go home." << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
      choice_back_door();
    } else if (2 == choice) {
      choice_go_home();
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      choice_front_door();  // try again
    }
  }
  
  void choice_back_door() { cout << "You start to turn the corner of the house and see a fence." << endl; 
   sneak_to_back(); }
  
  void choice_go_home() { cout << "You went home after seeing there is no reasonable choice." << endl; }
  
  void sneak_to_back() {
    cout << "While getting over the fence you see a big dog guarding the back." << endl;
    cout << "Do you:" << endl;
    cout << "1. Run as fast as you can to get around the dog." << endl;
    cout << "2. Trick the dog with the granola bar in your backpack." << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        you_got_hurt();
    } else if (2 == choice) {
      opens_back_door();
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      sneak_to_back();  // try again
    }
  }

  void you_got_hurt() { cout << "You weren't faster than the dog and he bit you. You had to go back home." << endl; }

  void opens_back_door() { 
    cout << "You got to the back door, as dog is occupied sniffing the granola bar." << endl;
    cout << "You find the door to be unlocked and walk into the kitchen area." << endl;
    cout << "A sudden loud scratching noise comes from up stairs." << endl;
    cout << "Do you:" << endl;
    cout << "1. Investigate the sound." << endl;
    cout << "2. Leave the haunted house." << endl;
    int choice;
    cout << "Choose:";
    cin >> choice;
    if (1 == choice) {
      investigate_sound(); 
    } else if (2 == choice) {
      choice_go_home();
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      opens_back_door();  // try again
    }
  }

  void investigate_sound() {
    cout << "You walk up the stairs to find a long narrow hallway." << endl;
    cout << "There are two doors at the very end. One on the right and one on the left." << endl;
    cout << "Do you:" << endl;
    cout << "1. Choose the right door." << endl;
    cout << "2. Choose the left door." << endl;
    cout << "3. Give up and go home." << endl;
    int choice;
    cout << "Choose:";
    cin >> choice;
    if (1 == choice){
      choice_right_door();
    } else if (2 == choice) {
      choice_left_door();
    } else if (3 == choice) {
      choice_go_home();
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      investigate_sound();  // try again
    }
  }

  void choice_right_door() {
    cout << "You open the door to see nothing, but as you walked you triggered tripwire. Releasing a huge axe from the ceiling." << endl;
    cout << "Lucky for you it barely missed." << endl;
    cout << "You were frightened by this and you decided to go home." << endl;
  }

  void choice_left_door() {
    cout << "You walk into the room to find an old record playing." << endl;
    cout << "So you pull the record off to only hear a loud laughter coming from the bathroom." << endl;
    cout << "You decide to leave with the record as a sourvine." << endl;
  }