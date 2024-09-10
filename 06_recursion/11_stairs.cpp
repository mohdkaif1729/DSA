#include<iostream>
using namespace std;

int stairs(int num) {
  if (num == 0) {
    return 1;
  }
  else if (num < 0) {
    return 0;
  }

  return stairs(num - 1) + stairs(num - 2);
}

int main() {
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  int ans = stairs(num);
  cout<<"the number of ways is: "<<ans<<endl;
  return 0;
}
