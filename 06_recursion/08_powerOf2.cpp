#include<iostream>
using namespace std;

int powerOf2(int num) {
  if (num == 0) {
    return 1;
  }

  return 2*powerOf2(num - 1);
}

int main() {
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  int ans = powerOf2(num);

  cout<<"power of 2 is: "<<ans<<endl;
  return 0;
}