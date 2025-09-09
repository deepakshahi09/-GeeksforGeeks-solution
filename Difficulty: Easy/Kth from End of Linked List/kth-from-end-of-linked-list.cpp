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
        int size = 0;
        Node* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }
        if(k > size){
            return -1;
        }
        int rev = size - k;
        temp = head;
        while(rev--){
            temp = temp->next;
           
        }
        return temp->data;
        
        // code here
        
    }
};