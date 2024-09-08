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
  int arr[] = {3, 15, 6, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  printArrayElement(arr, n);

  // insertion sort
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
      }
      else {
        break;
      }
    }
  }

    printArrayElement(arr, n);

  return 0;
}