#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int end) { 
  if (start > end) {
    return true;
  }

  if (str[start] != str[end]) {
    return false;
  }

  return isPalindrome(str, start + 1, end - 1);
}

int main() {
  string str = "moinkniom";
  int n = str.length();

  bool ans = isPalindrome(str, 0, n - 1);
  cout<<"is palindrome: "<<ans<<endl;
  return 0;
}