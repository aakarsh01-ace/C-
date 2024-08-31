// ques 33 with O(n) approach
#include<bits/stdc++.h>
using namespace std;

int LargeINT(vector<int> arr, int n){
  sort(arr.begin(), arr.end());
  int largest = arr[n-1];
  int Large = largest;
  for(int i = 0; i < n; i++){
    if(arr[i] == -(largest)){
      Large = -(arr[i]);
      return Large;
    }else if(arr[i] != -(largest)){
      largest = arr[n-1]-1;
      i++;
    }
  }
  return -1;
}

int main(){
  int n;
  cin>>n;

  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  int res = LargeINT(arr, n);
  cout<<res;
  return 0;
}