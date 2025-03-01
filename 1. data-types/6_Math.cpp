#include <iostream>
#include <math.h> //for pow()
using namespace std;

int main() {
    //Arithmetic Operators 
    //+ - * / % pow

    int x = 5;
    int y = 2;
    cout << x + y << endl; //7
    cout << x - y << endl; //3
    cout << x * y << endl; //10
    cout << x / y << endl; //2, 5/2 -> 2.5, converts to int

    float z = x/y; //5/2 -> 2 -> 2.0f
    cout << z << endl; //2

    // float x = 5; //converts to 5.0f
    // int y = 2;
    // cout << x + y << endl; //7
    // cout << x - y << endl; //3
    // cout << x * y << endl; //10
    // cout << x / y << endl; //2.5

    cout << 50 + true << endl;   //50 + 1 = 51
    cout << 51.5 + true << endl; //51.5 + 1 = 52.5
    cout << 51.5 + 'A' << endl;  //51.5 + 65 = 116.5, 'A' -> 65 ASCII
    cout << 'B' + 'A' << endl;   //66 + 65 = 131, not "BA", 'B' -> 66, 'A' -> 65
    cout << ('B' + true) - ('A'/2) << endl; //(66+1) - (65/2) -> 67 - 32 = 35

    cout << 1.20 - 1.15 << endl; //0.05
    cout << ((1.20 - 1.15) == 0.05) << endl; //false 0
    //numbers stored as bits, so issue with precision
    //(1.20 - 1.15) = 0.050000000000000044

    //Remainder Division %
    cout << 10 % 3 << endl; //1 (10 / 3 = 3, R1)
    cout << 10 % 2 << endl; //0 (10 /2 = 5, R0), no remainder
    //can also use n % 2, to check if the number, n, is even (divisible by 2)

    // cout << 10 % 4.0 << endl; //error
    

    //Power
    cout << pow(2, 3) << endl; //2^3 = 8
    cout << pow(5, 4) << endl; //5^4 = 625
}