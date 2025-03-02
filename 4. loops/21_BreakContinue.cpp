#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    //break - Terminate the loop
    //continue - Skip the current iteration of the loop

    //paint colors
    vector<string> colors = {"Blue", "Red", "Green", "White", "Black"};
    int paintCost = 10;

    vector<string> colorOrder = {"Blue", "Red", "Blue", "Green", "White", "Black"};
    vector<int> quantityOrder = {6, 15, 9, 5, 3, 5};
    int budget = 200;

    for (size_t i = 0; i < colorOrder.size(); i++) {
        string color = colorOrder[i];
        int quantity = quantityOrder[i];
        int cost = paintCost * quantity;
        cout << "Order#" << i << ": " << color << " x" << quantity << endl;
        if (budget == 0) {
            cout << "Out of Budget! Cancelling remaining orders.\n\n";
            break;
        }
        if (cost > budget) {
            cout << "Skipping order, not enough budget.\n\n";
            continue;
        }
        budget -= cost;
        cout << "-$" << cost << " Remaining Budget: $" << budget << "\n\n";
    }
}









