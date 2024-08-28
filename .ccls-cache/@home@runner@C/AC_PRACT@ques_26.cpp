// count of 2nd higheest element
#include <bits/stdc++.h>
using namespace std;

int CountOfSecondHighestElement(vector<int> arr, int n){
  
  int largest = arr[0];
  int second = INT_MIN;
  // int count = 1;
  vector<int> secondLargest;
  //int m = secondLargest.size();
  
  for(int i = 0; i<n; i++){
    if(arr[i] > largest){
      largest = arr[i];
      second = largest;
    }else if(arr[i] > second && arr[i] < largest){
      second = arr[i];
    }
  }
  secondLargest.push_back(second);
  return secondLargest.size();
}

int main(){
  int n;
  cin>>n;

  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int ans = CountOfSecondHighestElement(arr, n);
  cout<<ans;
  return 0;
}