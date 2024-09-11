// // cpp code to check if the person is older than 60 years old or not
// #include <bits/stdc++.h>
// using namespace std;

// int CountOfPerson(vector<string> details){
//   int n = details.size();
//   int count = 0;

//   for(int i = 0; i < n; i++){
//     int age = stoi(details[i].substr(11, 2));

//     if(age>60){
//       count++;
//     }
//   }
//   return count;
// }

// int main(){
//   vector<string> details(15);
//   for(int i = 0; i<15; i++){
//     cin>>details[i];
//   }

//   int result = CountOfPerson(details);
//   cout<<result;
//   return 0;
// }