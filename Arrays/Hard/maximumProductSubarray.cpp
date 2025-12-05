#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int maxi = INT_MIN;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int currProd = 1;
        for (int j = i; j < n; j++)
        {
            currProd *= nums[j];
            maxi = max(maxi, currProd);
        }
    }
    return maxi;
}

int main()
{

    return 0;
}