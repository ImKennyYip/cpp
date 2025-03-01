#include <iostream>

using namespace std;

int main() {
    // Boolean Logic 
    // and &&, or ||, not !
    // and &&, 1 false -> false, all true -> true
    // or ||, all false -> false, 1 true -> true
    // not !, true -> false, false -> true
    
    // can use and, or, not in place of &&, ||, !, but not encouraged
    cout << true << endl; // true 1
    cout << !true << endl; // false 0
    cout << false << endl; // false 0
    cout << !false << endl; // true 1

    bool hungry = true;
    bool tired = false;
    cout << (hungry && tired) << endl; //false 0
    cout << (hungry || tired) << endl; //true 1

    tired = true;
    cout << (hungry && tired) << endl; //true 1
    
    hungry = false;
    tired = false;
    cout << (hungry && tired) << endl; //false 0
    cout << (hungry || tired) << endl; //false 0


    //Conditional Statements
    bool keyDisabled = false;
    bool keyUp = true;
    bool keyDown = true;
    bool keyLeft = false;
    bool keyRight = false;

    if (!keyDisabled) {
        // if (keyUp == true) {} //no need to do == true, because keyUp is bool
        // true == true is true, false == true is false
        if (keyUp) {
            cout << "player moves up" << endl;
        }
        // if (keyDown) {
        //     cout << "player moves down" << endl;
        // }
        else if (keyDown) {
            cout << "player moves down" << endl;
        } else if (keyLeft) {
            cout << "player moves left" << endl;
        } else if (keyRight) {
            cout << "player moves right" << endl;
        }
        //use else if, if only player can only press one key at a time
    }



    if (!keyDisabled) {
        // you can also omit curly braces
        // if inside an if/else block, there's only one line of code
        if (keyUp) cout << "player moves up" << endl;
        else if (keyDown) cout << "player moves down" << endl;
        else if (keyLeft) cout << "player moves left" << endl;
        else if (keyRight) cout << "player moves right" << endl;
        else cout << "player stays still" << endl;
    }
}

