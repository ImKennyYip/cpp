#include <iostream>
#include <sstream> //string stream
#include <string>

using namespace std;

int main() {
    // string stream - used to parse and format strings
    // basically iostream but instead of input/output with console, you have strings

    int a = 50;
    int b = 100;
    int result = a + b;
    string display;

    // display = a + " + " + b + " = " + result;
    //use std::to_string to convert an int to string for concatenation
    display = to_string(a) + " + " + to_string(b) + " = " + to_string(result);
    cout << display << endl;



    //use std::stringstream
    stringstream ss;
    ss << a << " + " << b << " = " << result << endl;
    // ss >> display;
    // cout << display << endl; //50? separated by space, so 50 is first in the stream

    // while (ss >> display) {
    //     cout << display << endl; //get each string value separated by whitespace
    // }

    getline(ss, display); //gets one line (separate by endline)
    cout << display << endl;

    ss << a << " * " << b << " = " << a*b << endl;

    //what if you want everything in the stream?
    display = ss.str();
    cout << display << endl;

    ss.str(""); //replaces stringstream with empty
    ss.clear(); //clears any errors within the stream


    
    //format/extract values
    //let's say I am reading from a file and these are the student's grades
    //I want to calculate the average, how can I do so?

    string grades = "95,85,75,92,88,96,81";
    string grade;
    int totalGrade;
    int numGrade = 0;

    ss.str(grades); //replace stringstream with string grades
    cout << ss.str() << endl;

    // getline(ss, grades, ','); //stream, string variable, delimiter

    while (getline(ss, grade, ',')) {
        cout << grade << endl;
        totalGrade += stoi(grade); //std::stoi string to int
        numGrade++;
    }

    ss.str("");
    ss.clear();
    ss << "Average: " << totalGrade/numGrade << endl << grades << endl;
    cout << ss.str() << endl;
}