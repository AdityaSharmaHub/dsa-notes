#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();

    sort(intervals.begin(), intervals.end(),
         [](const vector<int> &a, const vector<int> &b)
         {
             return a[0] < b[0];
         });

    vector<vector<int>> merged;

    merged.push_back(intervals[0]);

    for (int i = 1; i < n; i++)
    {
        auto &last = merged.back();
        if (intervals[i][0] <= last[1])
        {
            last[1] = max(last[1], intervals[i][1]);
        }
        else
        {
            merged.push_back(intervals[i]);
        }
    }

    return merged;
}

int main()
{

    return 0;
}