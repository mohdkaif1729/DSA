#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {4, 2, 7, 8, 0, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int minNumber = INT_MAX;

  for (int i = 0; i < size; i++)
  {
    if (minNumber > arr[i])
    {
      minNumber = arr[i];
    }
  }

  cout << "Max number is: " << minNumber;

  return 0;
}