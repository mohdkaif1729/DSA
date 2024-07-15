#include <iostream>
using namespace std;

int main()
{
  int arr[] = {3, 4, 2, 7, 8, 9};
  int target = 8;
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}