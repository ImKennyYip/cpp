#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Math + - * / ++ --
    //CMath min, max, abs, floor, ceil, round, pow, sqrt
    //Other CMath log, sin, cos, tan, etc


    //min, max
    int x = 20;
    int y = 100;
    cout << min(x, y) << endl;
    cout << max(x, y) << endl;

    int grades[] = {75, 99, 92, 85, 97};
    for (int i = 0; i < 5; i++) {
        // grades[i] += 5;
        // if (grades[i] > 100) {
        //     grades[i] = 100;
        // }
        grades[i] = min(grades[i]+5, 100); //same as above
    }

    //abs
    int kennyAge = 18;
    int kennyDadAge = 50;
    int ageDifference = abs(kennyAge - kennyDadAge); //no need to put higher number first
    cout << ageDifference << endl;

    //floor, ceil, round
    float a = 12.34;
    float b = 16.47;

    cout << floor(a+b) << endl;
    cout << ceil(a+b) << endl;
    cout << round(a+b) << endl;

    //pow - quadratic formula
    int A = 3;
    int B = 4;
    int C = pow(A, 2) + pow(B, 2); //C^2 = A^2 + B^2
    cout << C << endl;

    cout << sqrt(25) << endl;
    cout << pow(25, 0.5) << endl;

    //sqrt - distance formula
    float point1[] = {10, 25};
    float point2[] = {12, 30}; //d = sqrt((x1-x2)^2 + (y1-y2)^2)
    float distance = sqrt(pow((point1[0] - point2[0]), 2) + pow((point1[1] - point2[1]), 2));
    cout << distance << endl;

    if (distance <= 6) {
        cout << "Enemy attacks player" << endl;
    }
}

