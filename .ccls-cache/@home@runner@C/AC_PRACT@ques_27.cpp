// // convert string1 to string2
// #include <bits/stdc++.h>
// using namespace std;

// int minSteps(string str1, string str2, int n, int m){

//   if(n==0) return m;
//   if(m==0) return n;

//   if(str1[n-1] == str2[m-1]){
//     return minSteps(str1, str2, n-1, m-1);
//   }

//   // if the last elements are not same then
//   int insertion = minSteps(str1, str2, n, m-1);
//   int deletion = minSteps(str1, str2, n-1, m);
//   int replace = minSteps(str1, str2, n-1, m-1);

//   return 1+min({insertion, deletion, replace});
// }

// int main(){
//   string str1;
//   cin>>str1;
//   string str2;
//   cin>>str2;

//   int n = str1.length();
//   int m = str2.length();

//   int ans = minSteps(str1, str2, n, m);
//   cout<<ans;
//   return 0;
// }