#include <iostream>
using namespace std;

int main() {
  // pointers are differently behave in string and char ptr
  char str[] = "12345";
  char *ptr = str;
  cout << str << endl;
  cout << ptr << endl;

  // how to print address in string
  cout << (void *)str << endl;
  cout << (void *)ptr << endl;

  char ch = 'a';
  char *ptrCh = &ch;
  cout << ch << endl;
  cout << ptrCh << endl;

  cout << (void *)&ch << endl;
  cout << static_cast<void*>(ptrCh) << endl;


  return 0;
}