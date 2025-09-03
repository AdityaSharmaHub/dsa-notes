#include<bits/stdc++.h>
using namespace std;

// Parameterized Recursion
void sumOfFirstNNums(int n, int sum) {
    if (n < 1) {
        cout << "Sum: " << sum;
        return;
    }

    sumOfFirstNNums(n - 1, sum + n);
}

// Functional Recursion
int sumOfFirstNNos(int n) {
    if (n == 0) return 0;

    return n + sumOfFirstNNos(n - 1);
}

int main()
{
    int n, sum = 0;
    cin >> n;

    // sumOfFirstNNums(n, sum);

    cout << "Sum using function: " << sumOfFirstNNos(n);

    return 0;
}