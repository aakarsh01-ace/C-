#include <bits/stdc++.h>
using namespace std;

// brute force approach
// for every element in the array we will have a count variable to store their occurences. If it is one, we return the number

// int Count_one(int arr[], int n){
//   for(int i=0; i<n; i++){
//     int num = arr[i];
//     int count = 0;
//     for(int j=0; j<n; j++){
//       if(arr[j]==num){
//         count++;
//       }
//     }
//     if(count==1) return num;
//   }
//   return -1;
// }

// better approach
// this can be split into two steps
// vector<int> Count_one(vector<int> arr, int n){
//   // Step.1 - figure out max elements
//   int maxx = arr[0]; // declared the first element as the        highest element
//   for(int i=0; i<n; i++){
//     maxx = max(maxx, arr[i]);
//   }

//   vector<int> hash(maxx+1, 0);

//   // Step2. - Count the frequency of each element
//   for(int i=0; i<n; i++){
//     hash[arr[i]]++;
//   }

//   for(int i=0; i<n; i++){
//     if(hash[arr[i]]==1){
//       return {arr[i]};
//     }
//   }
//   return {-1};
// }


// Optimal approach
// using the xor approach
vector<int> Count_one(vector<int> arr, int n){
  int xorr = 0;
  for(int i=0; i<n; i++){
    xorr = xorr^arr[i];
  }
  return {xorr};
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  vector<int> res = Count_one(arr, n);
  for(int i=0; i<res.size(); i++){
    cout<<res[i]<<" ";
  }
  cout<<endl;
  return 0;
}

