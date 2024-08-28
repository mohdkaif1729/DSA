#include <iostream>
#include <climits>
using namespace std;

// Method 2
int main() {
  int arr[] = {1, 2, 3, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = -1;

  int start = 1;
  int end = n - 2;

  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
      ans = mid;
      break;
    }
    else if (arr[mid - 1] < arr[mid]) {
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }

  cout << "index value of peak element: " << ans << endl;

  return 0;
}















// Method 1
// int main() {
//   int arr[] = {2, 4, 6, 8, 10, 8, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int currentValue = INT_MIN;
//   int ans = -1;

//   for (int i = 0; i < n; i++) {
//     if (arr[i] > currentValue) {
//       ans = i;
//       currentValue = arr[i];
//     } else {
//       break;
//     }
//   }

//   cout << "index value of peak element: " << ans << endl;

//   return 0;
// }