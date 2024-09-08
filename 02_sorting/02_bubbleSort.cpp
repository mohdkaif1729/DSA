#include <iostream>
using namespace std;


void printArrayElement(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << "\n";
  return;
}

int main() {
  int arr[] = {5, 6, 3, 1, 2, 8};
  int n = sizeof(arr) / sizeof(arr[0]);

  printArrayElement(arr, n);

  // bubble sort
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  printArrayElement(arr, n);

  return 0;
}