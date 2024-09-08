#include<iostream>

using namespace std;

int main() {
  int num1 = 5;

  // this is how to store the address of variable
  int *ptr1 = &num1;

  // print the address
  cout << "address of num1 location: " << ptr1 << endl;

  // print the value at that address
  cout << "value at that address is: " << *ptr1 << endl;

  return 0;
}