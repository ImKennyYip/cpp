#include <iostream>
#include <set> //includes multiset
#include <unordered_set>
#include <vector>
using namespace std;

/*
    A set is a collection of unique elements (no duplicates).
    Order -> by insertion, or by sorted
    In C++:
        A set is in sorted order, whereas in other languages, set may not be sorted.
        An unordered set is not or ordered by insertion, nor sorted.
    A vector is ordered by insertion (not sorted).
*/

template <typename T>
void print(const T& container) {
    for (auto it = container.begin(); it != container.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    vector<char> charVec{'C', 'A', 'B'};
    set<char> charSet{'C', 'A', 'B'};
    unordered_set<char> charSet2{'C', 'A', 'B'};

    // for (auto it = charSet.begin(); it != charSet.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    print(charVec);
    print(charSet);
    print(charSet2);


    //let's say we're writing an email and want to add recipients
    //set is sorted by default
    set<string> emailList{"banana@gmail.com", "orange@gmail.com", "banana@yahoo.com"};
    //unordered_set is not sorted
    // unordered_set<string> emailList{"banana@gmail.com", "orange@gmail.com", "banana@yahoo.com"};
    //multiset - can enter duplicate keys
    //basically same as using a map to map a key to an int for counting frequency
    // multiset<string> emailList{"banana@gmail.com", "orange@gmail.com", "banana@yahoo.com"};
    emailList.insert("orange@gmail.com"); //no change
    emailList.insert("apple@gmail.com");
    emailList.erase("banana@gmail.com");
    print(emailList);

    cout << emailList.size() << endl;
    cout << emailList.count("orange@gmail.com") << endl; //returns 1
    cout << emailList.count("melon@gmail.com") << endl;  //returns 0

    // cout << emailList.contains("orange@gmail.com") << endl; //in c++20

    //maybe we want to keep the email list sorted for human eyes?
    //or maybe we don't care about sorting, ex) blocked sender list
    //anything unique, we would use a set, else vector

    //another thing is multiset, why use? its sorted :), and performance related operations
}

