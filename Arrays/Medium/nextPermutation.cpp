#include<bits/stdc++.h>
using namespace std;

// Brute Force -
// 1. Generate all the permutations - (using N! where N = size of the array)
// 2. Do a linear search
// 3. Print the next permutation
// Time Complexity - O(N! x N)

// Better Solution - 
// Using in-built STL function
// next_permutation(arr.begin(), arr.end())
// this returns the next permutated array

// Optimal Solution - 
void nextPermutation(vector<int> &arr) {
    // Steps -
    // 1. Longest prefix match i and i+1
    // 2. Find least greater from the end
    // 3. Try to place the rest in sorted order
    int index = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }
    for (int i = n - 1; n > index; i++) {
        if (arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
    return;
}
// Time Complexity - O(3N) -worst case


int main()
{
    vector<int> arr = {3, 2, 1};
    // next_permutation(arr.begin(), arr.end());
    nextPermutation(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}