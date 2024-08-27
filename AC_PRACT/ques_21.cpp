// //counting occurences of each element in the array
// #include <bits/stdc++.h>
// using namespace std;

// vector<pair<int, int>> occurences(int arr[], int n){
//   unordered_map<int, int> mp;

//   for(int i=0; i<n; i++){
//     mp[arr[i]]++;
//   }

//   vector<pair<int, int>> result;
//   for(auto it = mp.begin(); it !=mp.end(); ++it){
//     result.push_back(make_pair(it->first, it->second));
//   }
//   return result;
// }

// int main(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   vector<pair<int, int>> ans = occurences(arr, n);
//   for(auto it : ans){
//     cout<< it.first << " " << it.second << endl;
//   }

//   return 0;
// }
