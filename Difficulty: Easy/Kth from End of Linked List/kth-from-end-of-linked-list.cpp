/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* fast = head;
        Node* slow = head;
        
        
        for(int i=0;i<k;i++){
            if(fast == NULL){
                return -1;
            }
            else{
                fast = fast->next;
            }
            
        }
        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->data;
    }
};