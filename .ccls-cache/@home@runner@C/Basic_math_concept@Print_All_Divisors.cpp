// #include <bits/stdc++.h>
// using namespace std;

// void Divisors(int N){
//   vector<int> lst;
//   for(int i=1; i*i<=N; i++){
//     if(N%i==0){
//       lst.push_back(i);
//       if((N/i) != i){
//         lst.push_back(N/i);
//       }
//     }
//   }
//   sort(lst.begin(), lst.end());
//   for(auto it : lst) cout << it << " ";
// }

// int main(){
//   int n;
//   cin>>n;

//   Divisors(n);
//   return 0;
// }

// // in case of multiple testcases
// // int main(){
// //   int t;
// //   cin>>t;

// //   while(t--){
// //     int n;
// //     cin>>n;
// //     Divisors(n);
    
// //     return 0;
// //   }
// // }