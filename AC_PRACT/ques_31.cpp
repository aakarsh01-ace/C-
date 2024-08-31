// // max subarray sum
// #include <bits/stdc++.h>
// using namespace std;

// int SubSum(vector<int> arr, int n){
//   // int left = 0;
//   // int right = n-1;
//   int maxsum = arr[0];
//   int sum = arr[0];
  
//   if(n==0) return -1;
//   if(n==1) return arr[n];

//   for(int i = 1; i<n; i++){
//     sum = max(sum, sum+arr[i]);
    
//   }

//   if(maxsum<sum){
//     maxsum = sum;
//   }
//   return maxsum;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);

//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int res = SubSum(arr, n);
//   cout<<res;
//   return 0;
// }