// ********************** Dangling pointer
// void f1() 
// {
//   int *p;

//   {
//     int x;
//     p = &x;
//     *p = 5; // p points to x
//   }
//   *p = 6; // p is dangling pointer now
// }


// p is dangling pointer now
// void f1() 
// {
//   int *p;
//   int a;
//   p = (int*)malloc(sizeof(int));
//   ...
//   ...
// }

// NULL pointer
// #include<stdio.h>

// void main() {
//   int a;
//   int *p = NULL;

//   if (p != NULL) {
//     *p = a;
//   }
// }

// wild pointer
// uninitialize pointer is a wild pointer
// void f() {
//   int *p; // will pointer
// }


// void pointer
// void pointer stores any type of address
#include<stdio.h>

int main() {
  int a = 3;
  int *ptr = &a;
  void *p = ptr;
  printf("%d\n", *((int*)p));
  
}



