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

    

    // Front, back, at and empty
    b.front(); // returns elem present in the 1st index
    b.back(); // returns elem present in the last index
    b.empty(); // if vector is empty it returns 1 else 0
    b.at(2); // returns the elem present at index 2



    // Iterator in a vector
    // this is a vector v = [4, 6, 8, 10] _
    // v.begin() returns 4
    // v.end() points the cursor at the end (_) after 10


    // Reverse a vector 
    // v.rbegin() 
    // v.rend()
    // The whole vector gets reversed 1st elem becomes last and last becomes first


    // for each loop which iterates the whole vector b and prints every elem present in the vector
    for (auto it: b) {
        cout << it << " ";
    }

    // v.clear(); use to clear the whole vector

    return 0;
}