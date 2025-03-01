#include <iostream> // to use cout
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

    //declare a variable
    int age = 23; //<type> <variable_name>
    cout << age << endl;

    age = 50; //can update the value of a variable
    cout << age << endl;

    float price = 24.99f;
    bool hungry = true;
    char dollar = '$';
    cout << price << endl;
    cout << hungry << endl;
    cout << dollar << endl;

    const double PI = 3.1415926535; //const, cannot change value of variable
    //double const PI = 3.1415926535; //can flip type and const order
    //PI = 3.14; //doesn't work because of const
    cout << PI << endl;

    auto number = 100; //auto inferences the type based on value, not recommended for simple types
    cout << number << endl;
}