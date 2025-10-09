#include<bits/stdc++.h>
using namespace std;

void rearrangeArrayElementsBySign (vector<int> &arr, int n) {

    // Brute Force Approach
    // Let take two arrays for the elem and segregate them into +ve and -ve
    // vector<int> positives;
    // vector<int> negatives;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > 0) {
    //         positives.push_back(arr[i]);
    //     }
    //     else {
    //         negatives.push_back(arr[i]);
    //     }
    // }
    // We noticed one pattern that +ve elements are present at even places like (0, 2, 4) and -ve are placed at odd places like (1, 3, 5)
    // for (int i = 0; i < n/2; i++) {
    //     arr[2 * i] = positives[i]; 
    //     arr[2 * i + 1] = negatives[i];
    // }
    // Time Complexity - ~ O(2N)
    // Space Complexity - O(N) - taking two arrays


    // Optimal Approach
    // vector<int> ans(n, 0);
    // int posIndex = 0, negIndex = 1;
    // for (int i = 0; i < n; i++) {
    //     if (arr[i] < 0) {
    //         ans[negIndex] = arr[i];
    //         negIndex += 2;
    //     }
    //     else {
    //         ans[posIndex] = arr[i];
    //         posIndex += 2;
    //     }
    // }
    // return ans;
    // Time Complexity - O(N)
    // Space Complexity - O(N)

}

int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    int n = arr.size();

    rearrangeArrayElementsBySign(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}