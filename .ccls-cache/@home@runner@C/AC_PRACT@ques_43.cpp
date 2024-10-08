// #include <bits/stdc++.h>
// using namespace std;

// vector<int> SwitchCh(vector<int> arr, int n){
//   vector<int> arr1;//positive
//   vector<int> arr2;//negative
//   vector<int> result;
//   for(int i = 0; i<n; i++){
//     if(arr[i] > 0 || arr[i] == 0){
//       arr1.push_back(arr[i]);
//     }else if(arr[i] < 0){
//       arr2.push_back(arr[i]);
//     }
//   }

//   for(int i = 0; i<arr1.size(); i++){
//     result.push_back(arr1[i]);
//     result.push_back(arr2[i]);
//   }
//   return result;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i = 0; i< n; i++){
//     cin>>arr[i];
//   }

//   vector<int> ans = SwitchCh(arr, n);
//   for(int i = 0; i < ans.size(); i++){
//     cout<<ans[i]<<" ";
//   }

//   return 0;
// }