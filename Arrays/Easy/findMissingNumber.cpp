#include<bits/stdc++.h>
using namespace std;


int findMissingNum(vector<int> &arr, int n) {

    // Method 1 - Brute Force Approach - Using Linear Search

    // for (int i = 1; i <= n; i++) {
    //     int flag = 0;
    //     for (int j = 0; j < n - 1; j++) {
    //         if (arr[j] == i) {
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if (flag == 0) {
    //         return i;
    //     }
    // }

    // return -1;



    // Method 2 - Better Approach - Using Hashing

    // hash [n + 1] = {0};

    // for (int i = 0; i < n; i++) {
    //     hash[arr[i]] = 1;   
    // }

    // for (int i = 1; i < n + 1; i++) {
    //     if (hash[i] == 0) {
    //         return i;
    //     }
    // }



    // Method 3 - Optimal Approach - Using Sum and XOR Methods
    
    // 1. Sum Method

    // int sum = n * (n + 1) / 2;
    // int sum2 = 0;

    // for (int i = 0; i < n; i++) {
    //     sum2 += arr[i];
    // }

    // return (sum - sum2);

    // 2. XOR Method

    int xor1 = 0, xor2 = 0;
    int N = n - 1;

    for (int i = 0; i < N; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }

    xor1 = xor1 ^ n;
    return xor1 ^ xor2;

}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;

    cout << "Missing No is: " << findMissingNum(arr, n);
    return 0;
}