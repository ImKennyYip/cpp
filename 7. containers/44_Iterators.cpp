#include <iostream>
#include <set>
#include <vector>

using namespace std;

/*
    Iterators are containers that function like pointers.
    Basically, they are generalized wrappers for pointers.
    
    OutputIterator - can write (mutable)
    InputIterator - can read
        ForwardIterator - can only move forward +
            BidirectionalIterator - can move forward + and backward -
                RandomAccessIterator - can jump to a point with + or - number
    
    vector/deque - RandomAccess
    forward_list - Forward
    list (Doubly Linked List) - Bidirectional
    set/map/multimap - Bidirectional
*/
    

template <typename T>
void print(const T& container) { //I can use this function to print elements from any container
    auto it = container.begin(); //it, iter = iterator
    while (it != container.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}


int main() {
    vector<int> numbers {5, 10, 65, 24, 17};
    // cout << numbers.begin() << endl; //can't print an iterator unlike pointer
    cout << *numbers.begin() << endl; //dereference
    cout << *(numbers.begin() + 2) << endl; //we get 65

    
    //we can assign
    // vector<int>::iterator start = numbers.begin();
    auto start = numbers.begin(); //begin/end = iterator, just write auto to infer
    cout << *start << endl; //dereference
    // cout << *(start + 2) << endl; //we get 65
    start += 2; //can also do
    cout << *start << endl;

    
    //bidirectional (can go forwards and backwards)
    vector<int>::iterator end = numbers.end();
    // cout << *end << endl; //end is ONE after the last element
    
    cout << *(end - 1) << endl; //order of operators, this is done *end - 1
    cout << *(end - 5) << endl; //we get 5
    
    
    
    //some built in methods also use iterators
    numbers.insert(numbers.begin(), 100);
    numbers.insert(numbers.begin(), 100);

    print(numbers);
    
    set<int> numberSet {5, 10, 65, 24, 17}; //just a preview
    numberSet.insert(100);   //in C++ specifically, set is sorted
    numberSet.insert(100);   //elements must be unique in a set
    print(numberSet);

    return 0;
}