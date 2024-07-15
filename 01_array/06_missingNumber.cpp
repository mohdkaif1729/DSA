#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] = {1, 6, 3, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  int ans[size + 1] = {0};

  for (int i = 0; i < size; i++)
  {
    ans[arr[i] - 1]++;
  }

  for (int i = 0; i < size + 1; i++)
  {
    if (ans[i] == 0)
    {
      cout << i + 1 << " is missing" << endl;
      break;
    }
  }

  return 0;
}