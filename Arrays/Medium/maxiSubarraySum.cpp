#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> &arr, int n) {
    long long sum = 0, maxi = LONG_MIN;
    // if interviewer wants the subarray 
    // int ansStart = -1, ansEnd = -1, start = 0;

    for (int i = 0; i < arr.size(); i++) {

        // if interviewer wants the subarray 
        // if (sum == 0) start = i;

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            // if interviewer wants the subarray 
            // ansStart = start, ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

// Time Complexity - O (n)

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();

    cout << maximumSubarraySum(arr, n);

    return 0;
}