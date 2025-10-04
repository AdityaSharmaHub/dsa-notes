#include<bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int> &arr, int n) {
    
    // Brute Force Approach - Using loops
    // for (int i = 0; i < n; i++) {
    //     int count = 0;
    //     for (int j = 0; j < n; j++) {
    //         if (arr[j] == arr[i]) count++;
    //     }
    //     if (count >= n/2) return arr[i];
    // }
    // return -1;
    // Time Complexity - O(N2)


    // Better Solution - Using hashing
    // map<int, int> mpp;
	// for (int i = 0; i < n; i++) {
	// 	mpp[arr[i]]++;
	// }
	// for (auto it: mpp) {
	// 	if (it.second > (n / 2)) {
	// 		return it.first;
	// 	}
	// }
	// return -1;
    // Time Complexity - O(N log N) + O(N)
    // Space Complexity - O(N)


    // Optimal Solution - Using Moore's Voting Algo
    int cnt = 0;
    int el;

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
    int cnt1 = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) cnt1++;
    }
    if (cnt1 > (n/2)) {
        return el;
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 9, 2, 9, 9, 9};
    int n = arr.size();

    cout << findMajorityElement(arr, n);
    return 0;
}