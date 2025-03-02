#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    //Nested Arrays (Arrays containing Arrays)
    //2D Arrays = Matrix

    //matrix of strings with arrays
    string currencies[5][3] = {
        {"USA", "USD", "Dollar"},
        {"Canada", "CAD", "Dollar"},
        {"UK", "GBP", "Pound"},
        {"Spain", "EUR", "Euro"},
        {"France", "EUR", "Euro"}
    };

    for (int i = 0; i < 5; i++) {
        // cout << currencies[i][0] << " " << currencies[i][1] << " " << currencies[i][2] << endl;
        //use for loop instead
        for (int j = 0; j < 3; j++) {
            cout << currencies[i][j] << " ";
        }
        cout << endl;
    }

    //matrix to represent a tic tac board
    char tictactoe[3][3] = {
        {' ', 'X', ' '},
        {'O', 'X', 'O'},
        {' ', ' ', 'O'}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tictactoe[i][j];
        }
        cout << endl;
    }

    tictactoe[2][1] = 'X'; //update a 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tictactoe[i][j];
        }
        cout << endl;
    }


    //matrix of strings with vectors
    //with vectors, each vector can be of a different size
    vector<vector<string>> studentClasses = {
                                                {"Chemistry", "Algebra", "English"}, 
                                                {"French"}, 
                                                {"Chemistry", "Physics"},
                                                {"English", "Economics", "Statistics"}
                                            };
    studentClasses[2].push_back("Geography");

    for (size_t i = 0; i < studentClasses.size(); i++) {
        for (size_t j = 0; j < studentClasses[i].size(); j++) {
            cout << studentClasses[i][j] << " ";
        }
        cout << endl;
    }
}
