#include<iostream>
using namespace std;

int fibo(int num) {
  if (num == 0 || num == 1) {
    return num;
  }

  return fibo(num - 1) + fibo(num - 2);
}

int main() {
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  int ans = fibo(num);
  cout<<num<<"th fibonacci number is: "<<ans<<endl;
  return 0;
}
