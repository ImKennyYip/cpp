#include <iostream>
#include <string>
#include <utility>
#include <cmath>
using namespace std;

int getDistance(const pair<int, int>& p1, const pair<int, int>& p2) { //cmath
    auto[x1, y1] = p1;
    auto[x2, y2] = p2;
    //if not using namespace std, need to do std::sqrt, std::pow
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    //Pairs are used to group 2 elements together
    //The 2 elements can be of different types (heterogenous types)
    
    // defining a pair
    // pair<string, int> student;

    // student.first = "Kenny";
    // student.second = 18;
    
    // pair<string, int> student("Kenny", 18);
    pair<string, int> student;
    
    // student = pair<string, int>("Kenny", 18); //use constructor syntax
    // student = pair<>("Kenny", 18); //use constructor syntax, doesn't work
    // student = make_pair<string, int>("Kenny", 18); //make pair
    // student = make_pair<>("Kenny", 18); //make pair can do type inference
    // student = make_pair<>("Kenny", "Yip"); //doesn't work
    student = {"Kenny", 18}; //packing
    auto[name, age] = student; //unpacking, auto will type inference
    
    cout << student.first << " " << student.second << endl;
    cout << name << " " << age << endl;

    //pairs can be used to represent coordinates
    pair<int, int> p1(10, 15);
    pair<int, int> p2(13, 19);
    cout << getDistance(p1, p2) << endl; 
}