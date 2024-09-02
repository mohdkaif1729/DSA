#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  // create 2d vector
  vector<vector<int>> matrix(3, vector<int>(4, 1));
  int rows = matrix.size();
  int cols = matrix[0].size();

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}