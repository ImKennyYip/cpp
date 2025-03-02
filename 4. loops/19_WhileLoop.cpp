#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // while loops are used to repeat a block of code 
    // an unspecified number of times until a condition is met

    vector<string> cities = {"New York", "London", "Paris", "Tokyo", "Dubai"};

    for (size_t i = 0; i < cities.size(); i++) {
        cout << i << ": " << cities[i] << endl;
    }

    //infinite while loop
    // size_t i = 0;
    // while (i < cities.size()) { //never ends because i never changes
    //     cout << i << ": " << cities[i] << endl;
    // } if you run this, press Ctrl + C to terminate the program

    size_t i = 0;
    while (i < cities.size()) { //never ends because i never changes
        cout << i << ": " << cities[i] << endl;
        ++i; //increment i to avoid infinite while loop
    } 

    //using a while loop to find a value
    string targetCity = "London";
    bool found = false;

    for (size_t i = 0; i < cities.size(); i++) {
        cout << i << ": " << cities[i] << endl;
        if (cities[i] == targetCity) {
            found = true;
            break; //early exit, if found, terminate the for loop
        }
    }

    i = 0;
    while (i < cities.size() && !found) {
        cout << i << ": " << cities[i] << endl;
        if (cities[i] == targetCity) {
            found = true;
        }
        i++;
    }

    if (found) {
        cout << targetCity << " FOUND!" << endl;
    }
    else {
        cout << targetCity << " NOT FOUND!" << endl;
    }
}