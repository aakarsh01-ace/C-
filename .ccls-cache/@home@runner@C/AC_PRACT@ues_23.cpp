// counting the number of vowels
#include <bits/stdc++.h>
using namespace std;

int vowels(string s){
  int count = 0;
  //a = 97, e = 101, i = 105, o = 111, u = 117
  for(char c : s){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
      count++;
    }
  }
  return count;
}

int main(){
  string s;
  cin >> s;

  int ans = vowels(s);
  cout<<ans;
  return 0;
}