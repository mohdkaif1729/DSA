#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {4, 2, 7, 8, 0, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxNumber = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (maxNumber < arr[i])
    {
      maxNumber = arr[i];
    }
  }

  cout << "Max number is: " << maxNumber;

  return 0;
}