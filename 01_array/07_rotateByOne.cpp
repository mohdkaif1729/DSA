#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {1, 6, 3, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  int lastElement = arr[size - 1];

  for (int i = size - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[0] = lastElement;

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ' ';
  }

  return 0;
}