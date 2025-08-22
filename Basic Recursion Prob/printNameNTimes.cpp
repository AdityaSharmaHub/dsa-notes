#include<bits/stdc++.h>
using namespace std;

void printName(string &name, int &n, int i) {
    if (i > n) return;

    cout << name << " " << i << endl;
    
    printName(name, n, i+1);
}

int main()
{
    int n;
    string message;
    cout << "Enter your message: ";
    cin >> message;

    cout << "How many times you want to print it: ";
    cin >> n;

    printName(message, n, 1);
    return 0;
}