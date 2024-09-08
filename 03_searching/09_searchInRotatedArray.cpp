#include <iostream>
#include <climits>
using namespace std;


int main() { 
  int arr[] = {1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = -1;

  int start = 0;
  int end = n - 1;
  int target = 1;

  while(start <= end) {

    int mid = start + (end - start) / 2;
    if (arr[mid] == target) {
      ans = mid;
      break;
    }
    if (arr[mid] >= arr[0]) {
      if (arr[start] <= target && target < arr[mid]) {
        end = mid - 1;
      }
      else {
        start = mid + 1;
      }
    }
    else {
      if (arr[mid] < target && target <= arr[end]) {
        start = mid + 1;
      }
      else {
        end = mid - 1;
      }
    }
  }

  cout << "index value of peak element: " << ans << endl;

  return 0;
}
