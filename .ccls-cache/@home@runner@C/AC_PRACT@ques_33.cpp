// find the kth largest element in an array
// O(nlogn) approach
#include <bits/stdc++.h>
using namespace std;

int Klarge(vector<int> arr, int n, int k){
  sort(arr.begin(), arr.end());

  int klarge = arr[n-k];

  return klarge;
  
}

int main(){
  int n;
  cin>>n;

  vector<int> arr(n);
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  int k;
  cin>>k;
  int res = Klarge(arr, n, k);
  cout<<res;
  return 0;
}