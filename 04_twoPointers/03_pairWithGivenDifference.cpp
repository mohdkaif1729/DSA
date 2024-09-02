#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
  vector<int> arr = {2, 5, 3, 50, 80, 10};
  int n = arr.size();
  int target = 45;
  vector<int> ans(2, -1);

  sort(arr.begin(), arr.end());

  int start = 0;
  int end = 1;

  while(end < n) {
    if (abs(arr[start] - arr[end]) == target) {
      ans[0] = start;
      ans[1] = end;
      break;
    }
    else if (abs(arr[start] - arr[end]) > target) {
      start++;
    }
    else {
      end++;
    }
  }

  cout << ans[0] << " " << ans[1] << endl;


  return 0;
}
