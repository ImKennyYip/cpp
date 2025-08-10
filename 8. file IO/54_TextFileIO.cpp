#include <iostream>
#include <fstream> //file stream
#include <string>

using namespace std;

int main() {
    // fstream - include read (ios::in), write (ios::out), append (ios::app) modes
    // ofstream - write only (will overwrite the file if it already exists!)
    // ifstream - read only

    //read
    fstream myFile;
    // myFile.open("sample2.txt"); //must include mode
    myFile.open("sample.txt", ios::out);

    // fstream myFile("sample.txt", ios::out); can declare with file
    if (myFile.is_open()) {
        myFile << "Hello World" << endl;
        // myFile << "Kenny Yip Coding" << endl;
    }
    myFile.close(); //free up resources


    //append
    myFile.open("sample.txt", ios::app);
    if (myFile.is_open()) {
        myFile << "Kenny Yip Coding" << endl;
    }
    myFile.close(); //free up resources


    //ofstream - output/write only
    ofstream outputFile("sample.txt");
    if (outputFile.is_open()) {
        outputFile << "Hello World" << endl;
    }
    outputFile.close(); //free up resources


    //read with >>
    myFile.open("sample.txt", ios::in);
    if (myFile.is_open()) {
        string line;
        int lineNumber = 1;
        //use >>
        while (myFile >> line) { //separating by space
            cout << lineNumber++ << ". " << line << endl;
        }
    }
    myFile.close(); //free up resources


    //read with getline
    myFile.open("sample.txt", ios::in);
    if (myFile.is_open()) {
        string line;
        int lineNumber = 1;
        //use getline function
        while (getline(myFile, line)) { //separating by line
            cout << lineNumber++ << ". " << line << endl;
        }
    }
    myFile.close(); //free up resources

    
    //ifstream - read only
    ifstream inputFile;
    inputFile.open("sample.txt");
    if (inputFile.is_open()) {
        string line;
        int lineNumber = 1;
        while (getline(inputFile, line)) {
            cout << lineNumber++ << ". " << line << endl;
        }
    }
    inputFile.close(); //free up resources
}