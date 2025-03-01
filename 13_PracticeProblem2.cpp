#include <iostream>
using namespace std;

int main() {
    /*
    Write a program that asks the user to input a float representing an amount of money.
    Output how many quarters, dimes, nickels, and pennies are needed to make up that amount.
    Do so greedily, meaning try and use as many quarters as possible, then dimes, then nickels, and then pennies.

    ex) 2.54 = 10 quarters, 0 dimes, 0 nickels, 4 pennies
        1.88 = 7 quarters, 1 dime, 0 nickels, 3 pennies
        10.09 = 40 quarters, 0 dimes, 1 nickel, 4 pennies
    */

    //given
    float total;
    cout << "Enter an amount: ";
    cin >> total;

    int q, d, n, p;
    cout << "$" << total << " is: " << endl;

    //write your code here

    //don't use floating point numbers as there is loss in precision
    /*
    q = total / .25; //2.54/.25 = 10.16
    total -= q*.25;

    d = total / .10;
    total -= d*.10;

    n = total / .05;
    total -= n*.05;

    p = total / .01;
    total -= p*.01;

    cout << total << endl;
    */

    total *= 100; //multiply by factor of 100 to make the values int

    q = total / 25;
    total -= q * 25;

    d = total / 10;
    total -= d * 10;

    n = total / 5;
    total -= n * 5;

    p = total / 1;
    total -= p * 1;

    cout << total << endl;

    //result
    cout << q << " quarters" << endl;
    cout << d << " dimes" << endl;
    cout << n << " nickels" << endl;
    cout << p << " pennies" << endl;
}

