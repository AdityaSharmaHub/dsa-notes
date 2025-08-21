#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, gcd = 1;
    cout << "n1: ";
    cin >> n1;

    cout << "n2: ";
    cin >> n2;

    for (int i = 1; i * i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    cout << gcd;
    return 0;
}