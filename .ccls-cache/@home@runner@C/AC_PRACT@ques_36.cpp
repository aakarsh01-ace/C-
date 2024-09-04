// // implement stack using array
// #include <bits/stdc++.h>
// using namespace std;
// class Stack{
// private:
//   int* arr;
//   int top;
//   int capacity;

// public:
//   //Constructor
//   Stack(int size){
//     capacity = size;
//     arr = new int[capacity];
//     int top = -1;
//   }

//   //Destructor
//   ~Stack(){
//     delete[] arr;
//   }

//   bool isEmpty(){
//     return (top==-1);
//   }
//   bool isFull(){
//     return (top == capacity - 1);
//   }
//   void push(int x){
//     if(isFull()){
//       cout<<"Overflow";
//       return;
//     }
//     arr[++top] = x;
//   }

//   int pop(){
//     if(isEmpty()){
//       cout<<"Underflow";
//     }
//     int x = arr[top];
//     top--;
//     return x;
//   }

//   int peek(){
//     if(isEmpty()){
//       cout<<"empty ";
//       return -1;
//     }
//     return arr[top];
    
//   }
// };