// // intersection of two arrays
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> intersect(vector<int> a, vector<int> b){
//   vector<int> res;
//   unordered_map<int, int> mp1, mp2;

//   for(auto x : a){
//     mp1[x]++;
//   }

//   for(auto x : b){
//     mp2[x]++;
//   }

//   for(auto x : mp1){
//     int count = 0;
//     count = min(x.second, mp2[x.first]);
//     if(count>0){
//       res.push_back(x.first);
//     }
//     return res;
//   }
//   return {};
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> a(n);
//   for(int i=0; i<n; i++){
//     cin>>a[i];
//   }

//   int m;
//   cin>>m;
//   vector<int> b(m);
//   for(int i=0; i<m; i++){
//     cin>>b[i];
//   }

//   vector<int> ans = intersect(a, b);
//   for(int i=0; i<ans.size(); i++){
//     cout<<ans[i];
//   }
//   return 0;
// }