#include<iostream>
using namespace std;

int sumOfSquare(int num) {
  if (num == 0) {
    return 0;
  }

  return (num*num) + sumOfSquare(num - 1);
}

int main() {
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  int ans = sumOfSquare(num);

  cout<<"sum of square is: "<<ans<<endl;

  return 0;

}