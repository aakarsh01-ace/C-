// // middle of a linked list

// #include <bits/stdc++.h>
// using namespace std;

// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode(int x) : val(x), next(NULL) {}
// };

// ListNode* middlenode(ListNode* head){
//   ListNode* slow = head;
//   ListNode* fast = head;

//   while(fast!=NULL && fast->next!=NULL){
//     slow = slow->next;
//     fast = fast->next->next;
//   }
//   return slow;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements in the linked list: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "The linked list must have at least one element." << endl;
//         return 0;
//     }

//     cout << "Enter the elements of the linked list: " << endl;

//     int value;
//     cin >> value;
//     ListNode* head = new ListNode(value);
//     ListNode* current = head;

//     for (int i = 1; i < n; ++i) {
//         cin >> value;
//         current->next = new ListNode(value);
//         current = current->next;
//     }

//     //Solution solution;
//     ListNode* middle = middlenode(head);

//     cout << "The middle node's value is: " << middle->val << endl;

//     // Free the allocated memory
//     current = head;
//     while (current != nullptr) {
//         ListNode* temp = current;
//         current = current->next;
//         delete temp;
//     }
//     return 0;
// }