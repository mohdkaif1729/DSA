#include <iostream>
using namespace std;

void incrementWithoutPointer(int num) {
  num++;
  return;
}

void incrementWithPointer(int* num) {
  (*num)++;
  return ;
}

void swapping(int* first, int* second) {
  int temp = *first;
  *first = *second;
  *second = temp;
  return;
}

void swappingWithReferenceVariable(int& first, int& second) {
  int temp = first;
  first = second;
  second = temp;
  return;
}

int main() {
  int num = 5;
  cout << num << endl;
  incrementWithoutPointer(num);
  cout << num << endl;
  incrementWithPointer(&num);
  cout << num << endl;

  int first = 3;
  int second = 7;

  cout << "first: " << first << endl;
  cout << "second: " << second << endl;

  // swapping(&first, &second);
  swappingWithReferenceVariable(first, second);

  cout << "first: " << first << endl;
  cout << "second: " << second << endl;



  return 0;
}