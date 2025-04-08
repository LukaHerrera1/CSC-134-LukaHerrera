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
void you_get_to_back_door();

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
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
      choice_back_door();
    } else if (2 == choice) {
      choice_go_home();
    }
  }
  
  void choice_back_door() { cout << "You opened the back door." << endl; }
  
  void choice_go_home() { cout << "You went home." << endl; }
  
  void sneak_to_back(){
    cout << "While getting over the fence you see a big dog barking." << endl;
    cout << "Do you:" << endl;
    cout << "1. Run as fast as yuo can to get around the dog." << endl;
    cout << "2. Trick the dog with some food." << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        you_got_hurt();
    } else if (2 == choice) {
        you_get_to_back_door();
    }
  }

  void you_got_hurt() { cout << "You weren't faster than the dog and he bit you. You had to go home." << endl; }

  void you_get_to_back_door() { cout << "You get to the back door, as dog is occupied while eating." << endl; }

