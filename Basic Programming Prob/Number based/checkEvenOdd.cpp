#include<bits/stdc++.h>
using namespace std;

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    checkEvenOdd(n);
    return 0;
}