//Question 1: print a name n times using recurrsion

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int n){
//   if(i>n) return; // if i exceeds v, the code terminates
//   //if not, we first print the name
//   cout<<"Sample Output"<<" ";
//   //and everytime the function calls itself, the value of i is increased by 1, until the stopping condition is met
//   f(i+1, n);
// }

// int main(){
//   int N;
//   cin>>N;
//   f(1, N); // we initialized i to 1 for obvious reasons :)
//   return 0;
// }

//Question 2: print 1 to n using recursion
// #include <bits/stdc++.h>
// using namespace std;

// void f(int n){
//   if(n==0) return;
//   f(n-1);
//   cout<<n<<" ";
// }

// int main(){
//   int n;
//   cin>>n;

//   f(n);
//   return 0;
// }

//Question 3: print from n to 1 using recursion
#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
  // similar to the first problem, here we will check if i is less than 1 or not
  if(i<1) return; // program gets terminated
  // if not print the value of i
  cout<<i<<" ";
  f(i-1, n);
  
}

int main(){
  int n;
  cin>>n;
  f(n,n);
  return 0;
}