// // Maximum sum of a contiguous array
// #include <bits/stdc++.h>
// using namespace std;

// int MaxSubSum(vector<int> arr, int n){
//   int max_sum = INT_MIN;
//   int curr_sum = 0;

//   for(int i = 0; i < n; i++){
//     curr_sum += arr[i];
//     if(curr_sum > max_sum){
//       max_sum = curr_sum;
//     }
//     if(curr_sum<0){
//       curr_sum=0;
//     }
//   }
//   return max_sum;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);

//   for(int i = 0; i < n; i++){
//     cin>>arr[i];
//   }

//   int res = MaxSubSum(arr, n);
//   cout<<res<<endl;
//   return 0;
// }