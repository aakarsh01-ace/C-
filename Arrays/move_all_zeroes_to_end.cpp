// #include <bits/stdc++.h>
// using namespace std;

// brute force approach

// void zeroes(int arr[], int n){
//   // store all non zero elements in the temp array
//   vector<int> temp;

//   for(int i=0; i<n; i++){
//     if(arr[i]!=0){
//       temp.push_back(arr[i]);
//     }
//   }

//   // add all the non zero elements in the array
//   for(int i=0; i<temp.size(); i++){
//     arr[i]=temp[i];
//   }

//   // add the remaining zeroes to the end of the array
//   // the indexes of zeroes are determined by the number of non-zero elements
//   for(int i=temp.size(); i<n; i++){
//     arr[i]=0;
//   }
// }

// int main(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   zeroes(arr, n);
//   for(int i=0; i<n; i++){
//     cout<<arr[i];
//   }

//   return 0;
// }

// better approach
// optimal approach

// #include <bits/stdc++.h>
// using namespace std;

// int MoveZero(vector<int> arr){
  
// }
