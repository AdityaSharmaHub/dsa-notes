#include<bits/stdc++.h>
using namespace std;

void print1ToN(int n) {
    if (n < 1) return;

    print1ToN(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print1ToN(n);

    return 0;
}