#include <bits/stdc++.h>
using namespace std;

int main () {
    cout << "This a CPP test snippet" << endl;

    pair <int, int> p = {1, 2};
    cout << "The first element present in index 1 is: " << p.first; // access an element by using dot operator

    // Pair inside a pair - to store 3 values
    pair <int, pair<int, int>> p = {1, {2, 3}};

    // Store pairs in an array where each index will store 2 values in pairs
    pair <int, int> arr[3] = { {1, 2}, {3, 4}, {5, 6} };

    // You can store 2 values in a pair which can be of same or different data type
    pair <int, string> p = {5, "hello"};


    // You can also compare two pairs
    pair<int, int> p1 = {3, 5};
    pair<int, int> p2 = {3, 7};
    cout << (p1 == p2); // false;


    // Updating the value
    pair<int, string> p = {1, "Hello"};
    
    // Update first and second value of pair
    p.first = 2;
    p.second = 10;

    return 0;
}