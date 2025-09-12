// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        if(head == NULL&& head->next ==  NULL){
            return head;
        }
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = NULL;
        curr->next = head;
        head = curr;
        return head;
    }
};