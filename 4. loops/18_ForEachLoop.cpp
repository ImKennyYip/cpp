#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    //For Loops - Iterations (repetitions)
    //For Each Loops (Ranged Based For Loops)
    //#1) cannot iterate backwards
    //#2) cannot change the values in a vector/string (unless using reference &, not covered in the series thus far)

    //iterate through a vector
    vector<int> grades = {87, 85, 92, 100, 77, 94};
    for (size_t i = 0; i < grades.size(); i++) {
        cout << grades[i] << " ";
    }
    cout << endl; //87 85 92 100 77 94
    
    for (size_t i = 0; i < grades.size(); i++) {
        grades[i] += 5;
    }

    //cannot be used to modify the value at each index
    //instead, it modifies the variable
    // for (int grade : grades) {
    //     grade += 5;
    // }

    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl; //87 85 92 100 77 94


    //iterate through a vector backwards
    grades = {87, 85, 92, 100, 77, 94};
    //issue is size_t is unsigned int, so after 0, it goes to max int, can never be negatiev
    // for (size_t i = grades.size()-1; i >= 0; i--) {
    //         cout << grades[i] << " ";
    //     }
    // }
    for (int i = grades.size()-1; i >= 0; i--) {
        cout << grades[i] << " ";
    }
    cout << endl; // 94 77 100 92 85 87

    //iterate through a string
    string myName = "Kenny";
    for (char letter : myName) {
        cout << letter << " ";
    }
    cout << endl; // K e n n y

    //iterate through a vector of strings
    vector<string> languages = {"English", "Spanish", "French"};
    //assigns a copy to string language, unless you use a reference, use const
    //use const string& if you are not modifying the string to avoid copying
    for (const string& language : languages) {
        cout << language << " ";
    }
    cout << endl; //English Spanish French
}