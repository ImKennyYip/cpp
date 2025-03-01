#include <iostream>
using namespace std;

int main() {
    /*
    Write a program that asks the user to input an amount in quarters, then in dimes, nickels, and then pennies.
    Sum up the value of the coins and output the total. Assume the user will input a positive integer for the 4 inputs.
    Also be sure to output a statement before each input staetment so the user knows what to input.

    ex) 5 quarters, 6 dimes, 3 nickels, 7 pennies should output $2.07
        12 quarters, 2 dimes, 10 nickels, 18 pennies should output $3.88
        3 quarters, 0 dimes, 19 nickels, 65 pennies should output $2.35
    */

    //given
    float total;
    int q, d, n, p;

    //write your code here
    cout << "How many quarters do you have? ";
    cin >> q;
    cout << "How many dimes do you have? ";
    cin >> d;
    cout << "How many nickels do you have? ";
    cin >> n;
    cout << "How many pennies do you have? ";
    cin >> p;

    total = q*.25 + d*.10 + n*.05 + p*.01;

    //result
    cout << "Your total is: $" << total << endl;
}

