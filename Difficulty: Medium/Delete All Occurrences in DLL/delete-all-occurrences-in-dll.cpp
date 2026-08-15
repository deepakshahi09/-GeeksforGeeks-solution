/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/

class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        while(head && head->data == x){
            Node* del = head;
            head = head->next;
            if(head){
                head->prev = NULL;
            }
            delete del;
        }
        
        Node* temp = head;
        while(temp){
            if(temp->data == x){
                Node* del = temp;
                temp->prev->next = temp->next;
                if(temp->next){
                    temp->next->prev = temp->prev;
                }
                temp = temp->next;
                delete del;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};






