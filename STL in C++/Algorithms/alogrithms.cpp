#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p2.first > p1.first) return true;
    return false;
}

int main()
{
    int n = 5;
    int a = 2;

    sort(a, a + n);

    // sorting in vector
    vector <int> v;
    sort(v.begin(), v.end());

    // sorting for specific positions (from 2 to 4)
    sort(a + 2, a + 4);

    // if i want to sort in my way (combination of ascending and descending)
    pair<int, int> p[] = {{1, 2}, {3, 4}, {5, 6}};

    // my way:
    // sort it acc to 2nd elem
    // if 2nd elem is same, then sort it acc to 1st elem but in descending

    sort(a, a + n, comp);
    // {4,1}, {2,1}, {1,2}


    string s = "123"; 

    // NOTE: To print all the permutations the string must be sorted
    // Hence, best practice is to sort before if unsorted
    // like, sort(s.begin(), s.end());


    // Find permutation of a string
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    


    // Find max and min elem using max_element and min_element
    int maxi = max_element(a, a + n);
    int mini = min_element(a, a + n);

    return 0;
}