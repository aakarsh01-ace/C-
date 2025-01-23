// // cpp code to implement lower bound
// // I will only be writing the functions and no boiler codes

// int LBound(vector<int> arr, int n, int k){
//   int low = 0, high = n - 1;
//   int res = n;

//   while(low <= high){
//     int mid = low + (high - low) / 2;
//     if(arr[mid] >= k){
//       res = mid;
//       high = mid - 1; // right side elimination
//     }else{
//       low = mid + 1; // left side elimination
//     }
//   }
//   return res;
// }