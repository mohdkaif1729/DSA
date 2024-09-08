#include <iostream>
using namespace std;

int main() {
  // arr[1] == 1[arr] == *(arr + 1) == *(1 + arr) all things are same
  int arr[] = {2, 1, 5, 3, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int *ptr = arr;
  // arr is constant can not be change

  for (int i = 0; i < n; i++) {
    cout << *(ptr + i) << " ";
  }
  cout << endl;

  // pointers arithmetics
  for (int i = 0; i < n; i++) {
    cout << *ptr << " ";
    ptr++;
  }
  return 0;
}