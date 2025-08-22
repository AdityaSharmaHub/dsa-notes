#include<bits/stdc++.h>
using namespace std;

void printAllNos(int i, int &n) {

    if (i > n) return; // base condition

    cout << i << endl; // print

    printAllNos(i+1, n); // recursive call
}

int main()
{
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    printAllNos(i, n); // start from 1 (i) till n
    return 0;
}