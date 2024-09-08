#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int target = 5;
  int n = sizeof(arr) / sizeof(arr[0]);

  // linear search algorithm
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      cout << target << " at index " << i;
      break;
    }
  }

  return 0;
}