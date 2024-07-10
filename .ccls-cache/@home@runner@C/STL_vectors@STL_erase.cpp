// // how to erase a vector

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   vector<int> number;
//   int input;

//   while(true){
//     cin >> input;

//     if(input== -1){
//       break;
//     }
//     number.push_back(input);
//   }


//   // to delete any elements in-between the vector, we must assign a start address and an end     address
//   number.erase(number.begin()+1, number.end()-1);

//   for(auto it = number.begin(); it!=number.end(); it++){
//     cout<<*(it)<<" ";
//   }
  
//   // for(auto it = number.begin(); it!=number.end(); it++){
//   //   number.erase(number.begin()+1);
//   //   cout<<*(it)<< " ";
//   // }

//   return 0;
// }