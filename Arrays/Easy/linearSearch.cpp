#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int num) {
    int n = sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr [6] = {1, 2, 3, 4, 5, 6};
    int num = 4;

    cout << "Index of " << num << " is " << linearSearch(arr, 4);

    return 0;
}