#include <iostream>
#include <string>

using namespace std;

int main() {
    // while loops are used to repeat a block of code 
    // an unspecified number of times until a condition is met
    // do while loop executes code first, and then checks the condition
    // do while loop guarantees at least one iteration

    string guessWord = "Kenny";
    string inputWord;
    int guessTurn = 1;

    // using while loop

    // cout << "Guess #" << guessTurn++ << endl;
    // getline(cin, inputWord);

    // while (inputWord != guessWord && !inputWord.empty()) {
    //     cout << "Guess #" << guessTurn++ << endl;
    //     getline(cin, inputWord);
    // }

    //same code, but with do while loop
    do {
        cout << "Guess #" << guessTurn++ << endl;
        getline(cin, inputWord);        
    } while (inputWord != guessWord && !inputWord.empty());

    if (inputWord.empty()) {
        cout << "Quit Game!" << endl;
    }
    else {
        cout << "Correct Guess!" << endl;
    }
}