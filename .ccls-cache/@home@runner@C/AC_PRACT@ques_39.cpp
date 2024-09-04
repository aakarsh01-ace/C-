// // larger integer in a contiguous subarray of size "k"
// #include <bits/stdc++.h>
// using namespace std;

// void Maxx(vector<int> arr, int n, int k)
// {
//     int j, max;

//     for (int i = 0; i <= n - k; i++) {
//         max = arr[i];

//         for (j = 1; j < k; j++) {
//             if (arr[i + j] > max)
//                 max = arr[i + j];
//         }
//         cout << max << " ";
//     }
// }

// int main(){
//   int n;
//   cin>>n;

//   vector<int> arr(n);
//   for(int i = 0; i < n; i++){
//     cin>>arr[i];
//   }

//   int k;
//   cin>>k;

//   Maxx(arr, n, k);
//   return 0;
// }