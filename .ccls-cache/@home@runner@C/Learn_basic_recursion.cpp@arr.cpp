#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr;
  int input;

  while(true){
    cin>>input;

    if(input==-1) break;
    arr.push_back(input);

    for(const auto &element : arr){
      cout<<element<<" ";
    }
    return 0;
  }
}