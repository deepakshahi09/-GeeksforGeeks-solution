/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* reverse(Node* head){

        Node* curr = head;
        Node* next = head;
        Node* prev = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node *compute(Node *head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        head = reverse(head);
        Node* curr = head;
        int maxval = curr->data;
        while(curr->next){
            if(curr->next->data < maxval){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
                maxval = curr->data;
            }
        }
        head = reverse(head);
        return head;
        
        // your code goes here
    }
};