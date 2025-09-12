/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        if(head == NULL){
            return head;
        }
        unordered_set<int>set;
        Node* curr = head;
        Node* prev= NULL;
        while(curr){
            if(set.find(curr->data) != set.end()){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            else{
                set.insert(curr->data);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
        // your code goes here
    }
};