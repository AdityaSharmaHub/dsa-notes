#include<bits/stdc++.h>
using namespace std;

// What is a prime no 
// A num that has exactly 2 factors which is 1 and itself

// Prob Link - https://www.naukri.com/code360/problems/check-prime_624674

int main()
{
    int n, cnt = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 1) {
        cout << "1 is neither prime nor composite no";
        return 0;
    }

    if (n <= 0) {
        cout << "Enter a positive non-zero number";
        return 0;
    }

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i) {
                cnt++;
            }
        }
    }

    if (cnt == 2) cout << "prime";
    else cout << "not a prime";

    return 0;
}