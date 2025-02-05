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