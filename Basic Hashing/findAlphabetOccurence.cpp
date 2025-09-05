#include<bits/stdc++.h>
using namespace std;

// INPUT:

// abcdabehf --> string

// 5 --> no of queries
// a g h b c --> the queries
// 2 0 1 2 1 --> occurence (output)


int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    // precompute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cout << "No of queries: ";
    cin >> q;

    cout << "Enter the queries: ";
    while (q--) {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << " ";
    }

    return 0;
}