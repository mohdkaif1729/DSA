#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int target = 5;

  // binary search algorithm
  int start = 0;
  int end = sizeof(arr) / sizeof(arr[0]);

  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      cout << target << " at index " << mid;
      break;
    }
    else if (arr[mid] < target) {
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }

  return 0;
}