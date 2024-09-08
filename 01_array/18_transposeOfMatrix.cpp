#include<iostream>
#include<vector>
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

int main() {
  vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int rows = matrix.size();
  int cols = matrix[0].size();

  printTwoDVector(matrix);

  int i = 0;
  while(i < rows - 1) {
    int j = i + 1;
    while(j < cols) {
      swap(matrix[i][j], matrix[j][i]);
      j++;
    }
    i++;
  }

  printTwoDVector(matrix);

  return 0;
}
