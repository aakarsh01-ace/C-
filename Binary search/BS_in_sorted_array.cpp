// #include<bits/stdc++.h>
// using namespace std;

// int BinarySearch(vector<int> arr, int n, int k){
//   int low = 0, high = n - 1;

//   while(low <= high){
//     int mid = low + (high - low) / 2;
//     if(arr[mid] == k) return mid;
//     else if(arr[mid] <= k){
//       low = mid + 1;
//     }else{
//       high = mid - 1;
//     }
//   }
//   return -1;
// }

// int main(){
//   int n;
//   cin >> n;

//   vector<int> arr(n);
//   for(int i = 0; i < n; i++){
//     cin >> arr[i];
//   }

//   int k;
//   cin >> k;

//   int res = BinarySearch(arr, n, k);
//   cout << res;
//   return 0;
// }