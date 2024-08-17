// // missing number
// #include <bits/stdc++.h>
// using namespace std;

// int missing(vector<int> arr, int n){
//   int sum_1 = (n*(n+1))/2;
//   int sum_2 = 0;

//   for(int i=0; i<n; i++){
//     sum_2 += arr[i];
//   }
//   return (sum_1 - sum_2);
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n-1);
//   for(int i=0; i<n-1; i++){
//     cin>>arr[i];
//   }

//   int ans = missing(arr, n);
//   cout<<ans<<endl;
//   return 0;
// }