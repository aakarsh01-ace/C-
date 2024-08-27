// // googly integer or not
// #include <bits/stdc++.h>
// using namespace std;

// int Googly(int n){
//   // n = 43
//   // 4+3 = 7
//   int summation = 0;

//   while(n!=0){
//     summation += n%10;
//     n = n / 10;
//   }
//   if(summation%1==0 && summation%summation==0){
//     return 1;
//   }else return 0;
// }

// int main(){
//   int n;
//   cin >> n;

//   int ans = Googly(n);
//   cout<<ans;
//   return 0;
// }