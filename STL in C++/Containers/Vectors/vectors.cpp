#include<bits/stdc++.h>
using namespace std;

// Vector is similar to an array. 
// Build using Singly Linked List under the hood.

int main()
{
    vector<int> a; // This creates a vector named 'a' of int datatype
    vector<int> b(4); // This states that 'b' is size of 4

    // To insert in a vector
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(8);

    b.insert(b.begin(), 300); // this inserts elem at start


    // To remove a elem from a vector
    a.pop_back(); // removes the last elem from the vector
    a.clear();  // to remove all the values

    b.erase(a.begin() + 2); // to remove elem of a specific index


    // SIZE AND CAPACITY
    
    // b.size() --> gives 2 (how many elem are present)
    // b.capacity() --> gives 4 (how many elem it can hold)

    // Just adding a comment :)

    return 0;
}