#include<iostream>
using namespace std;

void printCounting(int num) {
  if (num == 0) {
    return;
  }
  cout<<num<<endl;
  printCounting(num - 1);
  return;
}

int main() {
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  printCounting(num);

  return 0;
}