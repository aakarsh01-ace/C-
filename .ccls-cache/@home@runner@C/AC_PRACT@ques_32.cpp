// // sum of unique elements in an array
// #include <bits/stdc++.h>
// using namespace std;

// int UniqueSum(vector<int> arr, int n){
//   set<int> st;
//   vector<int> uni;
//   int unisum = 0;
//   for(int i = 0; i<n; i++){
//     st.insert(arr[i]);
//   }

//   for(auto it: st){
//     uni.push_back(it);
//   }

//   for(int i = 0; i<uni.size(); i++){
//     unisum += uni[i];
//   }
//   return unisum;  
// }

// int main(){
//   int n;
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int res = UniqueSum(arr, n);
//   cout<<res;
//   return 0;
// }
