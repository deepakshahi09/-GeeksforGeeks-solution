/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        Node* new_node = new Node(key);
        if(head != NULL && key <= head->data){
            new_node->next = head;
            head = new_node;
            return head;
        }
        Node* curr = head;
        while(curr->next && curr->next->data < key){
            curr = curr->next;
        }
        new_node->next = curr->next;
        curr->next=new_node;
        return head;
        // Code here
        
    }
};