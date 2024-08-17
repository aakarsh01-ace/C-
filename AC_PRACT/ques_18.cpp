// // union of 2 sorted arrays
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> UNION(vector<int> a, vector<int> b){
//   int i = 0;
//   int j = 0;
//   int n = a.size();
//   int m = b.size();

//   vector<int> unionArr;
//   while(i<n && j<m){
//     if(a[i] <= b[j]){
//       if(unionArr.size()==0 || unionArr.back() != a[i]){
//         unionArr.push_back(a[i]);
//       }
//       i++;
//     }else{
//       if(unionArr.size()==0 || unionArr.back() != b[j]){
//         unionArr.push_back(b[j]);
//       }
//       j++;
//     }

//     while(j<m){
//       if(unionArr.size()==0 || unionArr.back() != b[j]){
//         unionArr.push_back(b[j]);
//       }
//       j++;
//     }

//     while(i<n){
//       if(unionArr.size()==0 || unionArr.back() != a[i]){
//         unionArr.push_back(a[i]);
//       }
//       i++;
//     }
//   }
//   return unionArr;
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

//   vector<int> ans = UNION(a, b);
//   for(int i=0; i<ans.size(); i++){
//     cout<<ans[i];
//   }
//   return 0;
// }