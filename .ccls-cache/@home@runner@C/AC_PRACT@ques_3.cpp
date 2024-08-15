// // singel digit number

// #include <bits/stdc++.h>
// using namespace std;

// int digit(int n){
//   while(n>=10){
//     if(n%2!=0){
//       n = floor(n/2);
//       break;
//     }else if(n%2==0){
//       n = floor((n-2)/2);
//       break;
//     }
//   }
//   return n;
// }

// int main(){
//   int n;
//   cin>>n;

//   int ans = digit(n);
//   cout<<ans;
//   return 0;
// }