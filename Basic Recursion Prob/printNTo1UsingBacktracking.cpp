#include<bits/stdc++.h>
using namespace std;

void printNTo1(int n, int i) {
    if (i > n) return;

    printNTo1(n, i+1);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    printNTo1(n, 1);
    return 0;
}