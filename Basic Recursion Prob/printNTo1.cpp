#include<bits/stdc++.h>
using namespace std;

void printNToOne(int n) {
    if (n < 1) return;

    cout << n << " ";
    printNToOne(n-1);
}

int main()
{
    int n;
    cin >> n;

    printNToOne(n);
    return 0;
}