#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {
    //Tuples are used to group any number of elements together
    //The elements can be of different types
    //Not the same as a Python tuple, which is more like a const array
    tuple<string, string, int> student; //name, course, grade
    student = tuple<string, string, int>("Kenny", "Biology", 90);
    student = make_tuple("Kenny", "Biology", 90);
    student = {"Kenny", "Biology", 90}; //tuple packing

    //access values of tuple at indices
    cout << get<0>(student) << endl;
    cout << get<1>(student) << endl;
    cout << get<2>(student) << endl;

    get<2>(student) = 95; //set tuple at index 2

    //access values of tuple by type
    cout << get<int>(student) << endl;
    cout << get<string>(student) << endl;


    //unpacking and packing
    // auto[name, course, grade] = student;
    string name;
    string course;
    int grade;
    tie(name, course, grade) = student;
    // tie(std::ignore, course, grade) = student; //ignore to skip this index

    cout << name << endl;
    cout << course << endl;
    cout << grade << endl;
}