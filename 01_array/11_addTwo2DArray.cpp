#include <iostream>

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

void addTwoArrays(int arr1[][3], int arr2[][3], int ans[][3], int rows, int cols) {
  // add 
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      ans[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  return;
}

int main()
{
  int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int rows1 = sizeof(arr1) / sizeof(arr1[0]);
  int cols1 = sizeof(arr1[0]) / sizeof(arr1[0][0]);

  int arr2[3][3] = {{2, 1, 5}, {6, 4, 1}, {0, 8, 7}};
  int rows2 = sizeof(arr2) / sizeof(arr2[0]);
  int cols2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
  
  int ans[3][3];
  int rows = sizeof(ans) / sizeof(ans[0]);
  int cols = sizeof(ans[0]) / sizeof(ans[0][0]);

  // print arr1 elements
  twoDArrayRowWise(arr1, rows1, cols1);

  // print arr2 elements
  twoDArrayRowWise(arr2, rows2, cols2);

  // add arr1 and arr2
  addTwoArrays(arr1, arr2, ans, rows, cols);

  // print ans elements
  twoDArrayRowWise(ans, rows, cols);

  return 0;
}