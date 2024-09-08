#include <iostream>
#include <climits>
using namespace std;

int main() { 
  int arr[] = {2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = arr[0];

  int start = 0;
  int end = n - 1;

  while(start <= end) {

    int mid = start + (end - start) / 2;

    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    }
    else {
      ans = arr[mid];
      end = mid - 1;
    }
  }

  cout << "index value of peak element: " << ans << endl;

  return 0;
}
