#include <iostream>
#include <string>
using namespace std;

int main() {
    // A switch statement creates a jump/ look-up table for comparing a single value
    // Instead of going through an if/else ladder, a switch statement maps a value to a case
    // Unlike in Java, we cannot compare std::string with switch case statements

    // HP = health points, MP = magic points
    // red potion, hamburger - Recovered 50 HP.
    // green potion - Cured poison status.
    // blue potion - Recovered 20 MP.
    // super red potion - Attack strength increased. Recovered 50 HP.
    string items[] = {"red potion", "green potion", "blue potion", "hamburger", "super red potion"};
    
    int item = 4; //index refers to item

    switch(item) {
        case 4:
            cout << "Attack strength increased." << endl;
        case 3:
        case 0:
            cout << "Recovered 50 HP." << endl;
            break;

        case 1:
            cout << "Cured poison status." << endl;
            break;
        case 2:
            cout << "Recovered 20 MP." << endl;
            break;
        default:
            cout << "Nothing happened." << endl;
    }
}