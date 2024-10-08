#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
  if(n == 0){
    return 0;
  }
  int reversed = 0;
  while(n > 0){
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }
  return reversed;
}

int main(){
  int n;
  cin>>n;

  int res = reverseNum(n);
  cout<<res;

  return 0;
}