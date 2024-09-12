#include<iostream>
using namespace std;

int minElement(int arr[], int index) {
  if (index == 0) {
    return arr[index];
  }
  
  return min(arr[index], minElement(arr, index - 1));
}

int main() {
  int arr[] = {2, 3, 7, 0, 5, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  int ans = minElement(arr, size - 1);

  cout<<"min element in array is: "<<ans<<endl;

  return 0;
}