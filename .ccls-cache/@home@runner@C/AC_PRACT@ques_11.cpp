// #include <bits/stdc++.h>
// using namespace std;

// int pairs(int arr1[], int N, int arr2[], int M){
//   priority_queue<int> pq;

//   int count = 0;

//   sort(arr1, arr1+N);

//   for(int j=0; j<M; j++){
//     pq.push(arr2[j]);
//   }

//   for(int i = N-1; i>=0; i--){
//     if(pq.top() >= 2 * arr1[i]){
//       count++;

//       pq.pop();
//     }
//   }

//   return count;
// }

// int main(){
//   int N;
//   cin>>N;

//   int arr1[N];
//   for(int i = 0; i<N; i++){
//     cin>>arr1[i];
//   }

//   int M;
//   cin>>M;
//   int arr2[M];
//   for(int j=0; j<M; j++){
//     cin>>arr2[j];
//   }

//   int ans = pairs(arr1, N, arr2, M);
//   cout << ans;

//   return 0;
// }