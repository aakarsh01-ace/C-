// Replace ch1 with ch2 and vice versa in a given string
#include <bits/stdc++.h>
using namespace std;

void ReplaceCharacters(string str, int n, char ch1, char ch2){
  string res = " ";
  if(n==0){
    cout<<'null';
  }
  for(int i = 0; i<n; i++){
    if(str[i] == ch1){
      res = res + ch2;
    }else if(str[i] == ch2){
      res = res + ch1;
    }else{
      res = res + str[i];
    }
  }
  cout<<res.substr(1);
}

int main(){
  int n;
  cin>>n;

  string str;
  str.reserve(n);

  for(int i = 0; i<n; i++){
    char temp;
    cin>>temp;
    str +=temp;
  }
  char ch1;
  cin>>ch1;

  char ch2;
  cin>>ch2;

  ReplaceCharacters(str, n, ch1, ch2);
  return 0;
  
}