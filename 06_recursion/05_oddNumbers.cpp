#include<iostream>
using namespace std;

void printEvenNumber(int num) {
  if (num == 0) {
    return;
  }
  printEvenNumber(num - 1);
  cout<<2*num - 1<<endl;
  return;
}

int main() {
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  printEvenNumber(num);

  return 0;
}