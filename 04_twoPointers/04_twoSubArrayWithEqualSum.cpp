#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return;
}

int isTwoSubArrayExistWithEqualSum(int arr[], int n) {
  int subArray1 = 0, subArray2 = 0;

  for (int i = 0; i < n; i++) {
    subArray2 += arr[i];
  }

  for (int i = 0; i < n - 1; i++) {
    subArray1 += arr[i];
    subArray2 -= arr[i];
    if (subArray1 == subArray2) {
      return 1;
    }
  }

  return 0;
}


int main() {
  int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
  int n = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, n);

  int ans = isTwoSubArrayExistWithEqualSum(arr, n);

  cout << ans << endl;

  return 0;
}