#include <iostream>
using namespace std;

int main() {
    //Arithmetic Operators 
    int x = 5;
    int y = 2;
    // float z = x/y; //5/2 -> 2 -> 2.0f
    // cout << z << endl; //2

    // float z = (float) x/y; //converts x to float first -> 5.0f/2 = 2.5f
    float z = x/(float) y; //converts y to float first -> 5/2.0f = 2.5f

    cout << z << endl; //2.5f
    cout << (char) z << endl; //☻
}