// // ques 33 with O(n) approach
// #include<bits/stdc++.h>
// using namespace std;

// int LargeINT(vector<int> arr, int n, int k){
//   priority_queue<int, vector<int>, greater<int>> minheap;

//   for(int n : arr){
//     minheap.push(n);
//   }

//   if(minheap.size() > k) minheap.pop();
//   return minheap.top();
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

//   int res = LargeINT(arr, n,k);
//   cout<<res;
//   return 0;
// }