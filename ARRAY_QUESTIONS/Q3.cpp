// // CPP CODE TO RETURN THE SUM OF EVEN ELEMENTS IN AN ARRAY

// #include<bits/stdc++.h>
// using namespace std;

// int EvenSum(vector<int> list){
//   int sum = 0;
//   for(int num : list){
//     if(num % 2 == 0){
//       sum += num;
//     }
//   }
//   return sum;
// }

// int main(){
//   string input;
//   vector<int> list;

//   getline(cin, input);
//   istringstream iss(input);
//   int number;

//   while(iss >> number){
//     list.push_back(number);
//   }

//   int res = EvenSum(list);
//   cout<<res;
//   return 0;
// }