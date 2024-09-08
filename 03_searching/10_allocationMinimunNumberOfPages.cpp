#include <iostream>
using namespace std;

bool isValid(int arr[], int n, int k, int mid) {
  int count = 1;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (mid < sum) {
      sum = arr[i];
      count++;
    }
    if (count > k) {
      return false;
    }
  }

  return true;
}

int main() {
  int arr[] = {12, 34, 67, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = -1;
  int max = arr[0];
  int sum = arr[0];
  int k = 2;

  if (k > n) {
    cout << "allocation of book is not possible";
    return 0;
  }

  for (int i = 1; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
    sum += arr[i];
  }

  int start = max;
  int end = sum;

  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (isValid(arr, n, k, mid)) {
      ans = mid;
      end = mid - 1;
    }
    else {
      start = mid + 1;
    }
  }

  cout << ans;
  return 0;
}