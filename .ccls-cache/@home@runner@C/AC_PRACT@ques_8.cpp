// // find the target element
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> trgt(vector<int> arr, int n, int target){
//   int left = 0;
//   int right = n-1;

//   while(left<=right){
//     int mid = left + (right-left)/2;
//     if(arr[mid] == target) return {mid};
//     else if(arr[mid] < target) left = mid+1;
//     else right = mid-1;
//   }
//   return {-1};
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int target;
//   cin>>target;

//   vector<int> ans = trgt(arr, n, target);
//   for(int i=0; i<ans.size(); i++){
//     cout<<ans[i];
//   }
//   return 0;
// }