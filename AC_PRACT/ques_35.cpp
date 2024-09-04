// Check if two strings are Anagrams or not
#include <bits/stdc++.h>
using namespace std;

bool anag(string a, string b){
  if(a.length() != b.length()) return false;

  unordered_map<char, char> smap;
  unordered_map<char, char> tmap;

  for(int i = 0; i < a.size(); i++){
    smap[a[i]]++;
  }

  for(int i = 0; i < b.size(); i++){
    tmap[b[i]]++;
  }

  for(int i = 0; i < smap.size(); i++){
    if(smap[i] == tmap[i]){
      return true;
    }else{
      return false;
    }
  }
  return -1;
}

int main(){
  string a;
  cin>>a;

  string b;
  cin>>b;

  bool res = anag(a, b);
  cout<<res;
  return 0;
}