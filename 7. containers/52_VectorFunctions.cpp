#include <algorithm>
#include <array>        // std::begin, std::end
#include <iostream>
#include <random>       // std::random_device
#include <vector>
using namespace std;

template <typename T>
void printNumbers(T begin, T end) {
    for (T i = begin; i < end; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    //Algorithm libary - functions to read/modify ranges of data of a container
    //sort, is_sorted, reverse, replace, fill
    //max_element, min_element, find, count, shuffle

    vector<int> numbers {55, 12, 42, 36, 100, 17, 11, 9, 100};
    auto begin = numbers.begin();
    auto end = numbers.end();
    printNumbers(begin, end);

    //include array
    int numbers[] {55, 12, 42, 36, 100, 17, 11, 9, 100};
    auto begin = std::begin(numbers); //this is why namespace std is important
    auto end = std::end(numbers);
    printNumbers(begin, end);

    
    //sort
    cout << "Is sorted before sorting: " << is_sorted(begin, end) << endl;
    sort(numbers.begin(), numbers.end());
    sort(begin, end);
    sort(begin, begin + 5); //doesn't have to be end
    cout << "Is sorted after sorting: " << is_sorted(begin, end) << endl;
    printNumbers(begin, end);


    //reverse
    reverse(begin, end);
    printNumbers(begin, end);

    //replace - replaces all occurences with element
    replace(begin, end, 100, 900);
    printNumbers(begin, end);

    //fill - replaces range with element
    fill(begin, end, 900);
    printNumbers(begin, end);
    

    //max_element - returns iterator of max element
    cout << *max_element(begin, end) << endl;

    //min_element - returns iterator of max element
    cout << *min_element(begin, end) << endl;

    //find - returns iterator of element if found, else end
    cout << (find(begin, end, 100) != end) << endl;

    //count - returns first iterator of element if found, else end
    cout << count(begin, end, 100) << endl;


    //random_shuffle removed from C++17 onwards
    //use shuffle instead, include random
    random_device rd;
    mt19937 gen{rd()}; //Mersenne Twister (MT19937) pseudorandom number generator
    shuffle (begin, end, gen);
    printNumbers(begin, end);
}



