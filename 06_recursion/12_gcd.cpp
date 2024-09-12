#include<iostream>
using namespace std;


int gcd(int num1, int num2) {
  if (num2 == 0) {
    return num1;
  }
  return gcd(num2, num1 % num2);
}

int main() {
  int num1, num2;
  cout<<"Enter number 1: "<<endl;
  cin>>num1;
  cout<<"Enter number 2: "<<endl;
  cin>>num2;

  int ans = gcd(num1, num2);
  cout << "gcd of "<<num1<<" and "<<num2<<" is: "<<ans<<endl;
  return 0;
}