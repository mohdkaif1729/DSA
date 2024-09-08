#include <iostream>
using namespace std;

int main() {
  // variable ke leya heap memory allocate karo
  // dynamic memory allocation
  int *num1 = new int;
  *num1 = 5;
  cout << *num1 << endl;

  float *num2 = new float;
  *num2 = 5.3;
  cout << *num2 << endl;

  int *arr;
  arr = new int[5];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  delete num1;
  delete num2;
  delete []num1;
  return 0;
}