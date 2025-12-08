#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int key) {

    int size = arr.size();
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            return mid;
            break;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    
    return 0;
}