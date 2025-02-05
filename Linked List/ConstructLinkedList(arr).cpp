// CPP code to cnstruct a linked list when an array of elements are given
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = nullptr;
  }
}

// function to creat the linked list
Node* ConstructLL(vector<int> arr){
  int n = arr.size();
  if(n==0) return nullptr;

  // create a head
  Node* head = new Node(arr[0]);
  Node* temp = head;

  for(int i = 1; i < n; i++){
    temp->next = new Node(arr[i]);
    temp = temp->next;
  }
  return head;
}

// printing the linked list
void printList(Node* head){
  Node* temp = head;

  while(temp != nullptr){
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL\n"
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  Node* ANSWER = ConstructLL(arr);
  printList(ANSWER);

  return 0;
}