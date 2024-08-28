#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> vnew)
{
  for (int i = 0; i < vnew.size(); i++)
  {
    cout << vnew[i] << " ";
  }
  cout << endl;
  return;
}

int main()
{
  // create vector, declare
  vector<int> v;
  vector<int> v1(5, 3);

  // size and capacity
  // cout << "Size of v: " << v.size() << endl;
  // cout << "Capacity of v: " << v.capacity() << endl;
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  // cout << "Size of v: " << v.size() << endl;
  // cout << "Capacity of v: " << v.capacity() << endl;

  // cout << "Size of v1: " << v1.size() << endl;
  // cout << "Capacity of v1: " << v1.capacity() << endl;

  vector<int> v2 = {1, 2, 3, 4};
  // cout << "Size of v2: " << v2.size() << endl;
  // cout << "Capacity of v2: " << v2.capacity() << endl;

  vector<int> vnew;
  vnew.push_back(2);
  vnew.push_back(32);
  vnew.push_back(45);
  vnew.push_back(12);
  // vnew.push_back(29);
  // cout << "Size of vnew: " << vnew.size() << endl;
  // cout << "Capacity of vnew: " << vnew.capacity() << endl;

  // delete the element from back of the vector new
  vnew.pop_back();
  // cout << "Size of vnew: " << vnew.size() << endl;
  // cout << "Capacity of vnew: " << vnew.capacity() << endl;

  vnew.erase(vnew.begin() + 1);
  cout << "Size of vnew: " << vnew.size() << endl;
  cout << "Capacity of vnew: " << vnew.capacity() << endl;
  // printVector(vnew);

  vnew.insert(vnew.begin() + 1, 50);
  // printVector(vnew);

  vnew[1] = 37;
  // printVector(vnew);

  // vnew.clear();
  // cout << "Size of vnew: " << vnew.size() << endl;
  // cout << "Capacity of vnew: " << vnew.capacity() << endl;

  // cout << "front element: " << vnew.front() << endl;
  // cout << "back element: " << vnew.back() << endl;

  for (auto i = vnew.begin(); i != vnew.end(); i++) {
    cout << *i << " ";
  }

  cout << endl;

  for (auto i: vnew) {
    cout << i << " ";
  }
  cout << endl;

  // increasing order sorting
  // sort(vnew.begin(), vnew.end());
  // printVector(vnew);

  // decreasing order sorting
  // sort(vnew.rbegin(), vnew.rend());
  // printVector(vnew);


  // search in binary search
  // cout << binary_search(vnew.begin(), vnew.end(), 2);

  // cout << endl << *find(vnew.begin(), vnew.end(), 54) - *vnew.begin();

  return 0;
}