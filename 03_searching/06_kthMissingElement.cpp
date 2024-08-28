#include <iostream>
using namespace std;

// Method 3
int main() {
  int arr[] = {2, 3, 4, 7, 11, 12, 15, 16}; // 1, 5, 6, 8, 9, 10, 13, 14
  int n = sizeof(arr) / sizeof(arr[0]);
  
  int ans = -1;
  int k = 1;

  int start = 0;
  int end = n - 1;

  int missingNumbers = 0;

  // missing element                           
  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (k - (arr[mid] - mid - 1) <= 0) {
      missingNumbers = arr[mid] -  mid - 1;
      ans = mid;
      end = mid - 1;
    }
    else {
      start = mid + 1;
    }
  }


  ans = arr[ans] - missingNumbers + ans;

  cout << "ans: " << ans << endl;

  return 0;
}




















// Method 2
// int main() {
//   int arr[] = {2, 3, 4, 7, 11, 12};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int count = 1;
//   int i = 0;
//   int ans = -1;
//   int k = 5;

//   // missing element                           
//   while(k) {
//     if (arr[i] != count) {
//       ans = count;
//       k--;
//     }
//     else {
//       i++;
//     }
//     count++;
//   }

//   cout << "ans: " << ans << endl;

//   return 0;
// }


// Method 1
// int main() {
//   int arr[] = {2, 3, 4, 7, 11, 12};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int count = 1;
//   int i = 0;
//   int ans = -1;
//   int k = 5;

//   // missing element 
//   while(k) {
//     if (arr[i] != count) {
//       ans = count;
//       k--;
//     }
//     else {
//       i++;
//     }
//     count++;
//   }

//   cout << "ans: " << ans << endl;

//   return 0;
// }