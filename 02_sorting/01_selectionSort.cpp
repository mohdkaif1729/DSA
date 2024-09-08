#include <iostream>
#include <climits>
using namespace std;

// print array
void printArrayElement(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << "\n";
  return;
}

int main() {
  int arr[] = {-1, 1, -20, 3, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  // print array
  printArrayElement(arr, n);

  // selection sort code
  // decreasing order
  for (int i = 0; i < n - 1; i++) {
    int index = 0;
    int max = INT_MIN;
    for (int j = i; j < n; j++) {
      if (arr[j] > max) {
        max = arr[j];
        index = j;
      }
    }
    swap(arr[index], arr[i]);
  }

  // print array
  printArrayElement(arr, n);
  return 0;
}