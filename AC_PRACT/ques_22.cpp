// // merging two sorted arrays
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> MergeD(vector<int> arr1, int n, vector<int> arr2, int m){
//   vector<int> MergedArr;

//   for(int i = 0; i<n; i++){
//     MergedArr.push_back(arr1[i]);
//   }

//   //vector<int> xorr;
  
//   for(int i = 0; i<m; i++){
//     if((arr2[i] ^ MergedArr[i]) == arr2[i]){
//       MergedArr.push_back(arr2[i]);
//     // }else if(arr2[i] == MergedArr[i]){
//     //   i++;
//     }
//   }
//   return MergedArr;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr1(n);
//   for(int i = 0; i<n; i++){
//     cin>>arr1[i];
//   }

//   int m;
//   cin>>m;

//   vector<int> arr2(m);
//   for(int i = 0; i<m; i++){
//     cin>>arr2[i];
//   }

//   vector<int> answer = MergeD(arr1, n, arr2, m);
//   for(int i = 0; i<answer.size(); i++){
//     cout<<answer[i];
//   }

//   return 0;
// }