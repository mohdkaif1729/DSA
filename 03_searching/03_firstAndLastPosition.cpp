#include <iostream>
using namespace std;

int main() {
  int arr[] = {11, 12, 13};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 13;
  int start = 0;
  int end = n - 1;

  // first index
  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      if (mid == 0 || arr[mid - 1] != target) {
        cout << "first index {" << mid << "} of target "<< target << endl;
        break;
      }
      else {
        end = mid - 1;
      }
    }
    else if (arr[mid] < target) {
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }

  start = 0;
  end = n - 1;

  // last index
  while(start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      if (mid == n - 1 || arr[mid + 1] != target) {
        cout << "last index {" << mid << "} of target "<< target << endl;
        break;
      }
      else {
        start = mid + 1;
      }
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