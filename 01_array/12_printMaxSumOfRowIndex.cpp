#include <iostream>
#include <climits>

using namespace std;


void twoDArrayRowWise(int arr[][3], int rows, int cols)
{
  // print elements
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  return;
}


int findIndexOfRowWhoseSumIsMax(int arr[][3], int rows, int cols) {
  int sum = 0, prevRowSum = INT_MIN, ans = -1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum += arr[i][j];
    }
    if (sum > prevRowSum) {
      ans = i;
    }
  }
  return ans;
}

int main() {
  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

  // print the elements of array
  twoDArrayRowWise(arr, rows, cols);

  // find the index of row whose sum is maximum
  int ans = findIndexOfRowWhoseSumIsMax(arr, rows, cols);

  // print the result
  cout << ans << endl;

  return 0;
}