#include <iostream>
#include <vector>

using namespace std;

int main() {
  int arr[] = {1, 2, 4, 6, 18, 25};
  vector<int> ans(2, -1);
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 10;

  // two sum
  int start = 0;
  int end = n - 1;

  while(start < end) {
    if (arr[start] + arr[end] == target) {
      ans[0] = start;
      ans[1] = end;
      break;
    }
    else if (arr[start] + arr[end] < target) {
      start++;
    }
    else {
      end--;
    }
  }

  cout << ans[0] << " " << ans[1];

  return 0;
}