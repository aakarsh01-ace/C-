// // KADANE'S ALGORITHM

// #include <bits/stdc++.h>
// using namespace std;

// int maxsub(vector<int> nums, int n){
//   int sum = 0;
//   int maxx = INT_MIN;
//   for(int i=0; i<n; i++){
//     sum += nums[i];
//     maxx = max(maxx, sum);
//     if(sum<0){
//       sum = 0;
//     }
//   }
//   return maxx;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> nums(n);

//   for(int i =0; i<n; i++){
//     cin>>nums[i];
//   }

//   int ans = maxsub(nums, n);
//   cout<<ans;
//   return 0;
// }



// int maxsub(vector<int> arr, int n){
//   int sum = 0;
//   int maxx = INT_MIN;

//   for(int i=0; i<n; i++){
//     sum += arr[i];
//     maxx = max(maxx, sum);
//     if(sum<0){
//       sum = 0;
//     }
//   }
//   return maxx;
// }


// int maxsubsum(vector<int> arr, int n){
//   int sum = 0;
//   int maxx = INT_MIN;

//   for(int i=0; i<n; i++){
//     sum += arr[i];
//     maxx = max(maxx, sum);
//     if(sum<0){
//       sum = 0;
//     }
//   }
//   return maxx;
// }