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


void reverseEachRow(int arr[][3], int rows, int cols) {
  // reverse rows
  for (int i = 0; i < rows; i++)
  {
    int j = 0, k = cols - 1;
    while(j < k) {
      swap(arr[i][j], arr[i][k]);
      j++;
      k--;
    }
  }
  return;
}

int main() {
  int arr[][3] = {{2, 4, 5}, {1, 9, 6}, {0, 8, 3}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

  // print the elements of array
  twoDArrayRowWise(arr, rows, cols);

  // find sum of diagonal element
  reverseEachRow(arr, rows, cols);

  // print reverse row 2d array
  twoDArrayRowWise(arr, rows, cols);

  return 0;
}