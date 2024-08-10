#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 4, 6, 8, 10, 14, 16, 18};
  int target = 2;
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0;
  int end = n - 1;
  int correctPosition = n;

  // find correct position of target
  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (target == arr[mid]) {
      correctPosition = mid;
      break;
    }
    else if (target < arr[mid]) {
      correctPosition = mid;
      end = mid - 1;
    }
    else {
      start = mid + 1;
    }
  }

  cout << correctPosition << endl;

  return 0;
}