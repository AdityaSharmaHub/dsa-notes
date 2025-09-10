#include<bits/stdc++.h>
using namespace std;

// How it works
// 6 1 3 2 5
// 1 6 3 2 5
// 1 3 6 2 5
// 1 2 3 6 5
// 1 2 3 5 6

void insertion_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int n; 
    cout << "Enter the num: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity
// Best Case - O(N)
// Worst/Avg Case - O(N2)