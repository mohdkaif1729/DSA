#include <iostream>
using namespace std;

int main() {
  int n = 31;
  int start = 0;
  int end = n;
  int ans = -1;

  // square root of n 
  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (mid * mid == n) {
      ans = mid;
      break;
    }
    else if (mid * mid > n) {
      end = mid - 1;
    }
    else {
      ans = mid;
      start = mid + 1;
    }
  }

  cout << ans;
  return 0;
}