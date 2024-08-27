// // counting the number of vowels
// // this includes not including 
// #include <bits/stdc++.h>
// using namespace std;

// int vowels(string s){
//   int count = 0;
//   unordered_set<char> dupes;
//   string res;
//   //a = 97, e = 101, i = 105, o = 111, u = 117
//   for(char c : s){
//     if(dupes.find(c) == dupes.end()){
//       res += c;
//       dupes.insert(c);
//     }
//   }

//   for(char ch : res){
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//       count++;
//     }
//   }
//   return count;
// }

// int main(){
//   string s;
//   cin >> s;

//   int ans = vowels(s);
//   cout<<ans;
//   return 0;
// }