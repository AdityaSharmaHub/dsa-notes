#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    // by Rohit Bhaiya
    // vector<pair<int, int>> sortedNums; // Store original indices
    // for (int i = 0; i < nums.size(); i++) {
    //     sortedNums.push_back({nums[i], i});
    // }
    // sort(sortedNums.begin(), sortedNums.end()); // Sort based on values
    // int start = 0, end = nums.size() - 1;
    // vector<int> ans;
    // while (start < end) {
    //     if (sortedNums[start].first + sortedNums[end].first <= target) {
    //         if (sortedNums[start].first == sortedNums[end].first && sortedNums[start].first + sortedNums[end].first == target) {
    //             ans.push_back(sortedNums[start].second);
    //             ans.push_back(sortedNums[end].second);
    //             return ans;
    //         }
    //         if (sortedNums[start].first + sortedNums[end].first == target) {
    //             ans.push_back(sortedNums[start].second);
    //             ans.push_back(sortedNums[end].second);
    //             return ans;
    //         }
    //         start++;
    //     } else {
    //         end--;
    //     }
    // }
    // return ans;

    // by Striver
    // Better Approach
    map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++) {
        int a = nums[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[a] = i;
    }

    return {-1, -1};

    // Time Complexity - O(N x log N)
    // Space Complexity - O(N)
}

int main()
{
    vector<int> nums = {2, 3, 1, 3, 4};
    int target = 4;

    twoSum(nums, target);

    return 0;
}