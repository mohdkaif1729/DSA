#include<iostream>
using namespace std;

void printDaysLeftForBirthday(int daysLeftForBirthday) {
  if (daysLeftForBirthday == 0) {
    cout<<"Happy Birthday"<<endl;
    return;
  }
  cout<<daysLeftForBirthday<<" days left for birthday"<<endl;
  printDaysLeftForBirthday(daysLeftForBirthday - 1);
  return;
}


int main() {
  int daysLeftForBirthday;
  cout<<"Enter no. of days left for birthday: ";
  cin>>daysLeftForBirthday;

  printDaysLeftForBirthday(daysLeftForBirthday);
  

  return 0;

}