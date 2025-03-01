#include <iostream>
using namespace std;

int main() {
    // int x = 25;
    // int y = 30;
    // int z = 45;

    // declare and assign later
    // int x;
    // int y;
    // int z;

    // int x, y, z; //single line declare multiple variables
    // x = 25;
    // y = 30;
    // z = 45;

    // int x, y, z;
    // x = y = z = 30; //assign same value to multiple variables

    // int x, y, z = 30; //declare variables, only assign z
    // int x = 45, y = 25, z = 30; //declare and assign multiple variables

    // auto takes the type of first value, so all double
    // inconsistent so can't be used in single line
    // auto x = 45.5, y = 25, z = 30.5f; 

    auto x = 45, y = 25, z = 30; //auto is int, same type for all values

    // auto x, y, z; //cannot use auto since there's no type to inference
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
}