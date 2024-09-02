#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {3, 2, 15, 2, -2, 5, -9, -1};
  int n = sizeof(arr) / sizeof(arr[0]);

  int maxi = INT_MIN, prefix = 0;

  for (int i = 0; i < n; i++) {
    prefix += arr[i];

    maxi = max(maxi, prefix);

    if (prefix < 0) {
      prefix = 0;
    }
  }

  cout << maxi << endl;

  return 0;
}