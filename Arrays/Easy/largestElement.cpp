#include<bits/stdc++.h>
using namespace std;

// TC - (N log N) (because of sorting)
// int largestElement(vector<int> &nums, int n) {
//     sort(nums.begin(), nums.end()); 

//     return nums[n-1];
// }


// TC - O(N) 
int largestElement(vector<int> &nums, int n) {
    int largest = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

int main()
{
    vector<int> nums = {5, 61, 1, 3, 2, 4};

    cout << "Largest Element: " << largestElement(nums, 6);
    return 0;
}