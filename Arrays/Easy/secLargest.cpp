#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int maxVal = arr[n-1];
    for(int i = n-2; i >= 0; --i) {
        if(arr[i] < maxVal) return arr[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};

    cout << "2nd Largest: " << findSecondLargest(6, arr);

    return 0;
}