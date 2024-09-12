#include<iostream>
using namespace std;

void printArray(int arr[], int index) {
  if (index < 0) {
    return;
  }
  
  printArray(arr, index - 1);
  cout<<arr[index]<<" ";
  return;
}

int main() {
  int arr[] = {2, 3, 7, 4, 5, 9, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, size - 1);
  cout<<endl;

  return 0;
}