// // follows first in first out principle or simply FIFO

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   queue<int> q1;
//   queue<int> q2;
//   q1.push(1);
//   q1.push(2);
//   q1.push(3);
//   q1.back() += 18;


//   while(!q1.empty()){
//     q2.swap(q1);
//     while(!q2.empty()){
//       int front = q2.front();
//       cout<<front<<" ";
//       q2.pop();
//     }
//     // int front = q1.front();
//     // cout<<front<<" ";
//     // q1.pop();
//   }
//   cout<<endl;
//   return 0;
// }