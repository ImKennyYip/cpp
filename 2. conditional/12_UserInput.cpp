#include <iostream> //io = input output stream
#include <string>
using namespace std;

int main() {
    //Get User Input
    string name = "Kenny";
    int age = 33;
    char sex = 'M';

    cout << "Enter your name: ";
    cin >> name; //Kelly
    cout << "Enter your age: ";
    cin >> age; //25
    cout << "Enter your sex: ";
    cin >> sex; //F

    cout << endl << "Name: " << name << ", Age: " << age << ", Sex: " << sex << endl;


    //Get User Input single line
    cout << "Enter your name, age, and sex, separated by white space: ";
    cin >> name >> age >> sex; //Kenny 25 M

    cout << endl << "Name: " << name << ", Age: " << age << ", Sex: " << sex << endl;


    //Use getline if you want to enter a string with spaces for one value
    cout << "Enter your name: ";
    getline(cin, name); //Kenny Yip
    cout << "Enter your age: ";
    cin >> age; //25
    cout << "Enter your sex: ";
    cin >> sex; //M

    cout << endl << "Name: " << name << ", Age: " << age << ", Sex: " << sex << endl;
}

