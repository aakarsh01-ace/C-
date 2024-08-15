// // return largest

// #include <bits/stdc++.h>
// using namespace std;

// int largest_num(vector<int> nums, int n){
//   int largest = nums[0];
//   for(int i=0; i<n; i++){
//     if(nums[i]>largest){
//       largest = nums[i];
//     }
//   }
//   return largest;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> nums(n);
//   for(int i=0; i<n; i++){
//     cin>>nums[i];
//   }

//   int res = largest_num(nums, n);
//   cout<<res;
//   return 0;
// }