// // Find the max number of supreme elements in the array
// // supreme elements are elements that are greater than the all the elements to their RIGHT.

// #include <bits/stdc++.h>
// using namespace std;

// int Find_Max_No_Of_Supreme_Numbers(int arr[], int n){
//   int count = 1;
//   int temp = INT_MIN;

//   for(int i=n-1; i>=0; i--){
//     if(arr[i] > temp){
//       count += 1;
//       temp = arr[i];
//     }
//   }
//   return count;
// }

// int main(){
//   int n;
//   cin>>n;

//   int arr[n];

//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int res = Find_Max_No_Of_Supreme_Numbers(arr, n);
//   cout<<res;
//   return 0;
// }