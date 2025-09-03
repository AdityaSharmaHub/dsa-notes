#include<bits/stdc++.h>
using namespace std;

// normal way using loops
vector<int> reverseArray(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        swap(nums[left], nums[right]);
        left++, right--;
    }

    return nums;
    
}

// using recursion
vector<int> reverseUsingRecursion(int l, int r, vector<int> &nums) {
    if (l > r) return nums;

    swap(nums[l], nums[r]);
    reverseUsingRecursion(l + 1, r - 1, nums);

    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 10};
    int n = nums.size() - 1;

    // using loops
    // vector<int> reversedNums = reverseArray(nums);
    // for (int i = 0; i < reversedNums.size(); i++)
    // {
    //     cout << reversedNums[i] << " "; 
    // }

    
    // using recursion
    vector<int> newNums = reverseUsingRecursion(0, n, nums);

    cout << "Reversed Array: ";

    for (auto it: newNums) {
        cout << it << " ";
    }

    return 0;
}