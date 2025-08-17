#include <iostream>
#include <fstream> //file stream
#include <sstream> //string stream
#include <string>
#include <map>
#include <vector>

using namespace std;

void parseCsvFile(const string& fileName, map<string, vector<int>>& studentGradesMap) {
    // cout << fileName << endl;

    ifstream myFile(fileName);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            stringstream ss(line);
            string student;
            getline(ss, student, ',');
            // cout << student << " ";
            studentGradesMap.insert({student, vector<int>()}); //only adds if key doesn't exist

            string grade;
            getline(ss, grade, ',');
            // cout << grade << endl;
            studentGradesMap[student].push_back(stoi(grade));
        }
    }
    myFile.close();
}

int main() {
    // given 3 csv files containing student and their grades for exams 1, 2, and 3
    // "student-grades1.csv", "student-grades2.csv", "student-grades3.csv"
    // write a program to read the csv files, and create a csv file called "student-grades-final.csv"
    // this new file combines the columns of each student exam grade in alphabetical order
    // e.g. Apple,87,94,97

    map<string, vector<int>> studentGradesMap;
    parseCsvFile("student-grades1.csv", studentGradesMap);
    parseCsvFile("student-grades2.csv", studentGradesMap);
    parseCsvFile("student-grades3.csv", studentGradesMap);

    ofstream outputFile("student-grades-final.csv");
    if (outputFile.is_open()) {
        for (const auto&[student, grades] : studentGradesMap) {
            // cout << student;
            outputFile << student;
            for (int grade : grades) {
                // cout << "," << grade;
                outputFile << "," << grade;
            }
            // cout << endl;
            outputFile << endl;
        }
    }
    outputFile.close();
}