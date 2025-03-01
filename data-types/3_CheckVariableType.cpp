#include <iostream>
using namespace std;

int main() {
    // Data Types:
    // Numbers (int/short/long, float, double)
    20; 500; -100; 0; //whole numbers
    1.5f; 9.99f; 3.14f; 10.0f; //float (7 place precision)
    1.5; 9.99; 3.14; 10.0; //double (15 place precision)
    
    // Boolean (bool)
    true; false;
    // Character (char)
    'a'; 'B'; '$'; '5';  //character enclosed in single quote
    // String
    "a"; "ABC"; //character(s) enclosed in double quote

    int age = 23; 
    float price = 24.99f;
    double PI = 3.1415926535;
    bool hungry = true;
    char dollar = '$';

    //i = int, f = float, d = double, b = bool, c = char
    cout << typeid(age).name() << endl;
    cout << typeid(price).name() << endl;
    cout << typeid(PI).name() << endl;
    cout << typeid(hungry).name() << endl;
    cout << typeid(dollar).name() << endl;
}