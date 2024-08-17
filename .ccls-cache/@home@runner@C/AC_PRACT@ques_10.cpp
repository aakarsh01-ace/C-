// // program to check whether or not there is any cycle in a linked list
// #include <bits/stdc++.h>
// using namespace std;

// struct ListNode{
//   int val;
//   ListNode *next;
//   ListNode(int x): val(x), next(NULL){}
// };

// bool loop(ListNode* head){
//   ListNode* slow = head;
//   ListNode* fast = head;

//   while(fast!=NULL && fast->next!=NULL){
//     slow = slow->next;
//     fast = fast->next->next;

//     if(slow == fast){
//       return true;
//     }
//   }
//   return false;
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

//     // Optionally, you can create a loop in the list manually
//     // Uncomment the following lines to create a loop for testing
//     // current->next = head->next;  // Creates a loop for testing

//     if (loop(head)) {
//         cout << "The linked list contains a loop." << endl;
//     } else {
//         cout << "The linked list does not contain a loop." << endl;
//     }

//     // Free the allocated memory (if no loop is created)
//     current = head;
//     unordered_map<ListNode*, bool> visited;
//     while (current != nullptr && visited[current] == false) {
//         visited[current] = true;
//         ListNode* temp = current;
//         current = current->next;
//         delete temp;
//     }

//     return 0;
// }