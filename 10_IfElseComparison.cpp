#include <iostream>

using namespace std;

int main() {
    // Comparison < <= > >= == !=
    // < less than, <= less than or equal to
    // > greater than, >= greater than or equal to
    // == equal, != not equal

    int x = 10;
    cout << (x == 10) << endl; //true 1
    cout << (x == 15) << endl; //false 0
    cout << (x != 15) << endl; //true 1
    cout << (x < 15) << endl;  //true 1
    cout << (x > 15) << endl;  //false 0

    //Conditional Statements
    int grade = 95;

    if (grade >= 90) cout << "You get an A" << endl;
    else if (80 <= grade && grade < 90) cout << "You get a B" << endl;
    else if (70 <= grade && grade < 80) cout << "You get a C" << endl;
    else if (60 <= grade && grade < 70) cout << "You get a D" << endl;
    else cout << "You get a F" << endl;
}

