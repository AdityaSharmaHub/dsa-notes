#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int n) {
  
  // Left Rotate - [2, 3, 4, 5, 1]
  int temp = arr[0];

  for (int i = 1; i < n; i++) {
    arr[i-1] = arr[i];
  }

  arr[n-1] = temp;


  // Right Rotate - [5, 1, 2, 3, 4]
  int last = arr[n - 1];

  for (int i = n - 2; i >= 0; i++) {
    arr[i+1] = arr[i];
  }

  arr[0] = last;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  rotateArray(arr, arr.size());

  return 0;
}