/* Structure of a Linked List node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* rev(Node* root){
        if(!root){
            return NULL;
        }
        Node* prev = NULL;
        Node* next = NULL;
        Node* curr = root;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node *compute(Node *head) {
        head = rev(head);
        int mx = head->data;
        Node* curr = head;
        while(curr && curr->next){
            if(curr->next->data < mx){
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            }
            else{
                curr = curr->next;
                mx = curr->data;
            }
        }
        return rev(head);
        
    }
};