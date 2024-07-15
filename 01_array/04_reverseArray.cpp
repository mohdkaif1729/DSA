#include <iostream>
using namespace std;

int main()
{
  int arr[] = {3, 1, 6, 7, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0, j = size - 1; i < size / 2; i++, j--)
  {
    swap(arr[i], arr[j]);
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}