#include <iostream>
using namespace std;

int main() {
    //Arithmetic Operators 
    int x = 10;

    // x += 1; //11
    // x += 5; //15
    // x -= 5; //5
    // x *= 5; //50
    // x /= 5; //2
    // cout << x << endl;


    // Increment ++ Decrement --
    // x++; //11 Post Increment
    // x--; //9 Post Decrement

    // ++x; //11 Pre Increment
    // --x; //9 Pre Decrement

    // Pre vs Post Increment
    x = 10;
    cout << "Before: " << ++x << endl; //11, increment first, then print
    cout << "After: " << x << endl; //11
    x = 10;
    cout << "Before: " << x++ << endl; //10, print first, then increment
    cout << "After: " << x << endl; //11

    // Pre vs Post Decrement
    x = 10;
    cout << "Before: " << --x << endl; //9, increment first, then print
    cout << "After: " << x << endl; //9
    x = 10;
    cout << "Before: " << x-- << endl; //10, print first, then increment
    cout << "After: " << x << endl; //9

    x = 10;
    // x++++; //error, cannot chain post increment/decrement
    ++++x; //12
    cout << x << endl; //12

    // cannot chain post increment because:
    // x++, make a copy of x, x + 1, return copy of x
    // ++x, x + 1, return x (no copy needed)
    // no point in doing ++++++x, just do x += 3 instead
}