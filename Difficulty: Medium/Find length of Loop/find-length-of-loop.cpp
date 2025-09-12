/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        if(head == NULL){
            return 0;
        }
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                int c = 0;
                slow = slow->next;
                while(fast != slow){
                    c++;
                    slow = slow->next;
                }
                return c+1;
            }
        }
        return 0;
        
        // code here
        
    }
};