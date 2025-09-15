#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return 0;
        }
    }

    return 1;
}


int main()
{
    vector<int> a = {5, 3, 5, 4, 1};
    isSorted(5, a);
    
    return 0;
}