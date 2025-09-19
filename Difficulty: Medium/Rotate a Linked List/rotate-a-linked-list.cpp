/*
class Node {
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
    Node* rotate(Node* head, int k) {
        // code here
        if(!head || !head->next || k==0){
            return head;
        }
        int len = 1;
        Node* temp = head;
        while(temp->next){
            len++;
            temp = temp->next;
        }
        k = k % len;
        if(k == 0){
            return head;
        }
        temp->next  = head;
        Node* newtail = head;
        for(int i=1;i<k;i++){
            newtail = newtail->next;
        }
        Node* newhead = newtail->next;
        newtail->next = NULL;
        return newhead;
        
    }
};