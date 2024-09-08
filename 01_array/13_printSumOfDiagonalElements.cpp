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


void findSumOfDiagonalElement(int arr[][3], int rows, int cols) {
  int diagonalSum = 0, principleDiagonalSum = 0;

  for (int i = 0; i < rows; i++)
  {
    principleDiagonalSum += arr[i][i];
  }
  cout << "Principle Diagonal Sum: " << principleDiagonalSum << endl;
  ;

  for (int i = 0, j = cols - 1; i < rows; i++, j--)
  {
    diagonalSum += arr[i][j];
  }
  cout << "Diagonal Sum: " << diagonalSum << endl;
  return;
}

int main() {
  int arr[][3] = {{2, 4, 5}, {1, 9, 6}, {0, 8, 92}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

  // print the elements of array
  twoDArrayRowWise(arr, rows, cols);

  // find sum of diagonal element
  findSumOfDiagonalElement(arr, rows, cols);

  return 0;
}