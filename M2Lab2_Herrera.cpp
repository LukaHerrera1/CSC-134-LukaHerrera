// CSC 134
// M2Lab2 - Experimentation with AI tools (ChatGPT)
// Luka Herrera
// 2/15/2025

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store animal details
struct Animal {
    string name;
    string species;
    int age;
};

// Function to document an animal intake
void documentAnimal(vector<Animal>& shelter) {
    Animal newAnimal;
    cout << "Enter animal name: ";
    cin >> newAnimal.name;
    cout << "Enter species: ";
    cin >> newAnimal.species;
    cout << "Enter age: ";
    cin >> newAnimal.age;
    
    shelter.push_back(newAnimal);
    cout << "Animal documented successfully!\n";
}

// Function to display all documented animals
void displayAnimals(const vector<Animal>& shelter) {
    if (shelter.empty()) {
        cout << "No animals documented in the shelter.\n";
        return;
    }
    
    cout << "Animals documented in the shelter:\n";
    for (const auto& animal : shelter) {
        cout << "Name: " << animal.name << ", Species: " << animal.species << ", Age: " << animal.age << " years\n";
    }
}

int main() {
    vector<Animal> shelter;
    int choice;
    
    while (true) {
        cout << "\nAnimal Shelter Documentation System";
        cout << "\n1. Document Animal Intake";
        cout << "\n2. Display Documented Animals";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                documentAnimal(shelter);
                break;
            case 2:
                displayAnimals(shelter);
                break;
            case 3:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    }
}