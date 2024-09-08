#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {3, 1, 6, 7, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int maxNum = INT_MIN;
  int secMaxNum;

  for (int i = 0; i < size; i++)
  {
    if (maxNum < arr[i])
    {
      secMaxNum = maxNum;
      maxNum = arr[i];
    }
  }

  cout << "Second maximum number is: " << secMaxNum;

  return 0;
}