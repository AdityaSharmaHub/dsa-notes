#include<bits/stdc++.h>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
// Another Problem Link - https://www.naukri.com/code360/problems/print-1-to-n_628290

void printOneToN(int i, int &n) {
    cout << i << endl; // printing
    
    if (i == n) return; // checking

    printOneToN(i+1, n); // recursive call
}

// Another approach
void printNos(unsigned int n)
{
    if (n > 0) {
        printNos(n - 1);
        cout << n << " ";
    }
    return;
}

// Return an array containing 1 to n
vector<int> printNos(int n) {
    
    if (n == 1) {
        return {1};
    }

    vector<int> res = printNos(n - 1);
    res.push_back(n);
    
    return res;
}

int main()
{
    int n; 
    cout << "Enter the value of N: ";
    cin >> n;

    printOneToN(1, n);

    return 0;
}