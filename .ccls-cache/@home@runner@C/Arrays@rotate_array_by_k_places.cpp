// #include <bits/stdc++.h>
// using namespace std;

// void rotateArray(int arr[], int n, int d){
//   d=d%n; // number of rotation

//   int temp[d];

//   for(int i=0; i<d; i++){
//     temp[i] = arr[i];
//   }

//   // shifting
//   for(int i=d; i<n; i++){
//     arr[i-d]=arr[i];
//   }

//   // put temp back
//   for(int i=n-d; i<n; i++){
//     arr[i]=temp[i-(n-d)];
//   }
// }

// int main(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int d;
//   cin>>d;
//   rotateArray(arr, n, d);
//   for(int i=0; i<n; i++){
//     cout<<arr[i];
//   }

//   return 0;
// }