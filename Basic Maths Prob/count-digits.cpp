#include <bits/stdc++.h>
using namespace std;

// Prob Link 1 - https://www.geeksforgeeks.org/problems/count-digits-1606889545/1
// Prob Link 2 - https://www.naukri.com/code360/problems/number-of-digits_9173

// Approach 1 - Convert the int to string and return the size

int countDigits(int n)
{
    int digitCount = to_string(n).size();
    return digitCount;
}


int main()
{
    int n = 123, count = 0;

    // Approach 2 - Use a loop & Keep dividing n by 10 until it becomes 0. In each step, increase a counter.
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    return 0;
}