// // code for prime numbers

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> Prime(vector<int> arr, int n){
//   vector<int> prime;
//   for(int i=0; i<n; i++){
//     if(arr[i]%1==0 || arr[i]%arr[i]==0){
//       prime.push_back(arr[i]);
//       return prime;
//     }else{
//       return {-1};
//     }
//   }
//   return {};
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   vector<int> res = Prime(arr, n);
//   for(int i=0; i<res.size(); i++){
//     cout<<res[i]<<" ";
//   }
//   return 0;
// }

