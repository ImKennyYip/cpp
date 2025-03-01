#include <iostream>

using namespace std;

int main() {
    //Conditional Statements
    int grade = 97;
    char letterGrade;

    if (grade >= 65) letterGrade = 'P';
    else letterGrade = 'F';

    //Ternary Operator -> (condition) ? A : B
    letterGrade = (grade >= 65) ? 'P' : 'F';
    cout << "Final Grade: " << letterGrade << endl;


    //Ternary Opeartors
    bool withdrawn = 'W';
    if (grade >= 65) {
        letterGrade = 'P';
    }
    else {
        if (withdrawn) {
            letterGrade = 'W';
        }
        else {
            letterGrade = 'F';
        }
    }
    letterGrade = (grade >= 65) ? 'P' : (withdrawn) ? 'W' : 'F';
    

    //Multiple Ternary Operators
    if (grade >= 90) cout << "You get an A" << endl;
    else if (grade >= 80) cout << "You get a B" << endl;
    else if (grade >= 70) cout << "You get a C" << endl;
    else if (grade >= 60) cout << "You get a D" << endl;
    else cout << "You get a F" << endl;

    letterGrade = (grade >= 90) ? 'A' : (grade >= 80) ? 'B' : (grade >= 70) ? 'C' : (grade >= 60) ? 'D' : 'E';
}

