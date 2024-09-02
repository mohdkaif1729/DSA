#include <iostream>

using namespace std;

// print 2d array row wise function
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

// print 2d array col wise
void twoDArrayColWise(int arr[][3], int rows, int cols)
{
  // print elements
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return;
}

int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

  // print 2d array row wise
  twoDArrayRowWise(arr, rows, cols);

  // print 2d aray col wise
  twoDArrayColWise(arr, rows, cols);

  return 0;
}