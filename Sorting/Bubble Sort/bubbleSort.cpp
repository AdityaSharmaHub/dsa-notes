#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n, int arr[]) {
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
    }
}

int main()
{
    int n;
    cout << "Enter the num: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(n, arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity 
// --> O(N2) --> Worst/Average Case
// --> O(N) --> Best Case (if the arr is already sorted)