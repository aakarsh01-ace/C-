// // return index value if the desired element is present in the array
// #include <bits/stdc++.h>
// using namespace std;

// int IndexVal(vector<int> arr, int n, int divisor, int quotient, int remainder){
//   int dividend = divisor * quotient + remainder;
//   sort(arr.begin(), arr.end());
//   int left = 0;
//   int right = n-1;

//   for(int i = 0; i < n; i++){
//     if(arr[i] == dividend){
//       return i;
//       break;
//     }else if(arr[i] < dividend){
//       left++;
//     }else if(arr[i] > dividend){
//       right--;
//     }else{
//       return -1;
//     }
//   }
//   return -1;
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i = 0; i<n; i++){
//     cin>>arr[i];
//   }

//   int divisor;
//   cin>>divisor;

//   int quotient;
//   cin>>quotient;

//   int remainder;
//   cin>>remainder;

//   int result = IndexVal(arr, n, divisor, quotient, remainder);
//   cout<<result;
//   return 0;
// }