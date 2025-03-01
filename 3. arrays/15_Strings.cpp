#include <iostream> //also includes <string>
#include <string>

using namespace std;

//Strings
int main() {
    //C++, originally called "C with Classes"
    //string = array of characters
    //strings in c++ are mutable


    //create a string
    // std::string myName = "Kenny"; //add qualifiers std:: if not using namespace std;
    // std::cout << myName << std::endl;

    string myName = "Kenny";
    string myName2("Kenny");
    // string myName2; //"", empty string, not null
    // string myName2 = {'K', 'e', 'n', 'n', 'y'};
    char myName3[] = "Kenny"; //C String


    //access characters of a string by index
    cout << myName << endl;
    cout << myName[0] << endl;
    cout << myName[3] << endl;

    cout << myName.at(0) << endl;
    cout << myName.at(3) << endl;


    //check length/size of string
    cout << myName.length(); //5
    cout << myName.size(); //5

    //check if string is empty
    cout << (myName.length() == 0) << endl;
    cout << (myName.size() == 0) << endl;
    
    cout << (myName == "") << endl;
    cout << myName.empty() << endl;


    //access last character of a string
    cout << myName[myName.length() - 1] << endl;    
    cout << myName[myName.size() - 1] << endl;
    cout << myName.back() << endl;

    //access first character of a string
    cout << myName[0] << endl;
    cout << myName.front() << endl;


    //strings are mutable in C++, unlike in Python, Java, etc
    //can modify and add characters in a string
    myName[1] = '@'; //K@nny
    myName += '!';   //K@nny!
    myName += "C++"; //K@nny!C++
    //myName = myName + "C++";
    cout << myName << endl; //K@nny!C++

    //add to end of string
    myName = "Kenny";
    myName.push_back('!');   //Kenny!, same as += '!'
    myName.append(5, '*');   //Kenny!*****, append(# of times, char)
    myName.append("CODING"); //Kenny!*****CODING
    cout << myName << endl;  //Kenny!*****CODING


    //add anywhere in the string
    myName = "Kenny";
    myName.insert(0, "AAAAA"); //AAAKenny
    myName.insert(3, "$$$");   //AAA$$$Kenny


    //delete character from the end of the string
    myName = "Kenny";
    myName.pop_back();  //Kenn
    myName.pop_back();  //Ken

    //delete character from anywhere in the string
    myName = "Kenny";
    myName.erase(1, 3); //Ky (index, how many characters from this index)

    cout << myName << endl;
}



