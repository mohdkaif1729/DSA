#include <iostream>
using namespace std;

int main() {
  int num = 5;
  int *ptr = &num;
  int **ptr1 = &ptr;
  cout << ptr << endl;
  cout << ptr1 << endl;

  return 0;
}