// // Question: find the largest element in the array
// // an optimal approach approach

// #include <bits/stdc++.h>
// using namespace std;

// int large(vector<int> &arr, int n){
//   int largest = arr[0];
//   for(int i=0; i<n; i++){
//     if(arr[i]>largest){
//       largest = arr[i];
//     }
//   }
//   return largest;
// }

// int main(){
//   int n;
//   cin>>n;
//   vector<int> arr(n);

//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int res = large(arr, n);
//   cout<<res<<endl;
//   return 0;
  
// }