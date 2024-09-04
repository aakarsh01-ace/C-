// // implementing stack using array
// #include <bits/stdc++.h>
// using namespace std;

// class Stack{
// private:
//   int* arr;
//   int capacity;
//   int top;
// public:
//   Stack(int size){
//     capacity = size;
//     arr = new int[capacity];
//     top = -1;
//   }

//   ~Stack(){
//     delete[] arr;
//   }

//   bool isEmpty(){
//     return (top==-1);
//   }
//   bool isFull(){
//     return (top==capacity-1);
//   }
//   void push(int x){
//     if(isFull()){
//       cout<<"Overflow"<<endl;
//       return;
//     }
//     arr[++top] = x;
//   }
//   int pop(){
//     if(isEmpty()){
//       cout<<"Underflow"<<endl;
//       return -1;
//     }
//     int x = arr[top];
//     top--;
//     return x;
//   }
//   int peek(){
//     if(isEmpty()){
//       cout<<"Empty Stack!"<<endl;
//     }
//     return arr[top];
//   }
// };

// int main(){
//   int size;
//   cin>>size;
// }