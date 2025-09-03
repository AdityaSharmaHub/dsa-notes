#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &s, int i) {

    if (i >= s.size() / 2) return true;

    if (s[i] != s[s.size() - i - 1]) {
        return false;
    }

    return checkPalindrome(s, i + 1);
}

int main()
{
    string s = "madam";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << checkPalindrome(s, 0);

    return 0;
}