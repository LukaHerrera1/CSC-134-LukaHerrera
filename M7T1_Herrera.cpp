// CSC 134
// M7T1
// Luka Herrera
// 5/2/2025

#include <iostream>
using namespace std;

class Restaurant {
    private:
    string name;
    double rating;

    public:
        Restaurant(string n, double r) {
            name = n;
            rating = r;
        }
        void setName(string n) {
            name = n;
        }

        void setRating(double r) {
            rating = r;
        }
        string getName() const {
            return name;
        }
        double getRating() const {
            return rating;
        }

        void printInfo() {
            cout << "Name: " << name << " ";
            cout << "(" << rating << "/5 stars)" << endl;
        }
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    Restaurant lunch_place = Restaurant("Cheddar's Scratch Kitchen", 3.9);

    Restaurant dinner_place = Restaurant("Olive Garden, 4.4");

    Restaurant breakfast_place = Restaurant("Cracker Barrel", 3.5);
    cout << "Review info" << endl;
    cout << "Breakfast: " << endl;
    breakfast_place.printInfo();

    cout << "Lunch: " << endl;
    lunch_place.printInfo();

    cout << "Dinner: " << endl;
    dinner_place.printInfo();
    
    return 0;
}