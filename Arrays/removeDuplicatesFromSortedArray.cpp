#include<bits/stdc++.h>
using namespace std;

/*

Brute Force Approach -
Use a set data structure which takes unique elements and place it in sorted fashion. Iterate through the array once and insert the elements in the set. As set only stores unique elemets you are good to go.

Time Complexity => O (2 + N log N)
Space Complexity => O (N)


Optimal Approach -
Use two pointer, place one on the 1st place as the 1st element would always be in its correct position because it is a sorted array. Now take the 2nd pointer and iterate throughout the array and find unique element comparing with the 1st pointer element. Once you find a unique element place it at the next place and move on.

Time Complexity - O(N)

*/ 

int removeDuplicatesFromArray(vector<int> &nums, int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return i + 1;
}

int main()
{

    vector<int> nums = {1, 1, 2, 2, 2, 3, 3, 4};
    int n = nums.size();

    cout << removeDuplicatesFromArray(nums, n);
    
    return 0;
}