#include <iostream> 
using namespace std; 

int main() {
    // Data Types:
    // Numbers (int/short/long, float, double)
    20; 500; -100; 0; //whole numbers
    1.5f; 9.99f; 3.14f; 10.0f; //float (7 place precision)
    1.5; 9.99; 3.14; 10.0; //double (15 place precision)
    
    // Numbers
    // float/double -> int, removes decimal place
    // int -> float/double, adds .0 decimal

    int age = 23.5f;  //converts to 23
    float price = 25; //converts to 25.0
    cout << age << endl;
    cout << price << endl;

    // Boolean and Numbers
    // non zero (positive/negative) -> true
    // 0, 0.0f, 0.0 -> false
    bool hungry = 500;           //true 1
    // bool hungry = -500.5656f; //true 1
    // bool hungry = 0;          //false 0
    cout << hungry << endl;

    // true -> 1, not two way conversion
    // false -> 0
    int num = false; //0
    cout << num << endl;

    // Character and Numbers
    // Converts from int to ASCII and vice versa, two way conversion
    char intToChar = 65; //A
    // char intToChar = 66.66f; //66.66f -> 66 (int) -> 'B' (char)
    int charToInt = 'A'; //65
    cout << intToChar << endl;
    cout << charToInt << endl;

    bool charToBool = 'A'; //'A' -> 65 (int) -> true 1 (bool)
    cout << charToBool << endl;
}