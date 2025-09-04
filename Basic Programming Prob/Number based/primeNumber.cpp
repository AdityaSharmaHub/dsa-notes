#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n) {
    if (n < 0) cout << "Please enter a valid positive number";

    if (n == 1) cout << "1 is neither prime nor composite number";

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            cout << "Not prime";
            return;
        }
    }

    cout << "Prime";
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    checkPrime(n);
    return 0;
}