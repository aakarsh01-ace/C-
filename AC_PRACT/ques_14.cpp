// // check if a string is a palindrome or not
// #include <bits/stdc++.h>
// using namespace std;

// bool palindrome(string str1){
//   int left = 0;
//   int right = str1.length()-1;

//   string str2 = str1;

//   while(left<right){
//     swap(str1[left], str1[right]);
//     left++;
//     right--;
//   }
//   if(str2 == str1) return true;
//   else return false;
// }

// int main(){
//   string str;
//   cin>>str;

//   bool res = palindrome(str);
//   cout<<res;
//   return 0;
// }