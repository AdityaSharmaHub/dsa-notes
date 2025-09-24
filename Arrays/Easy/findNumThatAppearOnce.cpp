#include<bits/stdc++.h>
using namespace std;

int findNumThatAppearsOnce(vector<int> &arr) {
    int n = arr.size();

    // Brute Force Method - Using Linear Search (Find one-by-one)

    // for (int i = 0; i < n; i++) {
    //     int cnt = 0;
    //     int num = arr[i];
    //     for (int j = 0; j < n; j++) {
    //         if (arr[j] == num) {
    //             cnt++;
    //         }
    //     }

    //     if (cnt == 1) {
    //         return num;
    //     } 
    // }

    // Time Complexity - O(N2)
    // Space Complexity - O(1)

    // return -1;



    // Better Solution - Using Map (Ordered/Unordered)

    // map<long long, int> mpp; --> taking long long because the nums might be 10^8 long
    // iterate in the loop and store in the map
    // find the key which has value 1 (which means it has appeared only once)
    
    // Time Complexity - O(N log M) --> here M is the map (M = N/2 + 1)       +       O(N/2 + 1) --> for finding the key in the map
    // Space Complexity - O(N/2 + 1) -> Space taken by map bcoz every element appears twice and only one element appears onece.



    // Optimal Solution - Using XOR

    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }

    return xorr;

    // Time Complexity - O(N)
    // Space Complexity - O(1)
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};

    cout << findNumThatAppearsOnce(arr) << " appeared only once.";
    return 0;
}