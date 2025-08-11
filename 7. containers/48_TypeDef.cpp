#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

// typedef pair<string, int> Student;
using Student = pair<string, int>;
// using StudentList = vector<Student>;
typedef vector<Student> StudentList;

int main() {
    // typedef is used for aliasing data types, user-defined data types, and pointers.
    // used to give a more meaningful name and shorter to type

    Student s1("Kenny", 18);
    cout << s1.first << " " << s1.second << endl;

    StudentList students;
    students.push_back(s1);
    cout << students[0].first << endl;
}