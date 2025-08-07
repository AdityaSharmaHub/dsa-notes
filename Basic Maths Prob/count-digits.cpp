#include <bits/stdc++.h>
using namespace std;

// Prob Link - https://www.geeksforgeeks.org/problems/count-digits-1606889545/1

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