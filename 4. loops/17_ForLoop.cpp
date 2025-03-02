#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // For Loops - Iterations (repetitions)
    // For Loops are code blocks used to repeat a task a specific # of times
    // 3S = start, stop, step

    //iterate with for loop
    for (int i = 0; i < 10; i++) { //can also do i <= 9
        cout << i << " ";
    }
    cout << endl; //0, 1, 2, 3, 4, 5, 6, 7, 8, 9

    for (int i = 0; i < 10; i += 2) { 
        cout << i << " ";
    }
    cout << endl; //0 2 4 6 8
    
    //iterate backwards with for loop
    for (int i = 9; i >= 0; i--) { // i -= 2
        cout << i << " ";
    }    
    cout << endl;
    

    //factorial
    //n! - product of all numbers from 1 to n
    //3! = 1*2*3 = 6
    int factorial = 1;
    int n = 5;
    cout << "Enter a number: "; //later
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << n << "! factorial = " << factorial << endl;
    

    //modifying vectors
    vector<int> grades = {87, 85, 98, 100, 77, 94};
    
    cout << "BEFORE" << endl;
    for (size_t i = 0; i < grades.size(); i++) { //we use size_t
        cout << grades[i] << " ";
    }
    cout << endl; //87 85 98 100 77 94
    
    for (size_t i = 0; i < grades.size(); i++) { //we use size_t
        grades[i] += 5;
        if (grades[i] > 100) {
            grades[i] = 100;
        }
    }
    cout << endl;
    
    cout << "AFTER" << endl;
    for (size_t i = 0; i < grades.size(); i++) { //we use size_t
        cout << grades[i] << " ";
    }
    cout << endl; //92 90 100 100 82 99
}