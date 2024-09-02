#include <iostream>
#include <vector>
using namespace std;

void printTwoDVector(vector<vector<int>> matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << ' ';
    }
    cout << endl;
  }
  return;
}

void waveForm(vector<vector<int>> matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();

  for (int i = 0; i < cols; i++) {
    if (i % 2 == 0) {
      int j = 0;
      while (j < rows) {
        cout << matrix[i][j] << " ";
        j++;
      }
    }
    else {
      int j = rows - 1;
      while (j) {
        cout << matrix[i][j] << " ";
        j--;
      }
    }
  }
  return;
}

int main() {
  vector<vector<int>> matrix {{1, 2, 3}, {4, 5, 6}, {8, 9, 10}};

  // print the 2d vector
  printTwoDVector(matrix);

  waveForm(matrix);

  return 0;
}