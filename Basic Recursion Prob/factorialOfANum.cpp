#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    if (n == 1) return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter the num: ";
    cin >> n;

    cout << "Factorial of " << n << " would be " << fact(n);
    return 0;
}