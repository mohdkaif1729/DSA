#include<iostream>
using namespace std;

int sum(int arr[], int index) {
  if (index < 0) {
    return 0;
  }
  
  return arr[index] + sum(arr, index - 1);
}

int main() {
  int arr[] = {2, 3, 7, 4, 5, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  int ans = sum(arr, size - 1);

  cout<<"sum of array is: "<<ans<<endl;

  return 0;
}