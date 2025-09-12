/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        if(head==NULL){
            return false;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
        
        // code here
        
    }
};