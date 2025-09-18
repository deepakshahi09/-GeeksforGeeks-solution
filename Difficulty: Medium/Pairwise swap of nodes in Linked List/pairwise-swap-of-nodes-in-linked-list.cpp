/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *pairwiseSwap(Node *head) {
         if(head == NULL) return head;
        Node *curr = head, *Next, *temp;
        
        while(curr!=NULL && curr->next !=NULL){
            Next = curr->next->next;
            int currData = curr->data;
            curr->data = curr->next->data;
            curr->next->data = currData;
            curr  = Next;
            
        }
        return head;
        // code here
        
    }
};