#include <iostream>
#include <vector>

using namespace std;

void printTwoDVector(vector<vector<int>> matrix)
{
  int rows = matrix.size();
  int cols = matrix[0].size();
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << matrix[i][j] << ' ';
    }
    cout << endl;
  }
  cout << endl;
  return;
}

void spiralPrint(vector<vector<int>> matrix)
{
  int totalElements = matrix.size() * matrix[0].size();
  int startRow = 0, lastRow = matrix.size() - 1;
  int startCol = 0, lastCol = matrix[0].size() - 1;

  while (totalElements)
  {
    for (int i = startCol; (i <= lastCol) && totalElements; i++)
    {
      cout << matrix[startRow][i] << " ";
      totalElements--;
    }
    startRow++;
    for (int i = startRow; (i <= lastRow) && totalElements; i++)
    {
      cout << matrix[i][lastCol] << " ";
      totalElements--;
    }
    lastCol--;
    for (int i = lastCol; (i >= startCol) && totalElements; i--)
    {
      cout << matrix[lastRow][i] << " ";
      totalElements--;
    }
    lastRow--;
    for (int i = lastRow; (i >= startRow) && totalElements; i--)
    {
      cout << matrix[i][startCol] << " ";
      totalElements--;
    }
    startCol++;
  }

  return;
}

int main()
{
  vector<vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 12, 13}, {14, 15, 16, 17}};

  // print vector
  printTwoDVector(matrix);

  // spiral printing
  spiralPrint(matrix);

  return 0;
}