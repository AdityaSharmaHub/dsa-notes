#include<bits/stdc++.h>
using namespace std;

// Optimal Solution - Using Algorithm
void sortArray(vector<int> &arr, int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
// Time Complexity - O(N)
// Space Complexity - O(1)


// Better Solution - Using Variables
// void sortArray(vector<int> &arr, int n) {
//     int cnt0 = 0, cnt1= 0, cnt2 = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) cnt0++;
//         else if (arr[i] == 1) cnt1++;
//         else cnt2++;
//     }
//     for (int i = 0; i < cnt0; i++) {
//         arr[i] = 0;
//     }
//     for (int i = cnt0; i < cnt0 + cnt1; i++) {
//         arr[i] = 1;
//     }
//     for (int i = cnt0 + cnt1; i < n; i++) {
//         arr[i] = 2;
//     }
// }
// Time Complexity - O(2N)
// Space Complexity - O(1)


// Brute Force - Using Sorting Algos 
// Time Complexity - O(N log N)
// Space Complexity - O(N)

int main()
{
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};

    sortArray(arr, arr.size());

    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}