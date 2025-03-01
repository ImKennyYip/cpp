#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    //vector - dynamic array
    // std::vector<std::string> tickets; //add qualifiers std:: if not using namespace std;

    // vector<int> tickets; //empty vector
    // vector<int> tickets = {1000, 2005, 1500};
    // vector<int> tickets({1000, 2005, 1500});
    vector<int> tickets {1000, 2005, 1500};

    //add value to end of the vector
    // tickets.push_back(1000);
    // tickets.push_back(2005);
    // tickets.push_back(1500);

    //access values of a string by index
    cout << tickets[0] << endl;
    cout << tickets[1] << endl;
    cout << tickets[2] << endl;

    cout << tickets.at(0) << endl;
    cout << tickets.at(1) << endl;
    cout << tickets.at(2) << endl;

    //access last value of a vector
    cout << tickets[tickets.size() - 1] << endl;    
    cout << tickets.back() << endl;

    //access first value of a vector
    cout << tickets[0] << endl;
    cout << tickets.front() << endl;

    //add anywhere in the vector
    // tickets.insert(tickets.begin(), 5000);    //{5000, 1000, 2005, 1500}, insert at index 0
    // tickets.insert(tickets.begin()+2, 5000);  //{1000, 2005, 5000, 1500}, insert at index 2
    tickets.insert(tickets.end()-1, 5000);       //{1000, 2005, 5000, 1500}, insert at index 2 (last index)

    //remove from end of the vector
    tickets = {1000, 2005, 1500};
    tickets.pop_back(); //{1000, 2005}
    tickets.pop_back(); //{1000}

    //remove from anywhere in the vector
    tickets = {1000, 2005, 1500};
    tickets.erase(tickets.begin(), tickets.begin()+1); //{2005, 1500} remove from index 0 to 1, not including 1

    //clear the entire vector
    tickets = {1000, 2005, 1500};
    // tickets.erase(tickets.begin(), tickets.end());
    tickets.clear();


    //check size of vector
    cout << tickets.size() << endl;

    //check if vector is empty
    cout << (tickets.size() == 0) << endl;
    cout << tickets.empty() << endl;


    //print out the values of a vector
    cout << '{';
    for (int ticket : tickets) {
        cout << ticket << ' ';
    }
    cout << '}' << endl;


    //vector of strings
    vector<string> languages = {"English", "Spanish", "French"};
    cout << languages[0][5] << endl; //s, language[0] = "English", language[0][5] = "English"[5] = 's'

    cout << '{';
    for (string language : languages) {
        cout << language << ' ';
    }
    cout << '}' << endl;

    cout << languages.size() << endl;  //3
    cout << languages.empty() << endl; //false 0
}