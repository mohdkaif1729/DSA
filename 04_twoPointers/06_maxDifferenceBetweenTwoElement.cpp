#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {9, 5, 8, 12, 2, 3, 7, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int start = 0, end = 1;
  int maxi = INT_MIN;

  while(end < n) {
    if (arr[end] > arr[start]) {
      int difference = abs(arr[start] - arr[end]);
      maxi = max(maxi, difference);
      start++;
    }
    else if (arr[end] < arr[start]) {
      end++;
    }
    else if (start == end) {
      end++;
    }
  }

  cout << maxi << endl;

  return 0;
}