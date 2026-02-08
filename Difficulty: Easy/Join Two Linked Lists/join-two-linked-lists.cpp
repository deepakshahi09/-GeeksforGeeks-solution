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
    Node* joinTheLists(Node* head1, Node* head2) {
        // code here
        if(!head1) return head2;
        if(!head2) return head1;
        Node* curr = head1;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = head2;
        return head1;
    }
};