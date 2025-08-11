#include <iostream>
#include <string> //includes <cctype>
using namespace std;

int main() {
    //tolower, toupper - returns converted char
    //islower, isupper, isalpha, isalnum, isspace, isdigit - returns non zero int
    //0 -> false, non 0 -> true

    //usernames are not case-sensitive
    string username = "kenny123"; //always store in lower case
    string inputUsername;
    cout << "Enter your username:";
    cin >> inputUsername;
    //convert inputUsername to all uppercase/lowercase
    for (size_t i = 0; i < inputUsername.size(); i++) {
        // inputUsername[i] = toupper(inputUsername[i]);
        inputUsername[i] = tolower(inputUsername[i]); //convert all to lower for comparsion
    }
    if (username != inputUsername) {
        cout << "Incorrect Username!" << endl;
    }
    cout << username << endl;
    cout << inputUsername << endl;


    //passworsd are case-sensitive
    string password;
    int digitCount = 0;
    int lowerCount = 0;
    int upperCount = 0;
    cout << "Enter a password (at least 3 digits, 3 lower, 3 upper):";
    cin >> password;
    bool hasNonAlnum = false;

    for (size_t i = 0; i < password.size(); i++) {
        char c = password[i];
        // if (isdigit(c) != 0) {
        //     digitCount += 1;
        // }
        // else {
        //     digitCount += 0;
        // }
        digitCount += isdigit(c) != 0; //use implicit conversion bool true -> 1, false -> 0
        lowerCount += islower(c) != 0;
        upperCount += isupper(c) != 0;
        if (isalnum(c) == 0) {
            hasNonAlnum = true;
            break;
        }
    }

    cout << digitCount << endl;
    cout << lowerCount << endl;
    cout << upperCount << endl;
    if (hasNonAlnum) {
        cout << "Invalid Password, invalid character!" << endl;
    }
    else if (digitCount < 3 || lowerCount < 3 || upperCount < 3) {
        cout << "Invalid Password, must have at least 3 digits, 3 lower, 3 upper!" << endl;
    }
    
}



