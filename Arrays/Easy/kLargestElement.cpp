#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    return nums[n - k];
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    cout << "3rd largest element: " << findKthLargest(nums, 3);

    return 0;
}