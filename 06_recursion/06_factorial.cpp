#include<iostream>
using namespace std;

int factorial(int num) {
  if (num == 0) {
    return 1;
  }

  return num*factorial(num - 1);
}

int main() {
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  int ans = factorial(num);

  cout<<"factorial of "<<num<<" is: "<<ans<<endl;
  return 0;
}