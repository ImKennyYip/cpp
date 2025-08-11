#include <iostream>
#include <map> //includes multimap
#include <unordered_map>
#include <string>
using namespace std;
/*
    A map is a collection of key-value pairs: K -> V
        Keys must be unique whereas the values do not have to be unique
        ex) dictionary, words are unique but definitions are not
            pricing, items are unique but prices are not
            counting, candidates are unique, count is not

    Order -> by insertion, or by sorted
    In C++:
        Similar to a set, a map is in sorted ordered 
        If you don't care about sorted order, you can use an unordered_map
        An unordered map is not ordered by insertion nor is it sorted
    A vector is ordered by insertion (not sorted).
*/
int main() {
    map<string, float> fruits; //key - string, value - float
    fruits["apple"] = 1.10;
    fruits["apple"] = 5.55; //update key
    fruits.at("apple") = 5.55;

    //insert does not update existing key, only adds if it doesn't exist
    fruits.insert(pair<string, float>("banana", 1.50)); //can insert pair
    fruits.insert(make_pair("banana", 1.50)); //can insert pair
    fruits.insert({"banana", 2.50}); //can pack pair

    cout << fruits["apple"] << endl; //does not error check
    cout << fruits.at("apple") << endl; //throws error if key does not exist
    
    
    //map is sorted by default
    map<string, float> fruits2 {
        {"orange", 1.25},
        {"apple", 1.50},
        {"banana", 2.20},
        {"pear", 1.50},
        {"lemon", 2.25}
    };

    //unsorted map
    // unordered_map<string, float> fruits2 {
    //     {"orange", 1.25},
    //     {"apple", 1.50},
    //     {"banana", 2.20},
    //     {"pear", 1.50},
    //     {"lemon", 2.25}
    // };

    //multimap - single key can have multiple values
    //basically same as mapping a key to an array/vector for value
    // multimap<string, float> fruits2 {
    //     {"orange", 1.25},
    //     {"apple", 1.50},
    //     {"banana", 2.20},
    //     {"pear", 1.50},
    //     {"lemon", 2.25}
    // };

    fruits2.insert({"lemon", 1.99});
    fruits2["lemon"] = 1.99;

    //iterate using range for with pairs
    for (pair<string, float> fruit : fruits2) {
        cout << fruit.first << " " << fruit.second << endl;
    }

    for (auto fruit : fruits2) {
        cout << fruit.first << " " << fruit.second << endl;
    }

    //iterate using range for with iterators
    for (map<string, float>::iterator it = fruits.begin(); it != fruits.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    //itearate using range for with unpacking pair
    for (auto [fruit, price] : fruits) {
        cout << fruit << " " << price << endl;
    }

    for (const auto &[fruit, price] : fruits) { //const reference
        cout << fruit << " " << price << endl;
    }
    
    fruits2.clear(); //clear map
}

