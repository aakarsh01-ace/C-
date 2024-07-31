// #include <bits/stdc++.h>
// using namespace std;

// int consecutive(vector<int> arr, int n){
//   int Max = 0;
//   int count = 0;

//   for(int i=0; i<n; i++){
//     if(arr[i]==1){
//       count++;
//       Max = max(Max, count);
//     }else{
//       count = 0;
//     }
//   }
//   return Max;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int MaxOnes = consecutive(arr, n);
//   cout<<MaxOnes<<endl;
//   return 0;
// }