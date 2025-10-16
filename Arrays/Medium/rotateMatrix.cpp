#include<bits/stdc++.h>
using namespace std;

void rotateMatrix (vector<int, int> &matrix) {
    int n = matrix.size();
    // Transpose matrix - Time Complexity - O (N/2 * N/2)
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        swap(matrix[i][j], matrix[j][i]);
    }

    // Reverse row of the matrix - Time Complexity - O(N * N/2)
    for(int i=0; i<n; i++)
    {
        int start = 0, end = n-1;
        while(start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            // swap(matrix[start][i], matrix[end][i]); // for column reverse
            start++;
            end--;
        }
    }
}

int main()
{
    
    return 0;
}