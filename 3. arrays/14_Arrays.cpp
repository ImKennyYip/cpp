#include <iostream>
using namespace std;

//Arrays
//NOT THE SAME AS A DYNAMIC ARRAY
//Python List, JavaScript Array, Java ArrayList, C++ Vector

int main() {
    int tipOption1 = 12;
    int tipOption2 = 15;
    int tipOption3 = 18;

    //Arrays are used to store multiple values
    /*
    int tipOptions[3]; //declare an array that can hold 3 values of type int
    tipOptions[0] = 12; //index starts at 0 instead of 1, first element is at index 0
    tipOptions[1] = 15;
    tipOptions[2] = 18;
    */
    
    const int tipOptions[] = {12, 15, 18};
    cout << tipOptions[0] << endl; //12
    cout << tipOptions[1] << endl; //15
    cout << tipOptions[2] << endl; //18

    //check length/size of array -> byte size of array / byte size of one elemnt
    cout << sizeof(tipOptions) << endl; //12 bytes total
    cout << sizeof(tipOptions[0]) << endl; //4 bytes, first element
    cout << sizeof(tipOptions) / sizeof(tipOptions[0]) << endl; //3 elements

    //memory addresses, each one 4 bytes apart, because int size is 4 bytes
    cout << tipOptions << endl;     //example 0xb0e27ff768
    cout << tipOptions + 1 << endl; //example 0xb0e27ff76c
    cout << tipOptions + 2 << endl; //example 0xb0e27ff770

    const char directions[4] {'W', 'A', 'S', 'D'};

    string languages[3] {"English", "Spanish", "Italian"};
    cout << languages[2] << endl; //Italian
    languages[2] = "French";
    cout << languages[2] << endl; //French
}









