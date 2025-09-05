#include<bits/stdc++.h>
using namespace std;

int hashArr[100000000];

// INPUT:

// 5 --> size of the arr
// 1 3 2 1 2 --> elements of the arr

// 5 --> no of queries
// 1 12 2 3 1 --> the queries
// 2 0 2 1 2 --> occurence (output)

int main()
{
    int n;
    cout << "Enter the size of the arr: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    
    for (int i = 0; i < n; i++) {
        hashArr[arr[i]] += 1; 
    }

    int queries;
    cout << "How many queries do you have: ";
    cin >> queries;

    cout << "Enter the queries: ";
    while (queries--) {
        int num;
        cin >> num;
        // fetch
        cout << hashArr[num] << " ";
    }

    return 0;
}