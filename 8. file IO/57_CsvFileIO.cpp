#include <iostream>
#include <fstream> //file stream
#include <sstream> //string stream
#include <string>

using namespace std;

int main() {
    // fstream - include read (ios::in), write (ios::out), append (ios::app) modes
    // ofstream - write only (will overwrite the file if it already exists!)
    // ifstream - read only
    // csv (comma separate value), data values separated by commas (no space)

    string students[] {"Apple", "Banana", "Cherry", "Orange", "Pear", "Watermelon"};
    int grades[] {87, 91, 97, 85, 94, 100};
    int studentCount = 6;

    //read
    // fstream myFile;
    // myFile.open("student-grades.csv", ios::out);
    fstream myFile("student-grades.csv", ios::out);

    // fstream myFile("student-grades.csv", ios::out); can declare with file
    if (myFile.is_open()) {
        for (int i = 0; i < studentCount; i++) {
            myFile << students[i] << "," << grades[i] << endl;
        }
    }
    myFile.close(); //free up resources


    //append
    myFile.open("student-grades.csv", ios::app);
    if (myFile.is_open()) {
        myFile << "Lemon,93" << endl;
    }
    myFile.close(); //free up resources


    //ofstream - output/write only
    ofstream outputFile("student-grades.csv");
    if (outputFile.is_open()) {
        for (int i = 0; i < studentCount; i++) {
            outputFile << students[i] << "," << grades[i] << endl;
        }
    }
    outputFile.close(); //free up resources





    //read with >>
    // fstream myFile;
    // fstream myFile("student-grades.csv", ios::in);
    myFile.open("student-grades.csv", ios::in);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            // cout << line << endl;
            stringstream ss(line);
            string student;
            getline(ss, student, ',');
            cout << student << " ";

            string grade;
            getline(ss, grade, ',');
            cout << grade << endl;
        }
    }
    myFile.close(); //free up resources


    //ifstream - read only
    ifstream inputFile;
    inputFile.open("student-grades.csv");
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            // cout << line << endl;
            stringstream ss(line);
            string student;
            getline(ss, student, ',');
            cout << student << " ";

            string grade;
            getline(ss, grade, ',');
            cout << grade << endl;
        }
    }
    inputFile.close(); //free up resources
}