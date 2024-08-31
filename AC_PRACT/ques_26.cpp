// // count of 2nd highest element
// #include <bits/stdc++.h>
// using namespace std;

// int CountOfSecondHighestElement(vector<int> arr, int n){
  
//   int largest = arr[0];
//   int second = INT_MIN;
//   //int count = 1;
//   //int m = secondLargest.size();
  
//   for(int i = 1;i<n; i++){
//     if(arr[i] > largest){
//       largest = arr[i];
//       second = largest;
//     }else if(arr[i] > second && arr[i] < largest){
//       second = arr[i];
//     }else if(arr[i] == second){
//       i++;
//     }
//   }
//   return second;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i=1; i<n; i++){
//     cin>>arr[i];
//   }

//   int ans = CountOfSecondHighestElement(arr, n);
//   cout<<ans;
//   return 0;
// }