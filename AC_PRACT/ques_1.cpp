// #include<bits/stdc++.h>
// using namespace std;

// int Rat(vector<int> arr, int unit, int r, int n){
//   n = arr.size();
//   if(n==0){
//     return -1;
//   }
  
//   int count = 0;
//   int sum = 0;
//   int target = r * unit;
  
//   for(int i=0; i<n; i++){
//     sum += arr[i];
//     if(sum>=target) count += 1;
//     else if(sum==target) return count;
//     else return 0;
//   }
//   return count;
// }

// int main(){
//   int r; // no. of rats
//   cin>>r;
//   int unit; // food required by each rat
//   cin>>unit;
//   int n;
//   cin>>n;

//   vector<int> arr(n); // quantity of food in n houses

//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   int res = Rat(arr, unit, r, n);
//   cout<<res;
//   return 0;
// }