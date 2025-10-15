#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence (vector<int> &arr) {
    if (arr.size() == 0) return 0;

    sort(arr.begin(), arr.end());
    int n = arr.size();

    int lastSmaller = INT_MIN;
    int longest = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] - 1 == lastSmaller) {
            cnt += 1;
            lastSmaller = arr[i];
        }
        else if (lastSmaller != arr[i]) {
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }

    return longest;
}

// Time Complexity - O (N log N) + O (N)
// Space Complexity - O (1)

int main()
{
    vector<int> arr = {5, 8, 3, 2, 1, 4};

    cout << "Longest: " << longestConsecutiveSequence(arr);
    return 0;
}