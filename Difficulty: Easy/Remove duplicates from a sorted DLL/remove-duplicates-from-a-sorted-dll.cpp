/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* temp = head;
        while(temp){
            while(temp->next && temp->next->data == temp->data){
                Node* del = temp->next;
                temp->next = temp->next->next;
                if(temp->next){
                    temp->next->prev = temp;
                }
                delete del;
                
            }
            temp = temp->next;
        }
        return head;
    }
};