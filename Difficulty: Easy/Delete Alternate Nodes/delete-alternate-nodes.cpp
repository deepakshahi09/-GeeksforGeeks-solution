/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        if(head == NULL){
            return;
        }
        Node* curr = head;
        while(curr && curr->next){
            Node* del = curr->next;
            curr->next = del->next;
            delete del;
            curr = curr->next;
        }
    }
};