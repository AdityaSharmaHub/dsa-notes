#include <bits/stdc++.h>
using namespace std;

// Left Rotate
void rotateArray(vector<int> &arr, int n, int k)
{
  k = k % n;

  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }

  for (int i = k; i < n; i++)
  {
    arr[i - k] = arr[i];
  }

  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - (n - k)];
  }
}

// Right Rotate
void rotate(vector<int> &nums, int k)
{
  int n = nums.size();
  k = k % n;

  if (k < 1)
    return;

  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = nums[n - k + i];
  }

  for (int i = n - 1; i >= k; i--) {
    nums[i] = nums[i - k];
  }

  for (int i = 0; i < k; i++) {
    nums[i] = temp[i];
  }
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

  rotateArray(arr, arr.size(), 3);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}