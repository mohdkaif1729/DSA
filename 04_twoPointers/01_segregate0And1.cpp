#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  // print the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // segregate 0 and 1 logic
  int start = 0;
  int end = n - 1;

  while (start < end) {
    if (arr[start] == 1 && arr[end] == 0) {
      swap(arr[start], arr[end]);
    }
    else if (arr[start] == 0) {
      start++;
    }
    else {
      end--;
    }
  }

  // print the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}