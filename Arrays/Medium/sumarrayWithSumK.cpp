#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    mp[0] = 1;
    int currSum = 0, count = 0;

    for (int num : nums) {
        currSum += num;

        if (mp.find(currSum - k) != mp.end()) {
            count += mp[currSum - k];
        }

        mp[currSum]++;
    }

    return count;
}

int main()
{
    vector<int> arr = {1,1,1,3,-3};
    int k = 3;

    cout << subarraySum(arr, k);
    return 0;
}