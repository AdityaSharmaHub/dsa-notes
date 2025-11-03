#include <bits/stdc++.h>
using namespace std;

// There are 3 types of problem in this pascal triangle problem

// 1. Print the whole triangle for the given num
// 2. Print only the row by given rowIndex
// 3. Print only the index if col and row is given



// 1. Generate Pascal Triangle
vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= N; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}




// 2. Get a particular row by rowIndex

vector<int> getRow(int rowIndex)
{
    long long ans = 1;

    vector<int> ansRow;
    ansRow.push_back(1);

    for (int col = 1; col <= rowIndex; col++)
    {
        ans = ans * (rowIndex - col + 1);
        ans = ans / col;
        ansRow.push_back((int)ans);
    }
    return ansRow;
}

int main()
{

    return 0;
}